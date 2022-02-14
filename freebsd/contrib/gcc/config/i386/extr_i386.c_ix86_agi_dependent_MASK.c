
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int rtx ;
typedef enum attr_type { ____Placeholder_attr_type } attr_type ;
struct TYPE_2__ {int n_operands; int * operand; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,int ) ;
 TYPE_1__ VAR_5 ;

__attribute__((used)) static int
FUNC_8 (rtx VAR_6, rtx VAR_7, enum attr_type VAR_8)
{
  rtx VAR_9;

  if (VAR_8 == VAR_4
      && VAR_3)
    {
      VAR_9 = FUNC_1 (VAR_6);

      if (FUNC_0 (VAR_9) == VAR_1)
 VAR_9 = FUNC_4 (VAR_9, 0, 0);

      FUNC_6 (FUNC_0 (VAR_9) == VAR_2);

      VAR_9 = FUNC_2 (VAR_9);
    }
  else
    {
      int VAR_10;
      FUNC_5 (VAR_6);
      for (VAR_10 = VAR_5.n_operands - 1; VAR_10 >= 0; --VAR_10)
 if (FUNC_0 (VAR_5.operand[VAR_10]) == VAR_0)
   {
     VAR_9 = FUNC_3 (VAR_5.operand[VAR_10], 0);
     goto found;
   }
      return 0;
    found:;
    }

  return FUNC_7 (VAR_9, VAR_7);
}
