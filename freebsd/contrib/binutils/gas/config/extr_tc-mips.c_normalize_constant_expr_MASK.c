
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ X_op; int X_add_number; } ;
typedef TYPE_1__ expressionS ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_1 (expressionS *VAR_1)
{
  if (VAR_1->X_op == VAR_0
      && FUNC_0 (VAR_1->X_add_number))
    VAR_1->X_add_number = (((VAR_1->X_add_number & 0xffffffff) ^ 0x80000000)
   - 0x80000000);
}
