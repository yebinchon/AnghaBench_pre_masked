
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct affine_tree_combination {int offset; int mask; unsigned int n; int* coefs; scalar_t__ rest; scalar_t__* elts; } ;


 int FUNC_0 (struct affine_tree_combination*,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_1 (struct affine_tree_combination *VAR_0,
       struct affine_tree_combination *VAR_1)
{
  unsigned VAR_2;

  VAR_0->offset = (VAR_0->offset + VAR_1->offset) & VAR_0->mask;
  for (VAR_2 = 0; VAR_2 < VAR_1->n; VAR_2++)
    FUNC_0 (VAR_0, VAR_1->elts[VAR_2], VAR_1->coefs[VAR_2]);
  if (VAR_1->rest)
    FUNC_0 (VAR_0, VAR_1->rest, 1);
}
