
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agent_expr {int size; int scope; void* buf; scalar_t__ len; } ;
typedef int CORE_ADDR ;


 void* FUNC_0 (int) ;

struct agent_expr *
FUNC_1 (CORE_ADDR VAR_0)
{
  struct agent_expr *VAR_1 = FUNC_0 (sizeof (*VAR_1));
  VAR_1->len = 0;
  VAR_1->size = 1;

  VAR_1->buf = FUNC_0 (VAR_1->size);
  VAR_1->scope = VAR_0;

  return VAR_1;
}
