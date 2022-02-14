
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct affine_tree_combination {unsigned int n; int* coefs; scalar_t__ rest; scalar_t__* elts; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_0 (struct affine_tree_combination *VAR_1, unsigned VAR_2)
{
  VAR_1->n--;
  if (VAR_2 <= VAR_1->n)
    {
      VAR_1->coefs[VAR_2] = VAR_1->coefs[VAR_1->n];
      VAR_1->elts[VAR_2] = VAR_1->elts[VAR_1->n];
    }
  if (VAR_1->rest)
    {
      VAR_1->coefs[VAR_1->n] = 1;
      VAR_1->elts[VAR_1->n] = VAR_1->rest;
      VAR_1->rest = VAR_0;
      VAR_1->n++;
    }
}
