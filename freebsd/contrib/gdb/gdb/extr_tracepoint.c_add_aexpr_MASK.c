
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct collection_list {int next_aexpr_elt; int aexpr_listsize; struct agent_expr** aexpr_list; } ;
struct agent_expr {int dummy; } ;


 struct agent_expr** FUNC_0 (struct agent_expr**,int) ;

__attribute__((used)) static void
FUNC_1 (struct collection_list *VAR_0, struct agent_expr *VAR_1)
{
  if (VAR_0->next_aexpr_elt >= VAR_0->aexpr_listsize)
    {
      VAR_0->aexpr_list =
 FUNC_0 (VAR_0->aexpr_list,
  2 * VAR_0->aexpr_listsize * sizeof (struct agent_expr *));
      VAR_0->aexpr_listsize *= 2;
    }
  VAR_0->aexpr_list[VAR_0->next_aexpr_elt] = VAR_1;
  VAR_0->next_aexpr_elt++;
}
