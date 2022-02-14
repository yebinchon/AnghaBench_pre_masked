
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef scalar_t__ RTX_CODE ;
typedef int HOST_WIDE_INT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (int ,int) ;
 scalar_t__ VAR_18 ;
 scalar_t__ FUNC_7 (int ,int ) ;

__attribute__((used)) static int
FUNC_8 (enum machine_mode VAR_19, rtx VAR_20, RTX_CODE VAR_21,
   int VAR_22)
{
  HOST_WIDE_INT VAR_23;
  enum rtx_code VAR_24 = FUNC_0 (VAR_20);


  if (VAR_14
      && (VAR_13 || VAR_16)
      && (FUNC_1 (VAR_19) == VAR_7
   || (VAR_16 && VAR_19 == VAR_4)))
    return (VAR_24 == VAR_2 && FUNC_3 (VAR_20) < 1024
     && FUNC_3 (VAR_20) > -1024
     && (FUNC_3 (VAR_20) & 3) == 0);

  if (VAR_17 && FUNC_4 (VAR_19))
    {


      if (!VAR_15 || VAR_19 != VAR_4)
 return (VAR_24 == VAR_2
  && FUNC_3 (VAR_20) < 1024
  && FUNC_3 (VAR_20) > -1024
  && (FUNC_3 (VAR_20) & 3) == 0);
    }

  if (FUNC_6 (VAR_20, VAR_22)
      && (FUNC_2 (VAR_19) <= 4))
    return 1;

  if (VAR_19 == VAR_4 || VAR_19 == VAR_3)
    {
      if (VAR_24 == VAR_2)
 {
   HOST_WIDE_INT VAR_25 = FUNC_3 (VAR_20);

   if (VAR_15)
     return VAR_25 > -256 && VAR_25 < 256;
   else
     return VAR_25 > -4096 && VAR_25 < 4092;
 }

      return VAR_15 && FUNC_6 (VAR_20, VAR_22);
    }

  if (FUNC_2 (VAR_19) <= 4
      && ! (VAR_18
     && (VAR_19 == VAR_5
  || (VAR_19 == VAR_9 && VAR_21 == VAR_11))))
    {
      if (VAR_24 == VAR_8)
 {
   rtx VAR_26 = FUNC_5 (VAR_20, 0);
   rtx VAR_27 = FUNC_5 (VAR_20, 1);

   return ((FUNC_6 (VAR_26, VAR_22)
     && FUNC_7 (VAR_27, VAR_12))
    || (FUNC_6 (VAR_27, VAR_22)
        && FUNC_7 (VAR_26, VAR_12)));
 }
      else if (VAR_24 == VAR_6 || VAR_24 == VAR_1
        || VAR_24 == VAR_0 || VAR_24 == VAR_10)
 {
   rtx VAR_28 = FUNC_5 (VAR_20, 1);

   return (FUNC_6 (FUNC_5 (VAR_20, 0), VAR_22)
    && FUNC_0 (VAR_28) == VAR_2
    && FUNC_3 (VAR_28) > 0
    && FUNC_3 (VAR_28) <= 31);
 }
    }



  if (VAR_18)
    {
      if (VAR_19 == VAR_5 || (VAR_21 == VAR_11 && VAR_19 == VAR_9))
 VAR_23 = 256;
      else
 VAR_23 = 4096;
    }
  else
    VAR_23 = (VAR_19 == VAR_5) ? 4095 : 4096;

  return (VAR_24 == VAR_2
   && FUNC_3 (VAR_20) < VAR_23
   && FUNC_3 (VAR_20) > -VAR_23);
}
