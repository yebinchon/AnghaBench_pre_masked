
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct collection_list {int next_aexpr_elt; int regs_mask; int ** aexpr_list; scalar_t__ next_memrange; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_2 (struct collection_list *VAR_0)
{
  int VAR_1;

  VAR_0->next_memrange = 0;
  for (VAR_1 = 0; VAR_1 < VAR_0->next_aexpr_elt; VAR_1++)
    {
      FUNC_0 (VAR_0->aexpr_list[VAR_1]);
      VAR_0->aexpr_list[VAR_1] = ((void*)0);
    }
  VAR_0->next_aexpr_elt = 0;
  FUNC_1 (VAR_0->regs_mask, 0, sizeof (VAR_0->regs_mask));
}
