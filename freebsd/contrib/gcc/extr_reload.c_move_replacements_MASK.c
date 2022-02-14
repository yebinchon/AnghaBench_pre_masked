
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int rtx ;
struct TYPE_2__ {int * subreg_loc; int * where; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

void
FUNC_0 (rtx *VAR_2, rtx *VAR_3)
{
  int VAR_4;

  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
    if (VAR_1[VAR_4].subreg_loc == VAR_2)
      VAR_1[VAR_4].subreg_loc = VAR_3;
    else if (VAR_1[VAR_4].where == VAR_2)
      {
 VAR_1[VAR_4].where = VAR_3;
 VAR_1[VAR_4].subreg_loc = 0;
      }
}
