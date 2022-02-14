
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int HOST_WIDE_INT ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int,int,scalar_t__,int ,scalar_t__,scalar_t__,int,int) ;
 int FUNC_6 (scalar_t__,int ) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int,scalar_t__,scalar_t__) ;
 int FUNC_9 (int,int,scalar_t__,scalar_t__) ;

int
FUNC_10 (enum rtx_code VAR_7, enum machine_mode VAR_8, rtx VAR_9,
      HOST_WIDE_INT VAR_10, rtx VAR_11, rtx VAR_12, int VAR_13)
{
  rtx VAR_14;

  if (VAR_9 && FUNC_2 (FUNC_3 (VAR_9)) == VAR_0)
    VAR_14 = FUNC_0 (FUNC_3 (VAR_9));
  else
    VAR_14 = VAR_2;

  if (VAR_13 || VAR_7 == VAR_4
      || (FUNC_2 (VAR_11) == VAR_3 && FUNC_2 (VAR_12) == VAR_3
   && FUNC_4 (VAR_11) != FUNC_4 (VAR_12)))
    {
      if (!VAR_5
   && !VAR_14
   && (FUNC_5 (VAR_7, VAR_8, VAR_2, VAR_10, VAR_11, VAR_12,
    1, 0)
       > VAR_6 + (VAR_7 != VAR_4)))
 {
   if (VAR_7 == VAR_4)
     {


       FUNC_6 (VAR_11, FUNC_1 (VAR_10));
       return 1;
     }
   else
     {
       rtx VAR_15 = VAR_13 ? FUNC_7 (VAR_8) : VAR_11;

       FUNC_6 (VAR_15, FUNC_1 (VAR_10));


       if (VAR_7 == VAR_1)
  FUNC_6 (VAR_11, FUNC_8 (VAR_8, VAR_15, VAR_12));
       else
  FUNC_6 (VAR_11,
          FUNC_9 (VAR_7, VAR_8, VAR_12, VAR_15));
       return 2;
     }
 }
    }

  return FUNC_5 (VAR_7, VAR_8, VAR_14, VAR_10, VAR_11, VAR_12, VAR_13,
      1);
}
