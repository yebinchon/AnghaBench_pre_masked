
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ X_op; scalar_t__ X_add_number; int * X_op_symbol; TYPE_2__* X_add_symbol; } ;
typedef TYPE_3__ expressionS ;
struct TYPE_6__ {void* X_op; } ;
struct TYPE_7__ {TYPE_1__ sy_value; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 void* FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_2 (expressionS *VAR_4)
{
  if (VAR_4->X_op == VAR_3 && VAR_4->X_add_number == 0)
    {
      expressionS VAR_5;

      VAR_4->X_op = VAR_1;
      VAR_4->X_add_symbol->sy_value.X_op = VAR_0;
      VAR_5.X_op = VAR_0;
      VAR_5.X_add_symbol = VAR_5.X_op_symbol = ((void*)0);
      VAR_5.X_add_number = 2;
      VAR_4->X_op_symbol = FUNC_1 (&VAR_5);
    }

  else if (VAR_4->X_op == VAR_2
    && VAR_4->X_add_symbol != ((void*)0)
    && VAR_4->X_op_symbol != ((void*)0)
    && VAR_4->X_add_number == 0)
    {
      expressionS VAR_6;

      VAR_4->X_add_symbol = FUNC_1 (VAR_4);
      VAR_4->X_op = VAR_1;
      VAR_6.X_op = VAR_0;
      VAR_6.X_add_symbol = VAR_6.X_op_symbol = ((void*)0);
      VAR_6.X_add_number = 2;
      VAR_4->X_op_symbol = FUNC_1 (&VAR_6);
    }
  else
    FUNC_0 ("expression too complex code symbol");
}
