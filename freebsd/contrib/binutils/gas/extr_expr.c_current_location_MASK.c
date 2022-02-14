
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ X_add_number; int X_add_symbol; int X_op; } ;
typedef TYPE_1__ expressionS ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 () ;

__attribute__((used)) static void
FUNC_1 (expressionS *VAR_5)
{
  if (VAR_4 == VAR_3)
    {
      VAR_5->X_op = VAR_0;
      VAR_5->X_add_number = VAR_2;
    }
  else
    {
      VAR_5->X_op = VAR_1;
      VAR_5->X_add_symbol = FUNC_0 ();
      VAR_5->X_add_number = 0;
    }
}
