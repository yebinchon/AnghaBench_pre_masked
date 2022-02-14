
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int xsize; int ysize; int history; int history_pos; int vtb; } ;
typedef TYPE_1__ scr_stat ;


 int FUNC_0 (int *,int ,int ,int) ;
 int FUNC_1 (int ) ;

void
FUNC_2(scr_stat *VAR_0)
{
 FUNC_0(&VAR_0->vtb, 0, VAR_0->history, VAR_0->xsize*VAR_0->ysize);
 VAR_0->history_pos = FUNC_1(VAR_0->history);
}
