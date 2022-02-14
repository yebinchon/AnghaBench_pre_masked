
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int X_add_number; int * X_op_symbol; int * X_add_symbol; int X_op; } ;
typedef TYPE_1__ expressionS ;
typedef int bfd_boolean ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char FUNC_1 () ;
 char* VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_6 ;

__attribute__((used)) static bfd_boolean
FUNC_3 (expressionS *VAR_7)
{
  int VAR_8;
  char *VAR_9;
  char *VAR_10;
  char VAR_11;


  VAR_10 = VAR_9 = VAR_4;
  if (VAR_9[0] == '%' && FUNC_0 (VAR_9[1]))
    VAR_9 = ++VAR_4;

  else if (!VAR_6 || !FUNC_0 (VAR_9[0]))
    return VAR_0;

  VAR_11 = FUNC_1 ();
  VAR_8 = FUNC_2 (VAR_5, VAR_2, VAR_9);


  *VAR_4 = VAR_11;


  if (VAR_8 >= 0)
    {
      VAR_7->X_op = VAR_1;
      VAR_7->X_add_number = VAR_8;


      VAR_7->X_add_symbol = ((void*)0);
      VAR_7->X_op_symbol = ((void*)0);
      return VAR_3;
    }


  VAR_4 = VAR_10;
  return VAR_0;
}
