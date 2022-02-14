
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef enum built_in_function { ____Placeholder_built_in_function } built_in_function ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__,int) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__) ;

enum built_in_function
FUNC_15 (tree VAR_6)
{
  tree VAR_7, VAR_8, VAR_9;
  tree VAR_10, VAR_11;

  if (FUNC_8 (VAR_6) != VAR_2
      || FUNC_8 (FUNC_9 (VAR_6, 0)) != VAR_0)
    return VAR_3;

  VAR_7 = FUNC_14 (VAR_6);
  if (VAR_7 == VAR_5
      || FUNC_8 (VAR_7) != VAR_4
      || ! FUNC_1 (VAR_7)
      || FUNC_2 (VAR_7) == VAR_1)
    return VAR_3;

  VAR_8 = FUNC_9 (VAR_6, 1);
  VAR_9 = FUNC_12 (FUNC_10 (VAR_7));
  for (; VAR_9; VAR_9 = FUNC_7 (VAR_9))
    {


      VAR_11 = FUNC_11 (VAR_9);
      if (FUNC_13 (VAR_11))
 {
   if (VAR_8)
     return VAR_3;
   return FUNC_3 (VAR_7);
 }

      if (! VAR_8)
 return VAR_3;

      VAR_10 = FUNC_10 (FUNC_11 (VAR_8));

      if (FUNC_6 (VAR_11))
 {
   if (! FUNC_6 (VAR_10))
     return VAR_3;
 }
      else if (FUNC_0 (VAR_11))
 {
   if (! FUNC_0 (VAR_10))
     return VAR_3;
 }
      else if (FUNC_5 (VAR_11))
 {
   if (! FUNC_5 (VAR_10))
     return VAR_3;
 }
      else if (FUNC_4 (VAR_11))
 {
   if (! FUNC_4 (VAR_10))
     return VAR_3;
 }
      else
 return VAR_3;

      VAR_8 = FUNC_7 (VAR_8);
    }


  return FUNC_3 (VAR_7);
}
