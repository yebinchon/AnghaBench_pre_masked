
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef enum built_in_function { ____Placeholder_built_in_function } built_in_function ;
typedef int REAL_VALUE_TYPE ;
typedef scalar_t__ HOST_WIDE_INT ;


 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int const VAR_6 ;
 int const VAR_7 ;
 int const VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int VAR_13 ;
 int const VAR_14 ;
 int const VAR_15 ;
 int const VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int *,int ,int const*) ;
 int FUNC_11 (int *,int ,scalar_t__,int,int ) ;
 scalar_t__ FUNC_12 (int *,int *) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int *,int ,int const*,scalar_t__) ;
 scalar_t__ FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (int ) ;
 scalar_t__ FUNC_17 (int ,int ,int ) ;

__attribute__((used)) static tree
FUNC_18 (tree VAR_18, tree VAR_19,
         const REAL_VALUE_TYPE *VAR_20)
{
  if (FUNC_17 (VAR_19, VAR_10, VAR_11))
    {
      tree VAR_21 = FUNC_4 (FUNC_4 (VAR_18));
      tree VAR_22 = FUNC_5 (VAR_19);


      if (FUNC_16 (VAR_22))
 return FUNC_7 (VAR_21, VAR_13);


      if (FUNC_13 (VAR_22))
 {
   REAL_VALUE_TYPE VAR_23;

   FUNC_10 (&VAR_23, FUNC_6 (VAR_21), VAR_20);
   return FUNC_7 (VAR_21, VAR_23);
 }


      if (VAR_17
   && FUNC_0 (VAR_22) == VAR_9
   && ! FUNC_1 (VAR_22))
 {
   REAL_VALUE_TYPE VAR_24;
   REAL_VALUE_TYPE VAR_25;
   HOST_WIDE_INT VAR_26;

   VAR_25 = FUNC_3 (VAR_22);
   VAR_26 = FUNC_15 (&VAR_25);
   FUNC_11 (&VAR_24, VAR_12, VAR_26,
        VAR_26 < 0 ? -1 : 0, 0);
   if (FUNC_12 (&VAR_25, &VAR_24))
     {
       REAL_VALUE_TYPE VAR_27;

       FUNC_14 (&VAR_27, FUNC_6 (VAR_21), VAR_20, VAR_26);
       return FUNC_7 (VAR_21, VAR_27);
     }
 }


      if (VAR_17)
 {
   const enum built_in_function VAR_28 = FUNC_8 (VAR_22);

   if ((VAR_20 == &VAR_16
        && (VAR_28 == VAR_0
     || VAR_28 == VAR_7
     || VAR_28 == VAR_8))
       || (VAR_20 == &VAR_15
    && (VAR_28 == VAR_4
        || VAR_28 == VAR_5
        || VAR_28 == VAR_6))
       || (VAR_20 == &VAR_14
    && (VAR_28 == VAR_1
        || VAR_28 == VAR_2
        || VAR_28 == VAR_3)))
     return FUNC_9 (VAR_21, FUNC_5 (FUNC_2 (VAR_22, 1)));
 }
    }

  return 0;
}
