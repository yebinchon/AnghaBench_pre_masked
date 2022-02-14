
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct agent_expr {int dummy; } ;


 scalar_t__ FUNC_0 (struct type*) ;
 scalar_t__ FUNC_1 (struct type*) ;
 int FUNC_2 (struct agent_expr*,struct type*) ;

__attribute__((used)) static void
FUNC_3 (struct agent_expr *VAR_0, struct type *VAR_1, struct type *VAR_2)
{




  if (FUNC_0 (VAR_2) < FUNC_0 (VAR_1))
    FUNC_2 (VAR_0, VAR_1);



  else if (FUNC_0 (VAR_2) == FUNC_0 (VAR_1))
    {
      if (FUNC_1 (VAR_1) != FUNC_1 (VAR_2))
 FUNC_2 (VAR_0, VAR_2);
    }



  else if (FUNC_0 (VAR_2) > FUNC_0 (VAR_1))
    {
      if (FUNC_1 (VAR_2))
 FUNC_2 (VAR_0, VAR_2);
    }
}
