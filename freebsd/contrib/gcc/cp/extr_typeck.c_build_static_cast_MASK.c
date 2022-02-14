
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int TREE_SIDE_EFFECTS ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__,int,int*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (char*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

tree
FUNC_7 (tree VAR_5, tree VAR_6)
{
  tree VAR_7;
  bool VAR_8;

  if (VAR_5 == VAR_3 || VAR_6 == VAR_3)
    return VAR_3;

  if (VAR_4)
    {
      VAR_6 = FUNC_3 (VAR_2, VAR_5, VAR_6);

      TREE_SIDE_EFFECTS (VAR_9) = 1;
      return FUNC_5 (VAR_9);
    }



  if (FUNC_0 (VAR_5) != VAR_1
      && FUNC_0 (VAR_6) == VAR_0
      && FUNC_2 (VAR_6) == FUNC_2 (FUNC_1 (VAR_6, 0)))
    VAR_6 = FUNC_1 (VAR_6, 0);

  VAR_7 = FUNC_4 (VAR_5, VAR_6, 0, &VAR_8);
  if (VAR_8)
    return VAR_7;

  FUNC_6 ("invalid static_cast from type %qT to type %qT",
  FUNC_2 (VAR_6), VAR_5);
  return VAR_3;
}
