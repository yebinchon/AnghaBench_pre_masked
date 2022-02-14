
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;

__attribute__((used)) static tree
FUNC_8 (tree VAR_2, tree VAR_3)
{
  tree VAR_4, VAR_5, VAR_6, VAR_7;
  enum tree_code VAR_8 = FUNC_0 (VAR_2);

  if (VAR_8 == VAR_1
      || VAR_8 == VAR_0)
    {
      VAR_4 = FUNC_1 (VAR_2, 0);
      VAR_5 = FUNC_1 (VAR_2, 1);

      if (FUNC_7 (VAR_5))
 {
   VAR_6 = FUNC_8 (VAR_4, VAR_3);
   VAR_7 = FUNC_6 (VAR_5);
 }
      else if (VAR_8 == VAR_1 && FUNC_7 (VAR_4))
 {
   VAR_6 = FUNC_6 (VAR_4);
   VAR_7 = FUNC_8 (VAR_5, VAR_3);
 }
      else
 return VAR_2;

      if (VAR_6 == VAR_4 && VAR_7 == VAR_5)
 return VAR_2;

      VAR_6 = FUNC_3 (FUNC_2 (VAR_2), VAR_6, VAR_3);
      VAR_7 = FUNC_3 (FUNC_2 (VAR_2), VAR_7, VAR_3);

      if (VAR_8 == VAR_1)
 VAR_2 = FUNC_5 (FUNC_2 (VAR_2), VAR_6, VAR_7);
      else
 VAR_2 = FUNC_4 (FUNC_2 (VAR_2), VAR_6, VAR_7);

      return VAR_2;
    }
  else
    return FUNC_6 (VAR_2);
}
