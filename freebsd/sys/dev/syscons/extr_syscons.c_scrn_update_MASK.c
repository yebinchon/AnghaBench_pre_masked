
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_16__ ;


struct TYPE_19__ {int flags; } ;
struct TYPE_21__ {int status; int mouse_pos; int xsize; int start; int end; int cursor_pos; int cursor_oldpos; int ysize; int mouse_cut_end; int mouse_cut_start; TYPE_16__* sc; TYPE_2__* rndr; TYPE_1__ curs_attr; } ;
typedef TYPE_3__ scr_stat ;
struct TYPE_20__ {int (* blink_cursor ) (TYPE_3__*,int,int ) ;int (* draw ) (TYPE_3__*,int,int,int ) ;} ;
struct TYPE_18__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_16__*) ;
 int FUNC_1 (TYPE_16__*) ;
 int VAR_7 ;
 scalar_t__ FUNC_2 (int*,int*,int,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (TYPE_3__*,int,int,int ) ;
 int FUNC_10 (TYPE_3__*,int,int,int ) ;
 int FUNC_11 (TYPE_3__*,int,int,int ) ;
 int FUNC_12 (TYPE_3__*,int,int,int ) ;
 int FUNC_13 (TYPE_3__*,int,int,int ) ;
 int FUNC_14 (TYPE_3__*,int,int ) ;

__attribute__((used)) static void
FUNC_15(scr_stat *VAR_8, int VAR_9)
{
    int VAR_10;
    int VAR_11;
    int VAR_12;
    int VAR_13;



    FUNC_0(VAR_8->sc);



    if (VAR_8->status & VAR_5) {
 VAR_12 = VAR_8->mouse_pos;
 VAR_13 = VAR_8->mouse_pos + VAR_8->xsize + 1;
 if ((VAR_8->status & (VAR_4 | VAR_3))
     || FUNC_2(&VAR_12, &VAR_13, VAR_8->start, VAR_8->end)
     || ((VAR_8->status & VAR_1) &&
  (VAR_8->cursor_pos != VAR_8->cursor_oldpos) &&
  (FUNC_2(&VAR_12, &VAR_13, VAR_8->cursor_pos, VAR_8->cursor_pos)
   || FUNC_2(&VAR_12, &VAR_13, VAR_8->cursor_oldpos, VAR_8->cursor_oldpos)))) {
     FUNC_8(VAR_8);
     if (VAR_8->end >= VAR_8->xsize*VAR_8->ysize)
  VAR_8->end = VAR_8->xsize*VAR_8->ysize - 1;
 }
    }




    if (VAR_8->end >= VAR_8->xsize*VAR_8->ysize) {
 FUNC_3("scrn_update(): scp->end %d > size_of_screen!!\n", VAR_8->end);
 VAR_8->end = VAR_8->xsize*VAR_8->ysize - 1;
    }
    if (VAR_8->start < 0) {
 FUNC_3("scrn_update(): scp->start %d < 0\n", VAR_8->start);
 VAR_8->start = 0;
    }



    if (VAR_8->start <= VAR_8->end) {
 if (VAR_8->mouse_cut_end >= 0) {

     if (VAR_8->mouse_cut_start <= VAR_8->mouse_cut_end) {
  VAR_10 = VAR_8->mouse_cut_start;
  VAR_11 = VAR_8->mouse_cut_end;
     } else {
  VAR_10 = VAR_8->mouse_cut_end;
  VAR_11 = VAR_8->mouse_cut_start - 1;
     }
     VAR_12 = VAR_10;
     VAR_13 = VAR_11;

     if (FUNC_2(&VAR_12, &VAR_13, VAR_8->start, VAR_8->end)) {
  (*VAR_8->rndr->draw)(VAR_8, VAR_12, VAR_13 - VAR_12 + 1, VAR_7);
  VAR_12 = 0;
  VAR_13 = VAR_10 - 1;
  if (FUNC_2(&VAR_12, &VAR_13, VAR_8->start, VAR_8->end))
      (*VAR_8->rndr->draw)(VAR_8, VAR_12, VAR_13 - VAR_12 + 1, VAR_2);
  VAR_12 = VAR_11 + 1;
  VAR_13 = VAR_8->xsize*VAR_8->ysize - 1;
  if (FUNC_2(&VAR_12, &VAR_13, VAR_8->start, VAR_8->end))
      (*VAR_8->rndr->draw)(VAR_8, VAR_12, VAR_13 - VAR_12 + 1, VAR_2);
     } else {
  (*VAR_8->rndr->draw)(VAR_8, VAR_8->start,
       VAR_8->end - VAR_8->start + 1, VAR_2);
     }
 } else {
     (*VAR_8->rndr->draw)(VAR_8, VAR_8->start,
          VAR_8->end - VAR_8->start + 1, VAR_2);
 }
    }


    if (!VAR_9) {
        VAR_8->end = 0;
        VAR_8->start = VAR_8->xsize*VAR_8->ysize - 1;
 FUNC_1(VAR_8->sc);
 return;
    }


    if (VAR_8->status & VAR_1) {
 VAR_12 = VAR_8->start;
 VAR_13 = VAR_8->end;

        if (VAR_8->cursor_pos != VAR_8->cursor_oldpos) {

            if (!FUNC_2(&VAR_12, &VAR_13, VAR_8->cursor_oldpos, VAR_8->cursor_oldpos))
                FUNC_7(VAR_8);
            FUNC_4(VAR_8);
        } else {
            if (FUNC_2(&VAR_12, &VAR_13, VAR_8->cursor_pos, VAR_8->cursor_pos))

  FUNC_4(VAR_8);
     else if (VAR_8->curs_attr.flags & VAR_0)

  (*VAR_8->rndr->blink_cursor)(VAR_8, VAR_8->cursor_pos,
        FUNC_6(VAR_8,
            VAR_8->cursor_pos));
        }
    }



    if (VAR_8->sc->flags & VAR_6) {
 if (!(VAR_8->status & (VAR_5 | VAR_3))) {
     VAR_8->status &= ~VAR_4;
     FUNC_5(VAR_8);
 }
    }


    VAR_8->end = 0;
    VAR_8->start = VAR_8->xsize*VAR_8->ysize - 1;

    FUNC_1(VAR_8->sc);
}
