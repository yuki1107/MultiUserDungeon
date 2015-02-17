/* objects in the game */
/* (not as in "object-oriented", but as in things you pick up) */

/* Where each thing is.  Negative if in the possession of a player. */
int thing_place[] = {
    /* idiot */ 11,
    /* newspaper */ 0,
    /* beer */ 2,
    /* paper */ 10,
    /* floppy */ 12,
    /* pop can */ 12,
    /* prereq form */ 13,
    /* winning cup */ 5,
    /* losing cup */ 5,
    /* bus ticket */ 1,
    /* sock */ 6,
};
int n_thing_place = sizeof thing_place / sizeof thing_place[0];
