
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* splay_tree_node ;
typedef int (* splay_tree_foreach_fn ) (TYPE_1__*,void*) ;
typedef int splay_tree ;
struct TYPE_6__ {struct TYPE_6__* right; struct TYPE_6__* left; } ;


 int FUNC_0 (TYPE_1__*,void*) ;

__attribute__((used)) static int
FUNC_1 (splay_tree VAR_0, splay_tree_node VAR_1,
                           splay_tree_foreach_fn VAR_2, void *VAR_3)
{
  int VAR_4;

  if (!VAR_1)
    return 0;

  VAR_4 = FUNC_1 (VAR_0, VAR_1->left, VAR_2, VAR_3);
  if (VAR_4)
    return VAR_4;

  VAR_4 = (*VAR_2)(VAR_1, VAR_3);
  if (VAR_4)
    return VAR_4;

  return FUNC_1 (VAR_0, VAR_1->right, VAR_2, VAR_3);
}
