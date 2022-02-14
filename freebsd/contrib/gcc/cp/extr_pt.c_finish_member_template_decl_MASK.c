
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (char*,scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_12 (int ) ;

tree
FUNC_13 (tree VAR_4)
{
  if (VAR_4 == VAR_3)
    return VAR_3;

  FUNC_12 (FUNC_3 (VAR_4));

  if (FUNC_8 (VAR_4) == VAR_2)
    {
      tree VAR_5;

      VAR_5 = FUNC_9 (VAR_4);
      if (FUNC_7 (VAR_5)
   && FUNC_0 (VAR_5)
   && !FUNC_1 (VAR_5))
 {
   tree VAR_6 = FUNC_2 (VAR_5);
   FUNC_10 (VAR_6);
   return VAR_6;
 }
      return VAR_1;
    }
  else if (FUNC_8 (VAR_4) == VAR_0)
    FUNC_11 ("data member %qD cannot be a member template", VAR_4);
  else if (FUNC_4 (VAR_4))
    {
      if (!FUNC_5 (VAR_4))
 {
   FUNC_10 (FUNC_6 (VAR_4));
   return FUNC_6 (VAR_4);
 }
      else
 return VAR_4;
    }
  else
    FUNC_11 ("invalid member template declaration %qD", VAR_4);

  return VAR_3;
}
