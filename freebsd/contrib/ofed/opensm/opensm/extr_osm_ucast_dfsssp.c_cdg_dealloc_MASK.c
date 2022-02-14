
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* right; struct TYPE_4__* parent; struct TYPE_4__* left; } ;
typedef TYPE_1__ cdg_node_t ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(cdg_node_t ** VAR_0)
{
 cdg_node_t *VAR_1 = *VAR_0;

 while (VAR_1) {
  if (VAR_1->left) {
   VAR_1 = VAR_1->left;
  } else if (VAR_1->right) {
   VAR_1 = VAR_1->right;
  } else {
   if (VAR_1->parent == ((void*)0)) {
    FUNC_0(VAR_1);
    *VAR_0 = ((void*)0);
    break;
   }
   if (VAR_1->parent->left == VAR_1) {
    VAR_1 = VAR_1->parent;
    FUNC_0(VAR_1->left);
    VAR_1->left = ((void*)0);
   } else if (VAR_1->parent->right == VAR_1) {
    VAR_1 = VAR_1->parent;
    FUNC_0(VAR_1->right);
    VAR_1->right = ((void*)0);
   }
  }
 }
}
