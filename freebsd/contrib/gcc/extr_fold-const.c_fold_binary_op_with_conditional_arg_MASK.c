
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int,scalar_t__) ;
 scalar_t__ FUNC_6 (int,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;

__attribute__((used)) static tree
FUNC_9 (enum tree_code VAR_2,
         tree VAR_3, tree VAR_4, tree VAR_5,
         tree VAR_6, tree VAR_7, int VAR_8)
{
  tree VAR_9 = VAR_8 ? FUNC_3 (VAR_4) : FUNC_3 (VAR_5);
  tree VAR_10 = VAR_8 ? FUNC_3 (VAR_5) : FUNC_3 (VAR_4);
  tree VAR_11, VAR_12, VAR_13;
  tree VAR_14 = VAR_1;
  tree VAR_15 = VAR_1;




  if (!FUNC_1 (VAR_7))
    return VAR_1;

  if (FUNC_0 (VAR_6) == VAR_0)
    {
      VAR_11 = FUNC_2 (VAR_6, 0);
      VAR_12 = FUNC_2 (VAR_6, 1);
      VAR_13 = FUNC_2 (VAR_6, 2);



      if (FUNC_4 (FUNC_3 (VAR_12)))
 VAR_14 = VAR_12;
      if (FUNC_4 (FUNC_3 (VAR_13)))
 VAR_15 = VAR_13;
    }
  else
    {
      tree VAR_16 = FUNC_3 (VAR_6);
      VAR_11 = VAR_6;
      VAR_12 = FUNC_5 (1, VAR_16);
      VAR_13 = FUNC_5 (0, VAR_16);
    }

  VAR_7 = FUNC_8 (VAR_10, VAR_7);
  if (VAR_14 == 0)
    {
      VAR_12 = FUNC_8 (VAR_9, VAR_12);
      if (VAR_8)
 VAR_14 = FUNC_6 (VAR_2, VAR_3, VAR_12, VAR_7);
      else
 VAR_14 = FUNC_6 (VAR_2, VAR_3, VAR_7, VAR_12);
    }
  if (VAR_15 == 0)
    {
      VAR_13 = FUNC_8 (VAR_9, VAR_13);
      if (VAR_8)
 VAR_15 = FUNC_6 (VAR_2, VAR_3, VAR_13, VAR_7);
      else
 VAR_15 = FUNC_6 (VAR_2, VAR_3, VAR_7, VAR_13);
    }

  VAR_11 = FUNC_7 (VAR_0, VAR_3, VAR_11, VAR_14, VAR_15);
  return FUNC_8 (VAR_3, VAR_11);
}
