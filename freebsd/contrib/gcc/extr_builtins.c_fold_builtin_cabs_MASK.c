
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int REAL_VALUE_TYPE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__,int ) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_14 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_15 (int ,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_16 (scalar_t__,int ) ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_17 (int *,int ,int *,int *) ;
 scalar_t__ FUNC_18 (int *,int ,int *) ;
 scalar_t__ FUNC_19 (scalar_t__) ;

__attribute__((used)) static tree
FUNC_20 (tree VAR_18, tree VAR_19, tree VAR_20)
{
  tree VAR_21;

  if (!VAR_18 || FUNC_0 (VAR_18))
    return VAR_9;

  VAR_21 = FUNC_8 (VAR_18);
  if (FUNC_1 (FUNC_7 (VAR_21)) != VAR_4
      || FUNC_1 (FUNC_7 (FUNC_7 (VAR_21))) != VAR_13)
    return VAR_9;


  if (VAR_15
      && FUNC_1 (VAR_21) == VAR_2
      && FUNC_1 (FUNC_5 (VAR_21)) == VAR_12
      && FUNC_1 (FUNC_3 (VAR_21)) == VAR_12
      && ! FUNC_2 (FUNC_5 (VAR_21))
      && ! FUNC_2 (FUNC_3 (VAR_21)))
    {
      REAL_VALUE_TYPE VAR_22, VAR_23;

      VAR_22 = FUNC_6 (FUNC_5 (VAR_21));
      VAR_23 = FUNC_6 (FUNC_3 (VAR_21));

      FUNC_17 (&VAR_22, VAR_7, &VAR_22, &VAR_22);
      FUNC_17 (&VAR_23, VAR_7, &VAR_23, &VAR_23);
      FUNC_17 (&VAR_22, VAR_10, &VAR_22, &VAR_23);
      if (FUNC_18 (&VAR_22, FUNC_9 (VAR_19), &VAR_22)
   || ! VAR_14)
 return FUNC_11 (VAR_19, VAR_22);
    }


  if (FUNC_1 (VAR_21) == VAR_3
      && FUNC_19 (FUNC_4 (VAR_21, 0)))
    return FUNC_14 (VAR_0, VAR_19, FUNC_4 (VAR_21, 1));
  if (FUNC_1 (VAR_21) == VAR_3
      && FUNC_19 (FUNC_4 (VAR_21, 1)))
    return FUNC_14 (VAR_0, VAR_19, FUNC_4 (VAR_21, 0));


  if (FUNC_1 (VAR_21) == VAR_8
      || FUNC_1 (VAR_21) == VAR_5)
    {
      tree VAR_24 = FUNC_12 (VAR_9, FUNC_4 (VAR_21, 0));
      return FUNC_10 (VAR_20, VAR_24);
    }


  if (VAR_15
      && VAR_16 && !VAR_17)
    {
      tree VAR_25 = FUNC_16 (VAR_19, VAR_1);

      if (VAR_25 != VAR_9)
 {
   tree VAR_26, VAR_27, VAR_28, VAR_29;

   VAR_21 = FUNC_13 (VAR_21);

   VAR_26 = FUNC_14 (VAR_11, VAR_19, VAR_21);
   VAR_27 = FUNC_14 (VAR_6, VAR_19, VAR_21);

   VAR_26 = FUNC_13 (VAR_26);
   VAR_27 = FUNC_13 (VAR_27);

   VAR_28 = FUNC_15 (VAR_10, VAR_19,
    FUNC_15 (VAR_7, VAR_19,
          VAR_26, VAR_26),
    FUNC_15 (VAR_7, VAR_19,
          VAR_27, VAR_27));

   VAR_29 = FUNC_12 (VAR_9, VAR_28);
   return FUNC_10 (VAR_25, VAR_29);
 }
    }

  return VAR_9;
}
