
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* splay_tree_node ;
typedef int splay_tree_key ;
typedef TYPE_2__* splay_tree ;
struct TYPE_7__ {scalar_t__ (* comp ) (int ,int ) ;TYPE_1__* root; } ;
struct TYPE_6__ {int key; } ;


 int FUNC_0 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;

splay_tree_node
FUNC_2 (splay_tree VAR_0, splay_tree_key VAR_1)
{
  FUNC_0 (VAR_0, VAR_1);

  if (VAR_0->root && (*VAR_0->comp)(VAR_0->root->key, VAR_1) == 0)
    return VAR_0->root;
  else
    return 0;
}
