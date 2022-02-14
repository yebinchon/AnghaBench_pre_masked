
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct agent_expr {int dummy; } ;
typedef enum agent_op { ____Placeholder_agent_op } agent_op ;


 int FUNC_0 (struct type*) ;
 struct type* FUNC_1 (struct type*) ;
 int FUNC_2 (struct agent_expr*,int) ;
 int FUNC_3 (struct agent_expr*,int) ;

__attribute__((used)) static void
FUNC_4 (struct agent_expr *VAR_0, enum agent_op VAR_1, struct type *VAR_2)
{
  struct type *VAR_3 = FUNC_1 (VAR_2);

  if (FUNC_0 (VAR_3) != 1)
    {
      FUNC_2 (VAR_0, FUNC_0 (VAR_3));
      FUNC_3 (VAR_0, VAR_1);
    }
}
