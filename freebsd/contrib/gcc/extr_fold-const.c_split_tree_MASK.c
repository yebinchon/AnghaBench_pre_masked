
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;

__attribute__((used)) static tree
FUNC_7 (tree VAR_4, enum tree_code VAR_5, tree *VAR_6, tree *VAR_7,
     tree *VAR_8, int VAR_9)
{
  tree VAR_10 = 0;

  *VAR_6 = 0;
  *VAR_7 = 0;
  *VAR_8 = 0;


  FUNC_1 (VAR_4);

  if (FUNC_2 (VAR_4) == VAR_0 || FUNC_2 (VAR_4) == VAR_3)
    *VAR_7 = VAR_4;
  else if (FUNC_2 (VAR_4) == VAR_5
    || (! FUNC_0 (FUNC_5 (VAR_4))




        && ((VAR_5 == VAR_2 && FUNC_2 (VAR_4) == VAR_1)
     || (VAR_5 == VAR_1 && FUNC_2 (VAR_4) == VAR_2))))
    {
      tree VAR_11 = FUNC_4 (VAR_4, 0);
      tree VAR_12 = FUNC_4 (VAR_4, 1);
      int VAR_13 = FUNC_2 (VAR_4) == VAR_1;
      int VAR_14 = 0, VAR_15 = 0, VAR_16 = 0;


      if (FUNC_2 (VAR_11) == VAR_0 || FUNC_2 (VAR_11) == VAR_3)
 *VAR_7 = VAR_11, VAR_11 = 0;
      else if (FUNC_2 (VAR_12) == VAR_0 || FUNC_2 (VAR_12) == VAR_3)
 *VAR_7 = VAR_12, VAR_14 = VAR_13, VAR_12 = 0;

      if (VAR_11 != 0 && FUNC_3 (VAR_11))
 *VAR_6 = VAR_11, VAR_11 = 0;
      else if (VAR_12 != 0 && FUNC_3 (VAR_12))
 *VAR_6 = VAR_12, VAR_15 = VAR_13, VAR_12 = 0;



      if (VAR_11 != 0 && VAR_12 != 0)
 VAR_10 = VAR_4;
      else if (VAR_11 != 0)
 VAR_10 = VAR_11;
      else
 VAR_10 = VAR_12, VAR_16 = VAR_13;


      if (VAR_14)
 *VAR_8 = *VAR_7, *VAR_7 = 0;
      if (VAR_15)
 *VAR_6 = FUNC_6 (*VAR_6);
      if (VAR_16)
 VAR_10 = FUNC_6 (VAR_10);
    }
  else if (FUNC_3 (VAR_4))
    *VAR_6 = VAR_4;
  else
    VAR_10 = VAR_4;

  if (VAR_9)
    {
      if (*VAR_7)
 *VAR_8 = *VAR_7, *VAR_7 = 0;
      else if (*VAR_8)
 *VAR_7 = *VAR_8, *VAR_8 = 0;
      *VAR_6 = FUNC_6 (*VAR_6);
      VAR_10 = FUNC_6 (VAR_10);
    }

  return VAR_10;
}
