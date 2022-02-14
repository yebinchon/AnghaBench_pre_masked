
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef scalar_t__ splay_tree_value ;
typedef TYPE_1__* splay_tree_node ;
typedef int splay_tree_key ;
typedef int splay_tree ;
struct TYPE_4__ {scalar_t__ value; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 TYPE_1__* FUNC_1 (int ,int ,scalar_t__) ;
 TYPE_1__* FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_4 (tree VAR_1, tree VAR_2, splay_tree VAR_3)
{
  splay_tree_node VAR_4;

  if (!FUNC_0 (VAR_1))
    return 0;


  VAR_4 = FUNC_2 (VAR_3, (splay_tree_key) VAR_2);
  if (!VAR_4)
    VAR_4 = FUNC_1 (VAR_3,
      (splay_tree_key) VAR_2,
      (splay_tree_value) VAR_0);
  VAR_4->value = ((splay_tree_value)
       FUNC_3 (VAR_0,
    VAR_1,
    (tree) VAR_4->value));

  return 0;
}
