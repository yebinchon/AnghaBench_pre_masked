
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mouse_cut_end; int mouse_cut_start; int xsize; int ysize; int status; } ;
typedef TYPE_1__ scr_stat ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;

void
FUNC_3(scr_stat *VAR_1)
{
    int VAR_2;

    VAR_2 = FUNC_1();
    if (VAR_1->mouse_cut_end >= 0) {
 FUNC_0(VAR_1, VAR_1->mouse_cut_start);
 FUNC_0(VAR_1, VAR_1->mouse_cut_end);
    }
    VAR_1->mouse_cut_start = VAR_1->xsize*VAR_1->ysize;
    VAR_1->mouse_cut_end = -1;
    FUNC_2(VAR_2);
    VAR_1->status &= ~VAR_0;
}
