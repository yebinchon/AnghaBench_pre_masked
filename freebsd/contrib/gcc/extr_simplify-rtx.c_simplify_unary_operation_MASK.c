
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int,int,scalar_t__,int) ;
 scalar_t__ FUNC_4 (int,int,scalar_t__) ;

rtx
FUNC_5 (enum rtx_code VAR_1, enum machine_mode VAR_2,
     rtx VAR_3, enum machine_mode VAR_4)
{
  rtx VAR_5, VAR_6;

  if (FUNC_0 (VAR_3) == VAR_0)
    VAR_3 = FUNC_1 (VAR_3, 0);

  VAR_5 = FUNC_2 (VAR_3);

  VAR_6 = FUNC_3 (VAR_1, VAR_2, VAR_5, VAR_4);
  if (VAR_6)
    return VAR_6;

  return FUNC_4 (VAR_1, VAR_2, VAR_3);
}
