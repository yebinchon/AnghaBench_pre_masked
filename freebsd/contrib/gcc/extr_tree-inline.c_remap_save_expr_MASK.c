
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef int splay_tree_value ;
typedef TYPE_1__* splay_tree_node ;
typedef int splay_tree_key ;
typedef int splay_tree ;
struct TYPE_3__ {scalar_t__ value; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int ,int ) ;
 TYPE_1__* FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3 (tree *VAR_0, void *VAR_1, int *VAR_2)
{
  splay_tree VAR_3 = (splay_tree) VAR_1;
  splay_tree_node VAR_4;
  tree VAR_5;


  VAR_4 = FUNC_2 (VAR_3, (splay_tree_key) *VAR_0);


  if (!VAR_4)
    {
      VAR_5 = FUNC_0 (*VAR_0);


      FUNC_1 (VAR_3, (splay_tree_key) *VAR_0, (splay_tree_value) VAR_5);

      FUNC_1 (VAR_3, (splay_tree_key) VAR_5, (splay_tree_value) VAR_5);
    }
  else
    {

      *VAR_2 = 0;
      VAR_5 = (tree) VAR_4->value;
    }


  *VAR_0 = VAR_5;
}
