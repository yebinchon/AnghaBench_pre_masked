
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ operatorT ;
struct TYPE_4__ {scalar_t__ X_op; scalar_t__ X_add_number; int X_add_symbol; int X_op_symbol; } ;
typedef TYPE_1__ expressionS ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

int
FUNC_1 (expressionS *VAR_2, operatorT VAR_3, expressionS *VAR_4)
{
  if (VAR_3 == VAR_0
      && VAR_2->X_op == VAR_1
      && VAR_4->X_op == VAR_1
      && FUNC_0 (VAR_2->X_add_symbol))
    {
      VAR_2->X_op = VAR_0;
      VAR_2->X_op_symbol = VAR_4->X_add_symbol;
      VAR_2->X_add_number -= VAR_4->X_add_number;
      return 1;
    }

  return 0;
}
