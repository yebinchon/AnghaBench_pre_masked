
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int estimated_growth; } ;
struct cgraph_node {struct cgraph_edge* callees; TYPE_1__ global; } ;
struct cgraph_edge {struct cgraph_node* callee; scalar_t__ inline_failed; struct cgraph_edge* next_callee; } ;
typedef int fibheap_t ;
typedef int bitmap ;


 int VAR_0 ;
 int FUNC_0 (int ,struct cgraph_node*,int ) ;

__attribute__((used)) static void
FUNC_1 (fibheap_t VAR_1, struct cgraph_node *VAR_2,
      bitmap VAR_3)
{
  struct cgraph_edge *VAR_4;
  VAR_2->global.estimated_growth = VAR_0;

  for (VAR_4 = VAR_2->callees; VAR_4; VAR_4 = VAR_4->next_callee)
    if (VAR_4->inline_failed)
      FUNC_0 (VAR_1, VAR_4->callee, VAR_3);
    else if (!VAR_4->inline_failed)
      FUNC_1 (VAR_1, VAR_4->callee, VAR_3);
}
