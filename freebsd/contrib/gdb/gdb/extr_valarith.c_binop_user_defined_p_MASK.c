
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
typedef enum exp_opcode { ____Placeholder_exp_opcode } exp_opcode ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct type*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct type* FUNC_1 (struct type*) ;
 int FUNC_2 (struct value*) ;
 struct type* FUNC_3 (int ) ;

int
FUNC_4 (enum exp_opcode VAR_4, struct value *VAR_5, struct value *VAR_6)
{
  struct type *VAR_7, *VAR_8;
  if (VAR_4 == VAR_0 || VAR_4 == VAR_1)
    return 0;
  VAR_7 = FUNC_3 (FUNC_2 (VAR_5));
  VAR_8 = FUNC_3 (FUNC_2 (VAR_6));
  return (FUNC_0 (VAR_7) == VAR_3
   || FUNC_0 (VAR_8) == VAR_3
   || (FUNC_0 (VAR_7) == VAR_2
       && FUNC_0 (FUNC_1 (VAR_7)) == VAR_3)
   || (FUNC_0 (VAR_8) == VAR_2
       && FUNC_0 (FUNC_1 (VAR_8)) == VAR_3));
}
