
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
struct affine_tree_combination {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct affine_tree_combination*) ;
 int FUNC_3 (int ,int ,struct affine_tree_combination*) ;

__attribute__((used)) static tree
FUNC_4 (tree VAR_1)
{
  tree VAR_2 = FUNC_0 (VAR_1);
  struct affine_tree_combination VAR_3;

  if (FUNC_1 (VAR_2) > VAR_0)
    return VAR_1;

  FUNC_3 (VAR_1, VAR_2, &VAR_3);
  return FUNC_2 (&VAR_3);
}
