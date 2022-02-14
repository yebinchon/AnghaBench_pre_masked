
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgraph_varpool_node {int decl; struct cgraph_varpool_node* next_needed; } ;


 struct cgraph_varpool_node* VAR_0 ;
 struct cgraph_varpool_node* VAR_1 ;
 struct cgraph_varpool_node* VAR_2 ;
 int FUNC_0 (int ) ;

void
FUNC_1 (struct cgraph_varpool_node *VAR_3)
{
  if (VAR_1)
    VAR_1->next_needed = VAR_3;
  VAR_1 = VAR_3;
  VAR_3->next_needed = ((void*)0);
  if (!VAR_2)
    VAR_2 = VAR_3;
  if (!VAR_0)
    VAR_0 = VAR_3;
  FUNC_0 (VAR_3->decl);
}
