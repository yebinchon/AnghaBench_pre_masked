
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef int splay_tree_value ;
typedef int splay_tree_key ;
struct TYPE_3__ {int decl_map; } ;
typedef TYPE_1__ copy_body_data ;


 int FUNC_0 (int ,int ,int ) ;

void
FUNC_1 (copy_body_data *VAR_0, tree VAR_1, tree VAR_2)
{
  FUNC_0 (VAR_0->decl_map, (splay_tree_key) VAR_1,
       (splay_tree_value) VAR_2);



  if (VAR_1 != VAR_2)
    FUNC_0 (VAR_0->decl_map, (splay_tree_key) VAR_2,
         (splay_tree_value) VAR_2);
}
