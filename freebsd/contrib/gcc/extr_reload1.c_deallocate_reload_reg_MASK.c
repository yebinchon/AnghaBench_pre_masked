
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode; int when_needed; int opnum; scalar_t__ reg_rtx; } ;


 int FUNC_0 (int,int ,int ,int ) ;
 int* VAR_0 ;
 TYPE_1__* VAR_1 ;
 scalar_t__* VAR_2 ;
 int FUNC_1 (scalar_t__) ;

void
FUNC_2 (int VAR_3)
{
  int VAR_4;

  if (! VAR_1[VAR_3].reg_rtx)
    return;
  VAR_4 = FUNC_1 (VAR_1[VAR_3].reg_rtx);
  VAR_1[VAR_3].reg_rtx = 0;
  if (VAR_2[VAR_4] >= 0)
    FUNC_0 (VAR_4, VAR_1[VAR_3].opnum, VAR_1[VAR_3].when_needed,
        VAR_1[VAR_3].mode);
  VAR_0[VAR_3] = -1;
}
