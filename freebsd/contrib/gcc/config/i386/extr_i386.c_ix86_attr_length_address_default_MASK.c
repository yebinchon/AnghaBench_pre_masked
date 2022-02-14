
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int rtx ;
struct TYPE_2__ {int n_operands; int * operand; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 TYPE_1__ VAR_4 ;

int
FUNC_9 (rtx VAR_5)
{
  int VAR_6;

  if (FUNC_7 (VAR_5) == VAR_3)
    {
      rtx VAR_7 = FUNC_1 (VAR_5);

      if (FUNC_0 (VAR_7) == VAR_1)
 VAR_7 = FUNC_4 (VAR_7, 0, 0);

      FUNC_6 (FUNC_0 (VAR_7) == VAR_2);

      return FUNC_8 (FUNC_2 (VAR_7));
    }

  FUNC_5 (VAR_5);
  for (VAR_6 = VAR_4.n_operands - 1; VAR_6 >= 0; --VAR_6)
    if (FUNC_0 (VAR_4.operand[VAR_6]) == VAR_0)
      {
 return FUNC_8 (FUNC_3 (VAR_4.operand[VAR_6], 0));
 break;
      }
  return 0;
}
