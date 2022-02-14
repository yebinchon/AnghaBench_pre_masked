
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int ts_teken; } ;
typedef TYPE_1__ teken_stat ;
struct TYPE_9__ {int tp_row; int tp_col; } ;
typedef TYPE_2__ teken_pos_t ;
struct TYPE_10__ {int ypos; int xpos; int ysize; int xsize; } ;
typedef TYPE_3__ scr_stat ;


 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (int *,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_2(scr_stat *VAR_0, teken_stat *VAR_1)
{
 teken_pos_t VAR_2;

 VAR_2.tp_col = VAR_0->xsize;
 VAR_2.tp_row = VAR_0->ysize;
 FUNC_1(&VAR_1->ts_teken, &VAR_2);
 VAR_2.tp_col = VAR_0->xpos;
 VAR_2.tp_row = VAR_0->ypos;
 FUNC_0(&VAR_1->ts_teken, &VAR_2);
}
