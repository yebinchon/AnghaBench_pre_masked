
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct et_node {int * parent_occ; int rightmost_occ; int * son; int * right; int * left; int * father; void* data; } ;


 scalar_t__ FUNC_0 (char*,int,int) ;
 int FUNC_1 (struct et_node*) ;
 scalar_t__ VAR_0 ;
 struct et_node* FUNC_2 (scalar_t__) ;

struct et_node *
FUNC_3 (void *VAR_1)
{
  struct et_node *VAR_2;

  if (!VAR_0)
    VAR_0 = FUNC_0 ("et_node pool", sizeof (struct et_node), 300);
  VAR_2 = FUNC_2 (VAR_0);

  VAR_2->data = VAR_1;
  VAR_2->father = ((void*)0);
  VAR_2->left = ((void*)0);
  VAR_2->right = ((void*)0);
  VAR_2->son = ((void*)0);

  VAR_2->rightmost_occ = FUNC_1 (VAR_2);
  VAR_2->parent_occ = ((void*)0);

  return VAR_2;
}
