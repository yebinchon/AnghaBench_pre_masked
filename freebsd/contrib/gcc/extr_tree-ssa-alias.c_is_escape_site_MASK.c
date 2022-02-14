
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef enum escape_type { ____Placeholder_escape_type } escape_type ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;

enum escape_type
FUNC_8 (tree VAR_16)
{
  tree VAR_17 = FUNC_7 (VAR_16);
  if (VAR_17 != VAR_12)
    {
      if (!FUNC_3 (VAR_17))
 return VAR_6;

      return VAR_5;
    }
  else if (FUNC_1 (VAR_16) == VAR_0)
    return VAR_4;
  else if (FUNC_1 (VAR_16) == VAR_9)
    {
      tree VAR_18 = FUNC_2 (VAR_16, 0);


      if (FUNC_1 (VAR_18) != VAR_14)
 VAR_18 = FUNC_6 (VAR_18);



      if (VAR_18 == VAR_12)
 return VAR_8;

      if (FUNC_1 (FUNC_2 (VAR_16, 1)) == VAR_10
   || FUNC_1 (FUNC_2 (VAR_16, 1)) == VAR_1
   || FUNC_1 (FUNC_2 (VAR_16, 1)) == VAR_15)
 {
   tree VAR_19 = FUNC_4 (FUNC_2 (FUNC_2 (VAR_16, 1), 0));
   tree VAR_20 = FUNC_4 (FUNC_2 (VAR_16, 1));



   if (FUNC_0 (VAR_19) && !FUNC_0 (VAR_20))
     return VAR_2;



   if (FUNC_0 (VAR_19) && !FUNC_5 (VAR_19)
       && FUNC_0 (VAR_20) && FUNC_5 (VAR_20))
     return VAR_2;
 }



      if (FUNC_1 (VAR_18) == VAR_14)
 return VAR_11;
      return VAR_3;
    }
  else if (FUNC_1 (VAR_16) == VAR_13)
    return VAR_7;

  return VAR_11;
}
