
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 (int,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;

tree
FUNC_8 (enum tree_code VAR_6, tree VAR_7, tree VAR_8)
{
  tree VAR_9 = FUNC_1 (VAR_7);

  if (VAR_7 == VAR_5 || VAR_8 == VAR_5)
    return VAR_5;

  FUNC_4 (FUNC_0 (VAR_9) == VAR_1 && FUNC_2 (VAR_9)
       && VAR_9 == FUNC_1 (VAR_8));


  if (FUNC_0 (VAR_7) == VAR_0 && FUNC_0 (VAR_8) == VAR_0)
    {

      if (VAR_6 == VAR_4 && FUNC_7 (VAR_7))
 return VAR_8;
      else if ((VAR_6 == VAR_2 || VAR_6 == VAR_4)
        && FUNC_7 (VAR_8))
 return VAR_7;
      else if (VAR_6 == VAR_3 && FUNC_6 (VAR_7))
 return VAR_8;


      return FUNC_5 (VAR_6, VAR_7, VAR_8, 0);
    }

  return FUNC_3 (VAR_6, VAR_9, VAR_7, VAR_8);
}
