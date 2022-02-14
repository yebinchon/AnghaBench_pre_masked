
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tree_opt_pass {struct tree_opt_pass* next; struct tree_opt_pass* sub; } ;


 scalar_t__ FUNC_0 (struct tree_opt_pass*) ;

void
FUNC_1 (struct tree_opt_pass *VAR_0)
{
  do
    {
      if (FUNC_0 (VAR_0) && VAR_0->sub)
        FUNC_1 (VAR_0->sub);
      VAR_0 = VAR_0->next;
    }
  while (VAR_0);
}
