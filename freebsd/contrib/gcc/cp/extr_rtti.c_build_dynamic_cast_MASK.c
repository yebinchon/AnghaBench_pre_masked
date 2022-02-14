
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef scalar_t__ TREE_SIDE_EFFECTS ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

tree
FUNC_3 (tree VAR_3, tree VAR_4)
{
  if (VAR_3 == VAR_1 || VAR_4 == VAR_1)
    return VAR_1;

  if (VAR_2)
    {
      VAR_4 = FUNC_1 (VAR_0, VAR_3, VAR_4);
      TREE_SIDE_EFFECTS (VAR_5) = 1;

      return VAR_5;
    }

  return FUNC_2 (FUNC_0 (VAR_3, VAR_4));
}
