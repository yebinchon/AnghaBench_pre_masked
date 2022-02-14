
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
struct agent_expr {scalar_t__ len; } ;


 int FUNC_0 (struct agent_expr*) ;
 int FUNC_1 (struct agent_expr*,struct type*,struct type*) ;
 struct agent_expr* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3 (struct type *VAR_0, struct type *VAR_1)
{
  struct agent_expr *VAR_2 = FUNC_2 (0);
  int VAR_3;







  FUNC_1 (VAR_2, VAR_0, VAR_1);
  VAR_3 = VAR_2->len > 0;
  FUNC_0 (VAR_2);
  return VAR_3;
}
