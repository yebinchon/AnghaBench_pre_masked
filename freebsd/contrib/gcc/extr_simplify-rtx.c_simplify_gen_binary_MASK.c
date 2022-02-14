
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int,int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int,int,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;

rtx
FUNC_4 (enum rtx_code VAR_1, enum machine_mode VAR_2, rtx VAR_3,
       rtx VAR_4)
{
  rtx VAR_5;


  VAR_5 = FUNC_2 (VAR_1, VAR_2, VAR_3, VAR_4);
  if (VAR_5)
    return VAR_5;


  if (FUNC_0 (VAR_1) == VAR_0
      && FUNC_3 (VAR_3, VAR_4))
    VAR_5 = VAR_3, VAR_3 = VAR_4, VAR_4 = VAR_5;

  return FUNC_1 (VAR_1, VAR_2, VAR_3, VAR_4);
}
