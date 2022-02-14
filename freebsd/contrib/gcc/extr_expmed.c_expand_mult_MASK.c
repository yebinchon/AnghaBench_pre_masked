
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct algorithm {int dummy; } ;
typedef scalar_t__ rtx ;
typedef enum mult_variant { ____Placeholder_mult_variant } mult_variant ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int REAL_VALUE_TYPE ;
typedef scalar_t__ HOST_WIDE_INT ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,scalar_t__) ;
 scalar_t__ FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_12 (int ,int) ;
 scalar_t__ FUNC_13 (int,scalar_t__,struct algorithm*,int*,int) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_14 (int,int ,scalar_t__,scalar_t__,scalar_t__,int,int ) ;
 scalar_t__ FUNC_15 (int,scalar_t__,scalar_t__,scalar_t__,struct algorithm*,int) ;
 scalar_t__ FUNC_16 (int ,int,scalar_t__,int ,scalar_t__,int) ;
 scalar_t__ FUNC_17 (int,int ,scalar_t__,scalar_t__,int ) ;
 scalar_t__ VAR_15 ;
 int FUNC_18 (scalar_t__) ;
 scalar_t__ FUNC_19 (int ,scalar_t__) ;
 int FUNC_20 (scalar_t__) ;
 scalar_t__ FUNC_21 (int,scalar_t__) ;
 int FUNC_22 (int,scalar_t__,scalar_t__) ;
 int* VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_23 (int ,int ) ;
 int VAR_19 ;
 int VAR_20 ;

rtx
FUNC_24 (enum machine_mode VAR_21, rtx VAR_22, rtx VAR_23, rtx VAR_24,
      int VAR_25)
{
  enum mult_variant VAR_26;
  struct algorithm VAR_27;
  int VAR_28;



  if (VAR_23 == VAR_11)
    return VAR_11;
  if (VAR_23 == VAR_12)
    return VAR_22;
  if (VAR_23 == VAR_13)
    return FUNC_17 (VAR_21,
   FUNC_6 (VAR_21) == VAR_5
   && !VAR_25 && VAR_15
   ? VAR_18 : VAR_17,
   VAR_22, VAR_24, 0);



  if (FUNC_11 (VAR_21)
      && (VAR_25 || !VAR_15))
    {
      HOST_WIDE_INT VAR_29 = 0;
      rtx VAR_30 = FUNC_21 (VAR_21, VAR_3 + 1);
      if (FUNC_3 (VAR_23) == VAR_1)
 {



   if (FUNC_7 (VAR_23) < 0
       && FUNC_5 (VAR_21) > VAR_2)
     {




       VAR_28 = FUNC_23 (FUNC_22 (VAR_21, VAR_30, VAR_23), VAR_9)
    - VAR_16[VAR_21];
       if (VAR_28 > 0
    && FUNC_13 (VAR_21, -FUNC_7 (VAR_23), &VAR_27,
       &VAR_26, VAR_28))
  {
    rtx VAR_31 = FUNC_15 (VAR_21, VAR_22, -FUNC_7 (VAR_23),
      VAR_6, &VAR_27,
      VAR_26);
    return FUNC_17 (VAR_21, VAR_17, VAR_31, VAR_24, 0);
  }
     }
   else VAR_29 = FUNC_7 (VAR_23);
 }
      else if (FUNC_3 (VAR_23) == VAR_0)
 {


   if (FUNC_0 (VAR_23) == 0)
     VAR_29 = FUNC_1 (VAR_23);
   else if (FUNC_1 (VAR_23) == 0
     && FUNC_2 (FUNC_0 (VAR_23)))
     {
       int VAR_32 = FUNC_18 (FUNC_0 (VAR_23))
     + VAR_2;
       return FUNC_16 (VAR_4, VAR_21, VAR_22,
       FUNC_12 (VAR_7, VAR_32),
       VAR_24, VAR_25);
     }
 }





      if (VAR_29 != 0)
 {

   if (FUNC_2 (VAR_29))
     return FUNC_16 (VAR_4, VAR_21, VAR_22,
     FUNC_12 (VAR_7, FUNC_18 (VAR_29)),
     VAR_24, VAR_25);



   VAR_28 = FUNC_23 (FUNC_22 (VAR_21, VAR_30, VAR_23), VAR_9);
   if (FUNC_13 (VAR_21, VAR_29, &VAR_27, &VAR_26,
       VAR_28))
     return FUNC_15 (VAR_21, VAR_22, VAR_29, VAR_24,
          &VAR_27, VAR_26);
 }
    }

  if (FUNC_3 (VAR_22) == VAR_0)
    {
      rtx VAR_33 = VAR_22;
      VAR_22 = VAR_23;
      VAR_23 = VAR_33;
    }


  if (FUNC_3 (VAR_23) == VAR_0
      && FUNC_10 (VAR_21))
    {
      REAL_VALUE_TYPE VAR_34;
      FUNC_9 (VAR_34, VAR_23);

      if (FUNC_8 (VAR_34, VAR_14))
 {
   VAR_22 = FUNC_19 (FUNC_4 (VAR_22), VAR_22);
   return FUNC_14 (VAR_21, VAR_10, VAR_22, VAR_22,
          VAR_24, VAR_25, VAR_8);
 }
    }



  VAR_22 = FUNC_14 (VAR_21,
        ! VAR_25
        && VAR_15 && (FUNC_6(VAR_21) == VAR_5)
        ? VAR_20 : VAR_19,
        VAR_22, VAR_23, VAR_24, VAR_25, VAR_8);
  FUNC_20 (VAR_22);
  return VAR_22;
}
