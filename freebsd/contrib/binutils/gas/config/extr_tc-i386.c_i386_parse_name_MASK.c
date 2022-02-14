
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int reg_entry ;
struct TYPE_3__ {int const* X_add_number; int X_op; } ;
typedef TYPE_1__ expressionS ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int * FUNC_0 (char*,char**) ;

int
FUNC_1 (char *VAR_3, expressionS *VAR_4, char *VAR_5)
{
  const reg_entry *VAR_6;
  char *VAR_7 = VAR_2;

  *VAR_7 = *VAR_5;
  VAR_6 = FUNC_0 (VAR_3, &VAR_2);
  if (VAR_6 && VAR_7 <= VAR_2)
    {
      *VAR_5 = *VAR_2;
      *VAR_2 = 0;
      VAR_4->X_op = VAR_0;
      VAR_4->X_add_number = VAR_6 - VAR_1;
      return 1;
    }
  VAR_2 = VAR_7;
  *VAR_7 = 0;
  return 0;
}
