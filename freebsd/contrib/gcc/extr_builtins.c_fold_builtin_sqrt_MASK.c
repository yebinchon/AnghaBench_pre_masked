
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef enum built_in_function { ____Placeholder_built_in_function } built_in_function ;
typedef int REAL_VALUE_TYPE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_7 ;
 int FUNC_4 (int *,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__,int) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 int VAR_8 ;
 scalar_t__ FUNC_12 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__,int ) ;
 scalar_t__ FUNC_15 (scalar_t__,scalar_t__) ;
 int FUNC_16 (scalar_t__) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_17 (int ,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_18 (scalar_t__,int) ;
 scalar_t__ FUNC_19 (int *,int ,int *) ;
 int FUNC_20 (int ,int ) ;
 scalar_t__ FUNC_21 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_22 (scalar_t__) ;
 int FUNC_23 (scalar_t__,int ,int ) ;

__attribute__((used)) static tree
FUNC_24 (tree VAR_14, tree VAR_15)
{

  enum built_in_function VAR_16;
  tree VAR_17 = FUNC_10 (VAR_14);

  if (!FUNC_23 (VAR_14, VAR_7, VAR_8))
    return VAR_5;


  if (FUNC_6 (VAR_17) == VAR_6
      && ! FUNC_7 (VAR_17))
    {
      REAL_VALUE_TYPE VAR_18, VAR_19;

      VAR_19 = FUNC_9 (VAR_17);
      if (FUNC_19 (&VAR_18, FUNC_11 (VAR_15), &VAR_19)
   || (!VAR_12 && !VAR_11))
 return FUNC_14 (VAR_15, VAR_18);
    }


  VAR_16 = FUNC_16 (VAR_17);
  if (VAR_13 && FUNC_0 (VAR_16))
    {
      tree VAR_20 = FUNC_8 (FUNC_8 (VAR_17, 0), 0);
      VAR_17 = FUNC_17 (VAR_4, VAR_15,
    FUNC_10 (FUNC_8 (VAR_17, 1)),
    FUNC_14 (VAR_15, VAR_9));
      VAR_14 = FUNC_15 (VAR_5, VAR_17);
      return FUNC_13 (VAR_20, VAR_14);
    }


  if (VAR_13 && FUNC_1 (VAR_16))
    {
      tree VAR_21 = FUNC_18 (VAR_15, VAR_1);

      if (VAR_21)
 {
   tree VAR_22 = FUNC_10 (FUNC_8 (VAR_17, 1));
   tree VAR_23;

   REAL_VALUE_TYPE VAR_24 =
     FUNC_2 (VAR_16) ? VAR_9 : VAR_10;


   FUNC_4 (&VAR_24, FUNC_3 (&VAR_24) - 1);
   VAR_24 = FUNC_20 (FUNC_11 (VAR_15), VAR_24);
   VAR_23 = FUNC_14 (VAR_15, VAR_24);
   VAR_14 = FUNC_21 (VAR_5, VAR_22,
          FUNC_15 (VAR_5, VAR_23));
   return FUNC_13 (VAR_21, VAR_14);
 }
    }


  if (VAR_13
      && (VAR_16 == VAR_1
   || VAR_16 == VAR_2
   || VAR_16 == VAR_3))
    {
      tree VAR_25 = FUNC_8 (FUNC_8 (VAR_17, 0), 0);
      tree VAR_26 = FUNC_10 (FUNC_8 (VAR_17, 1));
      tree VAR_27 = FUNC_10 (FUNC_5 (FUNC_8 (VAR_17, 1)));
      tree VAR_28;
      if (!FUNC_22 (VAR_26))
 VAR_26 = FUNC_12 (VAR_0, VAR_15, VAR_26);
      VAR_28 = FUNC_17 (VAR_4, VAR_15, VAR_27,
      FUNC_14 (VAR_15, VAR_9));
      VAR_14 = FUNC_21 (VAR_5, VAR_26,
      FUNC_15 (VAR_5, VAR_28));
      return FUNC_13 (VAR_25, VAR_14);
    }

  return VAR_5;
}
