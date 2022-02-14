
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_8 (scalar_t__,int) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ FUNC_9 (int,scalar_t__,int) ;
 int FUNC_10 (scalar_t__,int) ;
 int FUNC_11 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__) ;
 int FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (int,int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_15 (int,int,int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_16 (int ,int,scalar_t__,int) ;
 scalar_t__ FUNC_17 (scalar_t__) ;

__attribute__((used)) static rtx
FUNC_18 (enum rtx_code VAR_16, enum machine_mode VAR_17,
     enum machine_mode VAR_18, rtx VAR_19, rtx VAR_20)
{
  enum rtx_code VAR_21 = FUNC_2 (VAR_19);

  if (FUNC_2 (VAR_20) == VAR_2)
    {
      if (FUNC_7 (VAR_20) == 0 && FUNC_0 (VAR_19))
 {


   if (VAR_16 == VAR_6)
     {
       if (FUNC_3 (VAR_19) == VAR_17)
  return FUNC_17 (VAR_19);
       else
  return FUNC_15 (FUNC_2 (VAR_19), VAR_17, VAR_11,
             FUNC_8 (VAR_19, 0), FUNC_8 (VAR_19, 1));
     }
   else if (VAR_16 == VAR_3)
     {
       enum rtx_code VAR_22 = FUNC_11 (VAR_19, VAR_7);
       if (VAR_22 != VAR_10)
         return FUNC_15 (VAR_22, VAR_17, VAR_11,
             FUNC_8 (VAR_19, 0), FUNC_8 (VAR_19, 1));
     }
 }
    }


  if ((VAR_16 == VAR_3 || VAR_16 == VAR_6)
      && (VAR_21 == VAR_8 || VAR_21 == VAR_4)
      && FUNC_1 (VAR_20)
      && FUNC_1 (FUNC_8 (VAR_19, 1))
      && (FUNC_6 (VAR_18) || VAR_15))
    {
      rtx VAR_23 = FUNC_8 (VAR_19, 0);
      rtx VAR_24 = FUNC_8 (VAR_19, 1);

      VAR_24 = FUNC_14 (VAR_21 == VAR_8 ? VAR_4 : VAR_8,
          VAR_18, VAR_20, VAR_24);
      return FUNC_15 (VAR_16, VAR_17, VAR_18, VAR_23, VAR_24);
    }



  if (VAR_16 == VAR_6
      && VAR_20 == VAR_14
      && FUNC_4 (VAR_17) == VAR_5
      && VAR_18 != VAR_11

      && VAR_17 != VAR_0
      && VAR_18 != VAR_0
      && FUNC_10 (VAR_19, VAR_18) == 1
      && VAR_9 == 1)
    return FUNC_5 (VAR_17) > FUNC_5 (VAR_18)
    ? FUNC_16 (VAR_13, VAR_17, VAR_19, VAR_18)
    : FUNC_9 (VAR_17, VAR_19, VAR_18);


  if ((VAR_16 == VAR_3 || VAR_16 == VAR_6)
      && VAR_20 == VAR_14
      && VAR_21 == VAR_12)
    return FUNC_15 (VAR_16, VAR_17, VAR_18,
        FUNC_8 (VAR_19, 0), FUNC_8 (VAR_19, 1));


  if ((VAR_16 == VAR_3 || VAR_16 == VAR_6)
      && VAR_21 == VAR_12
      && FUNC_12 (FUNC_8 (VAR_19, 0), VAR_20)
      && !FUNC_13 (FUNC_8 (VAR_19, 0)))
    return FUNC_15 (VAR_16, VAR_17, VAR_18,
        FUNC_8 (VAR_19, 1), VAR_14);


  if ((VAR_16 == VAR_3 || VAR_16 == VAR_6)
      && VAR_21 == VAR_12
      && FUNC_12 (FUNC_8 (VAR_19, 1), VAR_20)
      && !FUNC_13 (FUNC_8 (VAR_19, 1)))
    return FUNC_15 (VAR_16, VAR_17, VAR_18,
        FUNC_8 (VAR_19, 0), VAR_14);


  if ((VAR_16 == VAR_3 || VAR_16 == VAR_6)
      && VAR_21 == VAR_12
      && (FUNC_2 (VAR_20) == VAR_2
   || FUNC_2 (VAR_20) == VAR_1)
      && (FUNC_2 (FUNC_8 (VAR_19, 1)) == VAR_2
   || FUNC_2 (FUNC_8 (VAR_19, 1)) == VAR_1))
    return FUNC_15 (VAR_16, VAR_17, VAR_18, FUNC_8 (VAR_19, 0),
        FUNC_14 (VAR_12, VAR_18,
        FUNC_8 (VAR_19, 1), VAR_20));

  return VAR_7;
}
