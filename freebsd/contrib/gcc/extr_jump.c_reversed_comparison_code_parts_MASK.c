
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;


 int FUNC_5 (int) ;
 int FUNC_6 (scalar_t__) ;



 scalar_t__ VAR_2 ;


 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (int,int) ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;



 int VAR_6 ;



 int VAR_7 ;
 scalar_t__ FUNC_12 (scalar_t__,int) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int) ;
 scalar_t__ FUNC_16 (int ,scalar_t__) ;
 scalar_t__ FUNC_17 (scalar_t__,scalar_t__) ;

enum rtx_code
FUNC_18 (enum rtx_code VAR_8, rtx VAR_9, rtx VAR_10, rtx VAR_11)
{
  enum machine_mode VAR_12;


  if (FUNC_4 (VAR_8) != VAR_4
      && FUNC_4 (VAR_8) != VAR_3)
    return VAR_6;

  VAR_12 = FUNC_2 (VAR_9);
  if (VAR_12 == VAR_7)
    VAR_12 = FUNC_2 (VAR_10);




  if (FUNC_3 (VAR_12) == VAR_2
      && FUNC_9 (VAR_12))
    {



      return FUNC_14 (VAR_8);
    }


  switch (VAR_8)
    {
    case 140:
    case 139:
    case 138:
    case 136:
    case 135:
    case 141:



      return FUNC_14 (VAR_8);
    case 134:
    case 128:
    case 137:
    case 133:


      return FUNC_15 (VAR_8);
    case 129:
    case 130:
    case 131:
    case 132:

      return VAR_6;
    default:
      break;
    }

  if (FUNC_3 (VAR_12) == VAR_2 || FUNC_0 (VAR_9))
    {
      rtx VAR_13;




      if (! VAR_11)
 return VAR_6;

      for (VAR_13 = FUNC_13 (VAR_11);
    VAR_13 != 0 && !FUNC_6 (VAR_13);
    VAR_13 = FUNC_13 (VAR_13))
 {
   rtx VAR_14 = FUNC_17 (VAR_9, VAR_13);
   if (VAR_14 && FUNC_1 (VAR_14) == VAR_5
       && FUNC_16 (FUNC_10 (VAR_14), VAR_9))
     {
       rtx VAR_15 = FUNC_11 (VAR_14);

       if (FUNC_1 (VAR_15) == VAR_0)
  {
    rtx VAR_16 = VAR_15;
    VAR_9 = FUNC_12 (VAR_15, 0);
    VAR_12 = FUNC_2 (VAR_9);
    if (VAR_12 == VAR_7)
      VAR_12 = FUNC_2 (FUNC_12 (VAR_16, 1));
    break;
  }


       if (FUNC_7 (VAR_15))
  {
    VAR_9 = VAR_15;
    continue;
  }
     }


   if (VAR_14)
     return VAR_6;
 }
    }



  if (FUNC_1 (VAR_9) == VAR_1
      || (FUNC_2 (VAR_9) != VAR_7
   && FUNC_3 (VAR_12) != VAR_2
   && !FUNC_5 (VAR_12)))
    return FUNC_14 (VAR_8);

  return VAR_6;
}
