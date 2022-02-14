
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgraph_node {struct cgraph_node* next; } ;


 struct cgraph_node* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct cgraph_node*) ;

void
FUNC_1 (void)
{
  struct cgraph_node *VAR_3;

  if (VAR_2 || VAR_1)
    return;

  for (VAR_3 = VAR_0; VAR_3; VAR_3 = VAR_3->next)
    FUNC_0 (VAR_3);
}
