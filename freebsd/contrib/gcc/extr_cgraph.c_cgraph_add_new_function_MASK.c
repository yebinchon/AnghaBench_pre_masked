
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct cgraph_node {struct cgraph_node* next_needed; } ;


 struct cgraph_node* VAR_0 ;
 struct cgraph_node* FUNC_0 (int ) ;

void
FUNC_1 (tree VAR_1)
{
  struct cgraph_node *VAR_2 = FUNC_0 (VAR_1);
  VAR_2->next_needed = VAR_0;
  VAR_0 = VAR_2;
}
