
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* splay_tree_node ;
struct TYPE_5__ {struct TYPE_5__* right; struct TYPE_5__* left; } ;



__attribute__((used)) static inline void
FUNC_0 (splay_tree_node *VAR_0, splay_tree_node VAR_1, splay_tree_node VAR_2)
{
  splay_tree_node VAR_3;
  VAR_3 = VAR_2->left;
  VAR_2->left = VAR_1;
  VAR_1->right = VAR_3;
  *VAR_0 = VAR_2;
}
