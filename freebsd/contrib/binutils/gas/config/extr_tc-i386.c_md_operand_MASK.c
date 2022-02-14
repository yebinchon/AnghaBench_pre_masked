
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int reg_entry ;
struct TYPE_3__ {int const* X_add_number; int X_op; } ;
typedef TYPE_1__ expressionS ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__* VAR_3 ;
 int * FUNC_0 (scalar_t__*,char**) ;

void
FUNC_1 (expressionS *VAR_4)
{
  if (*VAR_3 == VAR_1)
    {
      char *VAR_5;
      const reg_entry *VAR_6 = FUNC_0 (VAR_3, &VAR_5);

      if (VAR_6)
 {
   VAR_4->X_op = VAR_0;
   VAR_4->X_add_number = VAR_6 - VAR_2;
   VAR_3 = VAR_5;
 }
    }
}
