
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int,int,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (int,int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;

rtx
FUNC_6 (enum rtx_code VAR_3, enum machine_mode VAR_4,
      rtx VAR_5, rtx VAR_6)
{
  rtx VAR_7, VAR_8;
  rtx VAR_9;





  FUNC_2 (FUNC_0 (VAR_3) != VAR_2);
  FUNC_2 (FUNC_0 (VAR_3) != VAR_1);


  if (FUNC_0 (VAR_3) == VAR_0
      && FUNC_5 (VAR_5, VAR_6))
    {
      VAR_9 = VAR_5, VAR_5 = VAR_6, VAR_6 = VAR_9;
    }

  VAR_7 = FUNC_1 (VAR_5);
  VAR_8 = FUNC_1 (VAR_6);

  VAR_9 = FUNC_4 (VAR_3, VAR_4, VAR_7, VAR_8);
  if (VAR_9)
    return VAR_9;
  return FUNC_3 (VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
}
