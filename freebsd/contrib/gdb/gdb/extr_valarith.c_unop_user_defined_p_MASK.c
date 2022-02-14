
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct type {int dummy; } ;
typedef enum exp_opcode { ____Placeholder_exp_opcode } exp_opcode ;


 scalar_t__ FUNC_0 (struct type*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct type* FUNC_1 (struct type*) ;
 int VAR_2 ;
 int FUNC_2 (struct value*) ;
 struct type* FUNC_3 (int ) ;

int
FUNC_4 (enum exp_opcode VAR_3, struct value *VAR_4)
{
  struct type *VAR_5;
  if (VAR_3 == VAR_2)
    return 0;
  VAR_5 = FUNC_3 (FUNC_2 (VAR_4));
  for (;;)
    {
      if (FUNC_0 (VAR_5) == VAR_1)
 return 1;
      else if (FUNC_0 (VAR_5) == VAR_0)
 VAR_5 = FUNC_1 (VAR_5);
      else
 return 0;
    }
}
