
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* root; } ;
typedef TYPE_1__ rbtree_type ;
struct TYPE_9__ {struct TYPE_9__* right; struct TYPE_9__* left; } ;
typedef TYPE_2__ rbnode_type ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(rbtree_type* VAR_1, rbnode_type* VAR_2,
 rbnode_type* VAR_3, rbnode_type* VAR_4)
{
 if(VAR_2 == VAR_0)
 {
  FUNC_0(VAR_1->root == VAR_3);
  if(VAR_1->root == VAR_3) VAR_1->root = VAR_4;
  return;
 }
 FUNC_0(VAR_2->left == VAR_3 || VAR_2->right == VAR_3
  || VAR_2->left == VAR_4 || VAR_2->right == VAR_4);
 if(VAR_2->left == VAR_3) VAR_2->left = VAR_4;
 if(VAR_2->right == VAR_3) VAR_2->right = VAR_4;
}
