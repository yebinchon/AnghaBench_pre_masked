
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgraph_node {struct cgraph_edge* callees; } ;
struct cgraph_edge {int count; struct cgraph_node* callee; int inline_failed; struct cgraph_edge* next_callee; } ;
typedef int fibheap_t ;


 int FUNC_0 (int ,int,struct cgraph_edge*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1 (struct cgraph_node *VAR_1, struct cgraph_node *VAR_2,
   fibheap_t VAR_3)
{
  static int VAR_4;
  struct cgraph_edge *VAR_5;
  for (VAR_5 = VAR_2->callees; VAR_5; VAR_5 = VAR_5->next_callee)
    if (VAR_5->callee == VAR_1)
      {



        FUNC_0 (VAR_3,
   !VAR_0 ? VAR_4++
          : -(VAR_5->count / ((VAR_0 + (1<<24) - 1) / (1<<24))),
          VAR_5);
      }
  for (VAR_5 = VAR_2->callees; VAR_5; VAR_5 = VAR_5->next_callee)
    if (!VAR_5->inline_failed)
      FUNC_1 (VAR_1, VAR_5->callee, VAR_3);
}
