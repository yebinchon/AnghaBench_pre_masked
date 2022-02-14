
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef TYPE_1__* splay_tree_node ;
typedef int splay_tree_key ;
typedef int splay_tree ;
struct TYPE_3__ {scalar_t__ value; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,scalar_t__) ;
 TYPE_1__* FUNC_4 (int ,int ) ;

__attribute__((used)) static int
FUNC_5 (tree VAR_0, tree VAR_1, splay_tree VAR_2)
{
  splay_tree_node VAR_3;
  tree VAR_4;

  if (!FUNC_2 (VAR_0))
    return 0;


  VAR_3 = FUNC_4 (VAR_2, (splay_tree_key) VAR_1);
  if (!VAR_3)
    return 0;

  for (VAR_4 = (tree) VAR_3->value; VAR_4; VAR_4 = FUNC_0 (VAR_4))
    if (FUNC_3 (FUNC_1 (VAR_4), VAR_0))
      return 1;

  return 0;
}
