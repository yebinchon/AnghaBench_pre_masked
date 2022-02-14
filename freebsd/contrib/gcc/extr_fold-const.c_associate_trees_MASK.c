
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;

__attribute__((used)) static tree
FUNC_6 (tree VAR_3, tree VAR_4, enum tree_code VAR_5, tree VAR_6)
{
  if (VAR_3 == 0)
    return VAR_4;
  else if (VAR_4 == 0)
    return VAR_3;




  if (FUNC_0 (VAR_3) == VAR_5 || FUNC_0 (VAR_4) == VAR_5
      || FUNC_0 (VAR_3) == VAR_0 || FUNC_0 (VAR_4) == VAR_0)
    {
      if (VAR_5 == VAR_2)
 {
   if (FUNC_0 (VAR_3) == VAR_1)
     return FUNC_2 (VAR_0, VAR_6, FUNC_4 (VAR_6, VAR_4),
      FUNC_4 (VAR_6, FUNC_1 (VAR_3, 0)));
   else if (FUNC_0 (VAR_4) == VAR_1)
     return FUNC_2 (VAR_0, VAR_6, FUNC_4 (VAR_6, VAR_3),
      FUNC_4 (VAR_6, FUNC_1 (VAR_4, 0)));
   else if (FUNC_5 (VAR_4))
     return FUNC_4 (VAR_6, VAR_3);
 }
      else if (VAR_5 == VAR_0)
 {
   if (FUNC_5 (VAR_4))
     return FUNC_4 (VAR_6, VAR_3);
 }

      return FUNC_2 (VAR_5, VAR_6, FUNC_4 (VAR_6, VAR_3),
       FUNC_4 (VAR_6, VAR_4));
    }

  return FUNC_3 (VAR_5, VAR_6, FUNC_4 (VAR_6, VAR_3),
        FUNC_4 (VAR_6, VAR_4));
}
