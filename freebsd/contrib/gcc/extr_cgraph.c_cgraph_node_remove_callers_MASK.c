
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgraph_node {struct cgraph_edge* callers; } ;
struct cgraph_edge {struct cgraph_edge* next_caller; } ;


 int FUNC_0 (struct cgraph_edge*) ;

__attribute__((used)) static void
FUNC_1 (struct cgraph_node *VAR_0)
{
  struct cgraph_edge *VAR_1;




  for (VAR_1 = VAR_0->callers; VAR_1; VAR_1 = VAR_1->next_caller)
    FUNC_0 (VAR_1);
  VAR_0->callers = ((void*)0);
}
