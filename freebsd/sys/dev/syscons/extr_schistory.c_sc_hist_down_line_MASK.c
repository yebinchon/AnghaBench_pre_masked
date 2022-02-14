
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ history_pos; int xsize; int history; } ;
typedef TYPE_1__ scr_stat ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int ) ;

int
FUNC_3(scr_stat *VAR_0)
{
 if (VAR_0->history_pos == FUNC_2(VAR_0->history))
  return -1;
 VAR_0->history_pos = FUNC_1(VAR_0->history, VAR_0->history_pos,
          VAR_0->xsize);
 FUNC_0(VAR_0);
 return 0;
}
