
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef scalar_t__ HOST_WIDE_INT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int,int ,int ) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;

enum machine_mode
FUNC_7 (rtx VAR_13, rtx VAR_14, HOST_WIDE_INT VAR_15)
{
  enum rtx_code VAR_16, VAR_17;
  int VAR_18 = 0;




  if ((FUNC_2 (VAR_16 = FUNC_0 (VAR_13), FUNC_1 (VAR_13, 0), FUNC_1 (VAR_13, 1))
       != VAR_10)
      || (FUNC_2 (VAR_17 = FUNC_0 (VAR_14), FUNC_1 (VAR_14, 0), FUNC_1 (VAR_14, 1))
   != VAR_10))
    return VAR_10;




  if (VAR_15 == VAR_11)
    VAR_16 = FUNC_6 (VAR_16);



  if (VAR_16 != VAR_17
      && !FUNC_3 (VAR_16, VAR_17)
      && (VAR_18 = 1, !FUNC_3 (VAR_17, VAR_16)))
    return VAR_10;

  if (VAR_18)
    {
      enum rtx_code VAR_19 = VAR_16;
      VAR_16 = VAR_17;
      VAR_17 = VAR_19;
    }

  switch (VAR_16)
    {
    case 137:
      if (VAR_15 == VAR_12)
 return VAR_0;

      switch (VAR_17)
 {
 case 137: return VAR_0;
 case 132: return VAR_6;
 case 131: return VAR_5;
 case 136: return VAR_2;
 case 135: return VAR_1;
 default: FUNC_5 ();
 }

    case 130:
      if (VAR_15 == VAR_12)
 return VAR_8;

      switch (VAR_17)
 {
 case 130:
     return VAR_8;
 case 132:
   return VAR_6;
 case 128:
   return VAR_9;
 default:
   FUNC_5 ();
 }

    case 134:
      if (VAR_15 == VAR_12)
 return VAR_4;

      switch (VAR_17)
 {
 case 134:
   return VAR_4;
 case 136:
   return VAR_2;
 case 128:
   return VAR_9;
 default:
   FUNC_5 ();
 }

    case 129:
      if (VAR_15 == VAR_12)
 return VAR_7;

      switch (VAR_17)
 {
 case 129:
   return VAR_7;
 case 131:
   return VAR_5;
 case 128:
   return VAR_9;
 default:
   FUNC_5 ();
 }

    case 133:
      if (VAR_15 == VAR_12)
 return VAR_3;

      switch (VAR_17)
 {
 case 133:
   return VAR_3;
 case 135:
   return VAR_1;
 case 128:
   return VAR_9;
 default:
   FUNC_5 ();
 }



    case 128:
      FUNC_4 (VAR_16 == VAR_17);
      return VAR_9;

    case 132:
      FUNC_4 (VAR_16 == VAR_17);
      return VAR_6;

    case 136:
      FUNC_4 (VAR_16 == VAR_17);
      return VAR_2;

    case 131:
      FUNC_4 (VAR_16 == VAR_17);
      return VAR_5;

    case 135:
      FUNC_4 (VAR_16 == VAR_17);
      return VAR_1;

    default:
      FUNC_5 ();
    }
}
