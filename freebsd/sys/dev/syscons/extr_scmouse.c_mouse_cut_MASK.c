
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mouse_cut_start; int mouse_cut_end; int mouse_pos; int xsize; int vtb; } ;
typedef TYPE_1__ scr_stat ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(scr_stat *VAR_0)
{
    int VAR_1;
    int VAR_2;
    int VAR_3;
    int VAR_4;
    int VAR_5;
    int VAR_6;
    int VAR_7;
    int VAR_8;

    VAR_1 = VAR_0->mouse_cut_start;
    VAR_2 = VAR_0->mouse_cut_end;
    if (VAR_0->mouse_pos >= VAR_1) {
 VAR_3 = VAR_1;
 VAR_4 = VAR_2 = VAR_0->mouse_pos;
    } else {
 VAR_3 = VAR_2 = VAR_0->mouse_pos;
 VAR_4 = VAR_1 - 1;
    }
    VAR_6 = VAR_4;
    for (VAR_8 = VAR_6 % VAR_0->xsize; VAR_8 < VAR_0->xsize; ++VAR_8) {
 VAR_5 = FUNC_2(&VAR_0->vtb, VAR_6);
 if (!FUNC_0(VAR_5))
     break;
 ++VAR_6;
    }

    if (VAR_8 == VAR_0->xsize) {
 if (VAR_2 >= VAR_1)
     VAR_4 = VAR_2 = VAR_6 - 1;
 else
     VAR_4 = VAR_1 = VAR_6;
    }
    FUNC_1(VAR_0, VAR_3, VAR_4);
    VAR_7 = FUNC_3();
    VAR_0->mouse_cut_start = VAR_1;
    VAR_0->mouse_cut_end = VAR_2;
    FUNC_4(VAR_7);
}
