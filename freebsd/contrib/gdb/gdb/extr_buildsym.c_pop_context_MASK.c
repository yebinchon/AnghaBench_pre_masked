
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct context_stack {int dummy; } ;


 struct context_stack* VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;

struct context_stack *
FUNC_1 (void)
{
  FUNC_0 (VAR_1 > 0);
  return (&VAR_0[--VAR_1]);
}
