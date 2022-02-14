
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct cgraph_node* inlined_to; } ;
struct cgraph_node {TYPE_1__ global; struct cgraph_edge* callees; } ;
struct cgraph_edge {struct cgraph_node* callee; struct cgraph_edge* next_callee; } ;



__attribute__((used)) static void
FUNC_0 (struct cgraph_node *VAR_0,
       struct cgraph_node *VAR_1)
{
  struct cgraph_edge *VAR_2;
  for (VAR_2 = VAR_0->callees; VAR_2; VAR_2 = VAR_2->next_callee)
    {
      if (VAR_2->callee->global.inlined_to)
 {
   VAR_2->callee->global.inlined_to = VAR_1;
   FUNC_0 (VAR_2->callee, VAR_1);
 }
    }
}
