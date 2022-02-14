
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgraph_node {struct cgraph_node* next; } ;
typedef int * ipa_methodlist_p ;


 struct cgraph_node* VAR_0 ;
 int FUNC_0 (int **,struct cgraph_node*) ;

ipa_methodlist_p
FUNC_1 (void)
{
  struct cgraph_node *VAR_1;
  ipa_methodlist_p VAR_2;

  VAR_2 = ((void*)0);
  for (VAR_1 = VAR_0; VAR_1; VAR_1 = VAR_1->next)
    FUNC_0 (&VAR_2, VAR_1);

  return VAR_2;
}
