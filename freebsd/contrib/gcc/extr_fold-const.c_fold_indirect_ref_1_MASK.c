
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (scalar_t__) ;
 int VAR_9 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_13 (scalar_t__,scalar_t__) ;

tree
FUNC_14 (tree VAR_11, tree VAR_12)
{
  tree VAR_13 = VAR_12;
  tree VAR_14;

  FUNC_2 (VAR_13);
  VAR_14 = FUNC_5 (VAR_13);
  if (!FUNC_1 (VAR_14))
    return VAR_7;

  if (FUNC_3 (VAR_13) == VAR_0)
    {
      tree VAR_15 = FUNC_4 (VAR_13, 0);
      tree VAR_16 = FUNC_5 (VAR_15);

      if (FUNC_3 (VAR_15) == VAR_4)
 return FUNC_0 (VAR_15);

      if (VAR_11 == VAR_16)
 {
   tree VAR_17 = FUNC_12 (VAR_15);
   if (VAR_17)
     return VAR_17;
   else
     return VAR_15;
 }

      else if (FUNC_3 (VAR_16) == VAR_2
        && VAR_11 == FUNC_5 (VAR_16))
 {
   tree VAR_18 = FUNC_6 (VAR_16);
   tree VAR_19 = VAR_10;
   if (VAR_18 && FUNC_7 (VAR_18))
     VAR_19 = FUNC_7 (VAR_18);
   return FUNC_9 (VAR_1, VAR_11, VAR_15, VAR_19, VAR_7, VAR_7);
 }

      else if (FUNC_3 (VAR_16) == VAR_3
        && VAR_11 == FUNC_5 (VAR_16))
 return FUNC_11 (VAR_9, VAR_11, VAR_15);
    }


  if (FUNC_3 (VAR_13) == VAR_8
      && FUNC_3 (FUNC_4 (VAR_13, 1)) == VAR_6)
    {
      tree VAR_20 = FUNC_4 (VAR_13, 0);
      tree VAR_21 = FUNC_4 (VAR_13, 1);
      tree VAR_22;

      FUNC_2 (VAR_20);
      VAR_22 = FUNC_5 (VAR_20);
      if (FUNC_3 (VAR_20) == VAR_0
    && FUNC_3 (FUNC_5 (VAR_22)) == VAR_3
   && VAR_11 == FUNC_5 (FUNC_5 (VAR_22)))
 {
   tree VAR_23 = FUNC_8 (VAR_11);
   if (FUNC_13 (VAR_23, VAR_21))
     return FUNC_11 (VAR_5, VAR_11, FUNC_4 (VAR_20, 0));
 }
    }


  if (FUNC_3 (FUNC_5 (VAR_14)) == VAR_2
      && VAR_11 == FUNC_5 (FUNC_5 (VAR_14)))
    {
      tree VAR_24;
      tree VAR_25 = VAR_10;
      VAR_13 = FUNC_10 (VAR_13);
      VAR_24 = FUNC_6 (FUNC_5 (VAR_13));
      if (VAR_24 && FUNC_7 (VAR_24))
 VAR_25 = FUNC_7 (VAR_24);
      return FUNC_9 (VAR_1, VAR_11, VAR_13, VAR_25, VAR_7, VAR_7);
    }

  return VAR_7;
}
