
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int xsize; int ysize; int history; int history_pos; } ;
typedef TYPE_1__ scr_stat ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ) ;

void
FUNC_3(scr_stat *VAR_0)
{
 VAR_0->history_pos = FUNC_1(VAR_0->history, FUNC_2(VAR_0->history),
          VAR_0->xsize*VAR_0->ysize);
 FUNC_0(VAR_0);
}
