
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int status; int mouse_pos; int mouse_cut_start; int mouse_cut_end; int xsize; int vtb; int sc; } ;
typedef TYPE_1__ scr_stat ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 char FUNC_3 (int *,int) ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;

__attribute__((used)) static void
FUNC_8(scr_stat *VAR_3)
{
    int VAR_4;
    int VAR_5;

    if (VAR_3->status & VAR_1) {
 FUNC_2(VAR_3->sc);
 if ((VAR_3->mouse_pos == VAR_3->mouse_cut_start) &&
     (VAR_3->mouse_pos == VAR_3->mouse_cut_end)) {
     VAR_2[0] = '\0';
     return;
 } else if (FUNC_5(VAR_3, VAR_3->mouse_pos) >= VAR_3->xsize) {

     VAR_4 = FUNC_4(VAR_3, VAR_3->mouse_pos) + 1;
     VAR_5 = FUNC_6();
     VAR_3->mouse_cut_start =
         FUNC_1(VAR_3->mouse_pos, VAR_3->xsize) + VAR_4;
     VAR_3->mouse_cut_end =
         (VAR_3->mouse_pos / VAR_3->xsize + 1) * VAR_3->xsize - 1;
     FUNC_7(VAR_5);
     VAR_2[0] = '\r';
 } else {
     VAR_5 = FUNC_6();
     VAR_3->mouse_cut_start = VAR_3->mouse_pos;
     VAR_3->mouse_cut_end = VAR_3->mouse_cut_start;
     FUNC_7(VAR_5);
     VAR_2[0] = FUNC_3(&VAR_3->vtb, VAR_3->mouse_cut_start);
 }
 VAR_2[1] = '\0';
 VAR_3->status |= VAR_0;
     FUNC_0(VAR_3);
    }
}
