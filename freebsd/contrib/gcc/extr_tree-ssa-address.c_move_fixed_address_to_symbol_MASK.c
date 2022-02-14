
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct mem_address {int symbol; } ;
struct affine_tree_combination {unsigned int n; int* coefs; int * elts; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct affine_tree_combination*,unsigned int) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4 (struct mem_address *VAR_2,
         struct affine_tree_combination *VAR_3)
{
  unsigned VAR_4;
  tree VAR_5 = VAR_1;

  for (VAR_4 = 0; VAR_4 < VAR_3->n; VAR_4++)
    {
      if (VAR_3->coefs[VAR_4] != 1)
 continue;

      VAR_5 = VAR_3->elts[VAR_4];
      if (FUNC_0 (VAR_5) == VAR_0
   && FUNC_3 (FUNC_1 (VAR_5, 0)))
 break;
    }

  if (VAR_4 == VAR_3->n)
    return;

  VAR_2->symbol = FUNC_1 (VAR_5, 0);
  FUNC_2 (VAR_3, VAR_4);
}
