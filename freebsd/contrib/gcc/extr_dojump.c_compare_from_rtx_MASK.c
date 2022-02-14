
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_5 () ;
 int FUNC_6 (scalar_t__,scalar_t__,int,scalar_t__,int,int) ;
 scalar_t__ FUNC_7 (int,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (int,int ,int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;

rtx
FUNC_12 (rtx VAR_7, rtx VAR_8, enum rtx_code VAR_9, int VAR_10,
    enum machine_mode VAR_11, rtx VAR_12)
{
  rtx VAR_13;




  if (FUNC_9 (VAR_7, VAR_8))
    {
      VAR_13 = VAR_7;
      VAR_7 = VAR_8;
      VAR_8 = VAR_13;
      VAR_9 = FUNC_10 (VAR_9);
    }

  FUNC_5 ();

  VAR_9 = VAR_10 ? FUNC_11 (VAR_9) : VAR_9;
  VAR_13 = FUNC_8 (VAR_9, VAR_4, VAR_11, VAR_7, VAR_8);
  if (VAR_13)
    {
      if (FUNC_1 (VAR_13))
 return VAR_13;

      if (FUNC_0 (VAR_13))
 {
   VAR_9 = FUNC_2 (VAR_13);
   VAR_7 = FUNC_4 (VAR_13, 0);
   VAR_8 = FUNC_4 (VAR_13, 1);
   VAR_11 = FUNC_3 (VAR_7);
   VAR_10 = (VAR_9 == VAR_1 || VAR_9 == VAR_3
         || VAR_9 == VAR_0 || VAR_9 == VAR_2);
 }
    }

  FUNC_6 (VAR_7, VAR_8, VAR_9, VAR_12, VAR_11, VAR_10);




  return FUNC_7 (VAR_9, VAR_4, VAR_7, VAR_8);

}
