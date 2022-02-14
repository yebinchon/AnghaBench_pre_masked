
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
struct TYPE_2__ {scalar_t__ (* delegitimize_address ) (scalar_t__) ;} ;
typedef int REAL_VALUE_TYPE ;
typedef scalar_t__ HOST_WIDE_INT ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (int ,int) ;
 scalar_t__ VAR_2 ;

 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_3 ;

 scalar_t__ VAR_4 ;
 int FUNC_6 (int ,scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_7 (scalar_t__,int) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (int,scalar_t__,int,scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 TYPE_1__ VAR_6 ;

rtx
FUNC_12 (rtx VAR_7)
{
  rtx VAR_8, VAR_9, VAR_10;
  enum machine_mode VAR_11;
  HOST_WIDE_INT VAR_12 = 0;

  switch (FUNC_3 (VAR_7))
    {
    case 128:
      break;

    case 129:

      VAR_9 = FUNC_7 (VAR_7, 0);
      VAR_8 = FUNC_12 (VAR_9);
      if (VAR_8 != VAR_9 && FUNC_3 (VAR_8) == VAR_1)
 {
   REAL_VALUE_TYPE VAR_13;

   FUNC_6 (VAR_13, VAR_8);
   return FUNC_2 (VAR_13, FUNC_4 (VAR_7));
 }
      return VAR_7;

    default:
      return VAR_7;
    }

  VAR_10 = FUNC_7 (VAR_7, 0);


  VAR_10 = VAR_6.delegitimize_address (VAR_10);


  if (FUNC_3 (VAR_10) == VAR_0
      && FUNC_3 (FUNC_7 (VAR_10, 0)) == VAR_4
      && FUNC_3 (FUNC_7 (FUNC_7 (VAR_10, 0), 1)) == VAR_2)
    {
      VAR_12 = FUNC_5 (FUNC_7 (FUNC_7 (VAR_10, 0), 1));
      VAR_10 = FUNC_7 (FUNC_7 (VAR_10, 0), 0);
    }

  if (FUNC_3 (VAR_10) == VAR_3)
    VAR_10 = FUNC_7 (VAR_10, 1);



  if (FUNC_3 (VAR_10) == VAR_5
      && FUNC_1 (VAR_10))
    {
      VAR_8 = FUNC_8 (VAR_10);
      VAR_11 = FUNC_9 (VAR_10);




      if (VAR_12 != 0 || VAR_11 != FUNC_4 (VAR_7))
        {
          rtx VAR_14 = FUNC_10 (FUNC_4 (VAR_7), VAR_8, VAR_11, VAR_12);
          if (VAR_14 && FUNC_0 (VAR_14))
            return VAR_14;
        }
      else
        return VAR_8;
    }

  return VAR_7;
}
