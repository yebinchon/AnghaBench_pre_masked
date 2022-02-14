
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct finally_tree_node {int parent; int child; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,struct finally_tree_node*) ;

__attribute__((used)) static bool
FUNC_1 (tree VAR_1, tree VAR_2)
{
  struct finally_tree_node VAR_3, *VAR_4;

  do
    {
      VAR_3.child = VAR_1;
      VAR_4 = (struct finally_tree_node *) FUNC_0 (VAR_0, &VAR_3);
      if (!VAR_4)
 return 1;
      VAR_1 = VAR_4->parent;
    }
  while (VAR_1 != VAR_2);

  return 0;
}
