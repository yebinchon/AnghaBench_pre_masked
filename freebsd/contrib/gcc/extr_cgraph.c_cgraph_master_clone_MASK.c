
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgraph_node {struct cgraph_node* master_clone; int decl; } ;
typedef enum availability { ____Placeholder_availability } availability ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cgraph_node*) ;
 struct cgraph_node* FUNC_1 (int ) ;

struct cgraph_node *
FUNC_2 (struct cgraph_node *VAR_2)
{
  enum availability VAR_3 = FUNC_0 (VAR_2);

  if (VAR_3 == VAR_0 || VAR_3 == VAR_1)
    return ((void*)0);

  if (!VAR_2->master_clone)
    VAR_2->master_clone = FUNC_1 (VAR_2->decl);

  return VAR_2->master_clone;
}
