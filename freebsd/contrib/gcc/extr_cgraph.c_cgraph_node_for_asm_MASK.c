
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct cgraph_node {int decl; struct cgraph_node* next; } ;


 struct cgraph_node* VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;

struct cgraph_node *
FUNC_1 (tree VAR_1)
{
  struct cgraph_node *VAR_2;

  for (VAR_2 = VAR_0; VAR_2 ; VAR_2 = VAR_2->next)
    if (FUNC_0 (VAR_2->decl, VAR_1))
      return VAR_2;

  return ((void*)0);
}
