
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int X_op; int * X_op_symbol; int * X_add_symbol; int X_add_number; } ;
typedef TYPE_1__ expressionS ;
__attribute__((used)) static void
FUNC_0 (expressionS *VAR_0)
{
  switch (VAR_0->X_op)
    {
    case 131:
    case 135:
      VAR_0->X_add_number = 0;

    case 134:
    case 132:
    case 130:
      VAR_0->X_add_symbol = ((void*)0);

    case 129:
    case 128:
    case 133:
      VAR_0->X_op_symbol = ((void*)0);
      break;
    default:
      break;
    }
}
