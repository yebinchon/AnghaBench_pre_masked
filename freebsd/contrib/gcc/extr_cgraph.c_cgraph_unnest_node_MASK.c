
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cgraph_node {TYPE_1__* origin; struct cgraph_node* next_nested; } ;
struct TYPE_2__ {struct cgraph_node* nested; } ;


 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1 (struct cgraph_node *VAR_0)
{
  struct cgraph_node **VAR_1 = &VAR_0->origin->nested;
  FUNC_0 (VAR_0->origin);

  while (*VAR_1 != VAR_0)
    VAR_1 = &(*VAR_1)->next_nested;
  *VAR_1 = VAR_0->next_nested;
  VAR_0->origin = ((void*)0);
}
