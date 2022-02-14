
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ history_pos; int xsize; int ysize; int history; } ;
typedef TYPE_1__ scr_stat ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,scalar_t__,int) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;

int
FUNC_4(scr_stat *VAR_0)
{
 int VAR_1;

 if (VAR_0->history_pos != FUNC_3(VAR_0->history)) {
  VAR_0->history_pos = FUNC_3(VAR_0->history);
  FUNC_0(VAR_0);
  VAR_1 = 0;
 } else {
  VAR_1 = 1;
 }
 FUNC_2(VAR_0->history, FUNC_1(VAR_0->history,
          FUNC_3(VAR_0->history),
          -VAR_0->xsize*VAR_0->ysize));
 return VAR_1;
}
