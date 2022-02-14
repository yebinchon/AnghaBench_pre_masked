
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int rtx ;
struct TYPE_2__ {int n_operands; int * operand; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_1__ VAR_0 ;

bool
FUNC_3 (rtx VAR_1)
{
  int VAR_2;
  FUNC_2 (VAR_1);
  for (VAR_2 = 0; VAR_2 < VAR_0.n_operands; VAR_2++)
    if (FUNC_1 (VAR_0.operand[VAR_2])
 && FUNC_0 (VAR_0.operand[VAR_2]) >= 4)
       return 1;
  return 0;
}
