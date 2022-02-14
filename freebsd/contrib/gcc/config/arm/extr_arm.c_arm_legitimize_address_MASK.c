
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int HOST_WIDE_INT ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_5 (scalar_t__,int) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (int) ;
 int FUNC_8 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_9 (scalar_t__,int ) ;
 scalar_t__ FUNC_10 (int,scalar_t__) ;
 scalar_t__ FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_13 (int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__,int,int ) ;
 scalar_t__ FUNC_15 (scalar_t__,int ) ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_16 (scalar_t__,int) ;
 int FUNC_17 (scalar_t__) ;

rtx
FUNC_18 (rtx VAR_12, rtx VAR_13, enum machine_mode VAR_14)
{
  if (FUNC_6 (VAR_12))
    return FUNC_15 (VAR_12, VAR_4);

  if (FUNC_3 (VAR_12) == VAR_5)
    {
      rtx VAR_15 = FUNC_5 (VAR_12, 0);
      rtx VAR_16 = FUNC_5 (VAR_12, 1);

      if (FUNC_1 (VAR_15) && !FUNC_17 (VAR_15))
 VAR_15 = FUNC_10 (VAR_6, VAR_15);

      if (FUNC_1 (VAR_16) && !FUNC_17 (VAR_16))
 VAR_16 = FUNC_10 (VAR_6, VAR_16);

      if (FUNC_0 (VAR_15)
   && FUNC_3 (VAR_16) == VAR_0)
 {
   HOST_WIDE_INT VAR_17, VAR_18;
   rtx VAR_19, VAR_20;
   VAR_17 = FUNC_4 (VAR_16);



   if (VAR_14 == VAR_2
       || ((VAR_7 || VAR_8) && VAR_14 == VAR_1))
     {
       VAR_18 = VAR_17 & 0x0f;
       VAR_17 &= ~0x0f;
       if (VAR_18 > 4)
  {
    VAR_17 += 16;
    VAR_18 -= 16;
  }
     }
   else
     {
       VAR_18 = ((VAR_14) == VAR_9 ? 0
         : VAR_17 >= 0 ? (VAR_17 & 0xfff) : -((-VAR_17) & 0xfff));
       VAR_17 -= VAR_18;
     }

   VAR_19 = FUNC_11 (VAR_6);
   VAR_20 = FUNC_9 (FUNC_16 (VAR_15, VAR_17), VAR_4);
   FUNC_8 (VAR_19, VAR_20);
   VAR_12 = FUNC_16 (VAR_19, VAR_18);
 }
      else if (VAR_15 != FUNC_5 (VAR_12, 0) || VAR_16 != FUNC_5 (VAR_12, 1))
 VAR_12 = FUNC_13 (VAR_6, VAR_15, VAR_16);
    }



  else if (FUNC_3 (VAR_12) == VAR_3)
    {
      rtx VAR_21 = FUNC_5 (VAR_12, 0);
      rtx VAR_22 = FUNC_5 (VAR_12, 1);

      if (FUNC_1 (VAR_21))
 VAR_21 = FUNC_10 (VAR_6, VAR_21);

      if (FUNC_1 (VAR_22) && ! FUNC_17 (VAR_22))
 VAR_22 = FUNC_10 (VAR_6, VAR_22);

      if (VAR_21 != FUNC_5 (VAR_12, 0) || VAR_22 != FUNC_5 (VAR_12, 1))
 VAR_12 = FUNC_12 (VAR_6, VAR_21, VAR_22);
    }





  else if (FUNC_3 (VAR_12) == VAR_0 && VAR_11 > 0)
    {
      unsigned int VAR_23;
      HOST_WIDE_INT VAR_24, VAR_25, VAR_26;
      rtx VAR_27;




      VAR_23 = (VAR_14 == VAR_6) ? 12 : 8;
      VAR_24 = (1 << VAR_23) - 1;
      VAR_25 = FUNC_4 (VAR_12) & ~VAR_24;
      VAR_26 = FUNC_4 (VAR_12) & VAR_24;
      if (FUNC_7 (VAR_25 & 0xffffffff) > (32 - VAR_23)/2)
        {


   VAR_25 |= VAR_24;
   VAR_26 -= VAR_24;
 }
      VAR_27 = FUNC_10 (VAR_6, FUNC_2 (VAR_25));
      VAR_12 = FUNC_16 (VAR_27, VAR_26);
    }

  if (VAR_10)
    {


      rtx VAR_28 = FUNC_14 (VAR_13, VAR_14, VAR_4);

      if (VAR_28 != VAR_13)
 VAR_12 = VAR_28;
    }

  return VAR_12;
}
