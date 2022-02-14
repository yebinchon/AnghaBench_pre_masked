
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgraph_node {struct cgraph_edge* callees; struct cgraph_node* next; } ;
struct cgraph_edge {int * aux; struct cgraph_edge* next_callee; } ;


 struct cgraph_node* VAR_0 ;
 int FUNC_0 (int *) ;

void
FUNC_1 (void)
{
  struct cgraph_node *VAR_1;
  struct cgraph_edge *VAR_2;

  for (VAR_1 = VAR_0; VAR_1; VAR_1 = VAR_1->next)
    for (VAR_2 = VAR_1->callees; VAR_2; VAR_2 = VAR_2->next_callee)
      {
 FUNC_0 (VAR_2->aux);
 VAR_2->aux = ((void*)0);
      }
}
