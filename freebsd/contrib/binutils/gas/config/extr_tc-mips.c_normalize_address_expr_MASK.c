
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ X_op; int X_add_number; } ;
typedef TYPE_1__ expressionS ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void
FUNC_1 (expressionS *VAR_4)
{
  if (((VAR_4->X_op == VAR_2 && VAR_0)
 || (VAR_4->X_op == VAR_3 && VAR_1))
      && FUNC_0 (VAR_4->X_add_number))
    VAR_4->X_add_number = (((VAR_4->X_add_number & 0xffffffff) ^ 0x80000000)
   - 0x80000000);
}
