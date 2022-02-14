
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agent_expr {int* buf; int len; } ;
typedef enum agent_op { ____Placeholder_agent_op } agent_op ;


 int FUNC_0 (struct agent_expr*,int) ;

void
FUNC_1 (struct agent_expr *VAR_0, enum agent_op VAR_1)
{
  FUNC_0 (VAR_0, 1);
  VAR_0->buf[VAR_0->len++] = VAR_1;
}
