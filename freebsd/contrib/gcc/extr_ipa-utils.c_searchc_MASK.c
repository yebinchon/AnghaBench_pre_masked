
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct searchc_env {scalar_t__ count; size_t stack_size; int order_pos; struct cgraph_node** result; scalar_t__ reduce; struct cgraph_node** stack; int nodes_marked_new; } ;
struct ipa_dfs_info {int new; scalar_t__ dfn_number; scalar_t__ low_link; int on_stack; struct cgraph_node* next_cycle; } ;
struct cgraph_node {struct ipa_dfs_info* aux; struct cgraph_edge* callees; int uid; } ;
struct cgraph_edge {struct cgraph_node* callee; struct cgraph_edge* next_callee; } ;


 struct cgraph_node* FUNC_0 (struct cgraph_node*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2 (struct searchc_env* VAR_0, struct cgraph_node *VAR_1)
{
  struct cgraph_edge *VAR_2;
  struct ipa_dfs_info *VAR_3 = VAR_1->aux;


  VAR_3->new = 0;
  FUNC_1 (VAR_0->nodes_marked_new, VAR_1->uid);

  VAR_3->dfn_number = VAR_0->count;
  VAR_3->low_link = VAR_0->count;
  VAR_0->count++;
  VAR_0->stack[(VAR_0->stack_size)++] = VAR_1;
  VAR_3->on_stack = 1;

  for (VAR_2 = VAR_1->callees; VAR_2; VAR_2 = VAR_2->next_callee)
    {
      struct ipa_dfs_info * VAR_4;
      struct cgraph_node *VAR_5 = VAR_2->callee;


      VAR_5 = FUNC_0 (VAR_5);
      if (VAR_5 && VAR_5->aux)
 {
   VAR_4 = VAR_5->aux;
   if (VAR_4->new)
     {
       FUNC_2 (VAR_0, VAR_5);
       VAR_3->low_link =
  (VAR_3->low_link < VAR_4->low_link) ?
  VAR_3->low_link : VAR_4->low_link;
     }
   else
     if ((VAR_4->dfn_number < VAR_3->dfn_number)
  && (VAR_4->on_stack))
       VAR_3->low_link =
  (VAR_4->dfn_number < VAR_3->low_link) ?
  VAR_4->dfn_number : VAR_3->low_link;
 }
    }


  if (VAR_3->low_link == VAR_3->dfn_number)
    {
      struct cgraph_node *VAR_6 = ((void*)0);
      struct cgraph_node *VAR_7;
      struct ipa_dfs_info *VAR_8;
      do {
 VAR_7 = VAR_0->stack[--(VAR_0->stack_size)];
 VAR_8 = VAR_7->aux;
 VAR_8->on_stack = 0;

 if (VAR_0->reduce)
   {
     VAR_8->next_cycle = VAR_6;
     VAR_6 = VAR_7;
   }
 else
   VAR_0->result[VAR_0->order_pos++] = VAR_7;
      }
      while (VAR_1 != VAR_7);
      if (VAR_0->reduce)
 VAR_0->result[VAR_0->order_pos++] = VAR_1;
    }
}
