
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cgraph_node {struct cgraph_edge* callees; int * aux; struct cgraph_node* next; } ;
struct cgraph_edge {scalar_t__ aux; struct cgraph_edge* next_callee; } ;
struct TYPE_4__ {scalar_t__ ipa_param_map; } ;
struct TYPE_3__ {scalar_t__ ipa_mod; scalar_t__ ipa_param_tree; scalar_t__ ipcp_cval; } ;


 TYPE_2__* FUNC_0 (struct cgraph_edge*) ;
 TYPE_1__* FUNC_1 (struct cgraph_node*) ;
 struct cgraph_node* VAR_0 ;
 int FUNC_2 (scalar_t__) ;

void
FUNC_3 (void)
{
  struct cgraph_node *VAR_1;
  struct cgraph_edge *VAR_2;

  for (VAR_1 = VAR_0; VAR_1; VAR_1 = VAR_1->next)
    {
      if (VAR_1->aux == ((void*)0))
 continue;
      if (FUNC_1 (VAR_1)->ipcp_cval)
 FUNC_2 (FUNC_1 (VAR_1)->ipcp_cval);
      if (FUNC_1 (VAR_1)->ipa_param_tree)
 FUNC_2 (FUNC_1 (VAR_1)->ipa_param_tree);
      if (FUNC_1 (VAR_1)->ipa_mod)
 FUNC_2 (FUNC_1 (VAR_1)->ipa_mod);
      for (VAR_2 = VAR_1->callees; VAR_2; VAR_2 = VAR_2->next_callee)
 {
   if (VAR_2->aux)
     if (FUNC_0 (VAR_2)->ipa_param_map)
       FUNC_2 (FUNC_0 (VAR_2)->ipa_param_map);
 }
    }
}
