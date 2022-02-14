
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int TREE_NO_WARNING ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__,int) ;

tree
FUNC_3 (tree VAR_1, tree VAR_2, bool VAR_3)
{
  tree VAR_4 = FUNC_2 (VAR_1, VAR_2, VAR_3);
  if (VAR_4)
    {
      VAR_4 = FUNC_1 (VAR_0, FUNC_0 (VAR_4), VAR_4);
      TREE_NO_WARNING (VAR_5) = 1;
    }

  return VAR_4;
}
