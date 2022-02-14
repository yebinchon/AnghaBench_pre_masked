
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef int rtvec ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int REAL_VALUE_TYPE ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_9 (int ,int) ;
 scalar_t__ FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_13 (scalar_t__,int) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_15 (int,int ) ;
 int FUNC_16 (int) ;
 scalar_t__ FUNC_17 (int,int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_18 (int,int,int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_19 (scalar_t__,scalar_t__) ;
 int FUNC_20 (int) ;

rtx
FUNC_21 (enum rtx_code VAR_6, enum machine_mode VAR_7,
          enum machine_mode VAR_8, rtx VAR_9, rtx VAR_10)
{
  rtx VAR_11, VAR_12, VAR_13;

  if (VAR_8 == VAR_3)
    VAR_8 = FUNC_6 (VAR_9);
  if (VAR_8 == VAR_3)
    VAR_8 = FUNC_6 (VAR_10);

  VAR_11 = FUNC_17 (VAR_6, VAR_8, VAR_9, VAR_10);
  if (VAR_11)
    {
      if (FUNC_10 (VAR_7))
 {
          if (VAR_11 == VAR_4)
            return FUNC_1 (VAR_7);







   return VAR_2;

 }
      if (FUNC_11 (VAR_7))
 {
   if (VAR_11 == VAR_4)
     return FUNC_1 (VAR_7);
   return VAR_2;

 }

      return VAR_11;
    }


  if (FUNC_19 (VAR_9, VAR_10)
      || (VAR_9 == VAR_4 && VAR_10 != VAR_4))
    VAR_11 = VAR_9, VAR_9 = VAR_10, VAR_10 = VAR_11, VAR_6 = FUNC_20 (VAR_6);


  if (FUNC_5 (VAR_9) == VAR_0 && VAR_10 == VAR_4)
    return FUNC_21 (VAR_6, VAR_7, VAR_3,
              FUNC_13 (VAR_9, 0), FUNC_13 (VAR_9, 1));

  if (FUNC_7 (VAR_8) == VAR_1
      || FUNC_0 (VAR_9))
    return VAR_2;

  VAR_12 = FUNC_14 (VAR_9);
  VAR_13 = FUNC_14 (VAR_10);
  return FUNC_18 (VAR_6, VAR_7, VAR_8,
         VAR_12, VAR_13);
}
