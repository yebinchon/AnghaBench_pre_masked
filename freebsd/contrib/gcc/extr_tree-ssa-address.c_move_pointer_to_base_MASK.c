
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct mem_address {int base; } ;
struct affine_tree_combination {unsigned int n; int* coefs; int * elts; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct affine_tree_combination*,unsigned int) ;

__attribute__((used)) static void
FUNC_3 (struct mem_address *VAR_1,
        struct affine_tree_combination *VAR_2)
{
  unsigned VAR_3;
  tree VAR_4 = VAR_0;

  for (VAR_3 = 0; VAR_3 < VAR_2->n; VAR_3++)
    {
      if (VAR_2->coefs[VAR_3] != 1)
 continue;

      VAR_4 = VAR_2->elts[VAR_3];
      if (FUNC_0 (FUNC_1 (VAR_4)))
 break;
    }

  if (VAR_3 == VAR_2->n)
    return;

  VAR_1->base = VAR_4;
  FUNC_2 (VAR_2, VAR_3);
}
