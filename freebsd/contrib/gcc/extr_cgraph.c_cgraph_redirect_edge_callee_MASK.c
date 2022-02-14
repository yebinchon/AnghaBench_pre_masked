
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgraph_node {struct cgraph_edge* callers; } ;
struct cgraph_edge {struct cgraph_node* callee; struct cgraph_edge* next_caller; struct cgraph_edge* prev_caller; } ;


 int FUNC_0 (struct cgraph_edge*) ;

void
FUNC_1 (struct cgraph_edge *VAR_0, struct cgraph_node *VAR_1)
{

  FUNC_0 (VAR_0);


  VAR_0->prev_caller = ((void*)0);
  if (VAR_1->callers)
    VAR_1->callers->prev_caller = VAR_0;
  VAR_0->next_caller = VAR_1->callers;
  VAR_1->callers = VAR_0;
  VAR_0->callee = VAR_1;
}
