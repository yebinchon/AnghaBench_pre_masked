
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ segT ;
struct TYPE_4__ {scalar_t__ X_add_number; int X_op; int * X_add_symbol; } ;
typedef TYPE_1__ expressionS ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int ,...) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static segT
FUNC_7 (register expressionS *VAR_4)
{
  register segT VAR_5;

  if ((VAR_5 = FUNC_5 (VAR_4)) == VAR_3)
    {


      if (VAR_4->X_add_symbol != ((void*)0)
   && FUNC_2 (VAR_4->X_add_symbol) != VAR_2)
 FUNC_4 (FUNC_3("symbol \"%s\" undefined; zero assumed"),
   FUNC_1 (VAR_4->X_add_symbol));
      else
 FUNC_4 (FUNC_3("some symbol undefined; zero assumed"));
      VAR_5 = VAR_1;
      VAR_4->X_op = VAR_0;
      VAR_4->X_add_number = 0;
    }
  FUNC_6 (VAR_5 == VAR_1 || FUNC_0 (VAR_5));
  return (VAR_5);
}
