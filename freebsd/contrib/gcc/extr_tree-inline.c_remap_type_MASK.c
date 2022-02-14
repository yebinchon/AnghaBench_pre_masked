
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int * tree ;
typedef TYPE_1__* splay_tree_node ;
typedef int splay_tree_key ;
struct TYPE_8__ {int src_fn; int decl_map; } ;
typedef TYPE_2__ copy_body_data ;
struct TYPE_7__ {int value; } ;


 int FUNC_0 (TYPE_2__*,int *,int *) ;
 int * FUNC_1 (int *,TYPE_2__*) ;
 TYPE_1__* FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int ) ;

tree
FUNC_4 (tree VAR_0, copy_body_data *VAR_1)
{
  splay_tree_node VAR_2;

  if (VAR_0 == ((void*)0))
    return VAR_0;


  VAR_2 = FUNC_2 (VAR_1->decl_map, (splay_tree_key) VAR_0);
  if (VAR_2)
    return (tree) VAR_2->value;


  if (! FUNC_3 (VAR_0, VAR_1->src_fn))
    {
      FUNC_0 (VAR_1, VAR_0, VAR_0);
      return VAR_0;
    }

  return FUNC_1 (VAR_0, VAR_1);
}
