
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct affine_tree_combination {unsigned int n; void* rest; void** elts; } ;


 void* FUNC_0 (void*) ;

__attribute__((used)) static void
FUNC_1 (struct affine_tree_combination *VAR_0)
{
  unsigned VAR_1;

  for (VAR_1 = 0; VAR_1 < VAR_0->n; VAR_1++)
    VAR_0->elts[VAR_1] = FUNC_0 (VAR_0->elts[VAR_1]);
  if (VAR_0->rest)
    VAR_0->rest = FUNC_0 (VAR_0->rest);
}
