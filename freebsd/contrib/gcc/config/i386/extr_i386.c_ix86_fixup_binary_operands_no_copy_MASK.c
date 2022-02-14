
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int,scalar_t__*) ;

void
FUNC_2 (enum rtx_code VAR_0,
        enum machine_mode VAR_1, rtx VAR_2[])
{
  rtx VAR_3 = FUNC_1 (VAR_0, VAR_1, VAR_2);
  FUNC_0 (VAR_3 == VAR_2[0]);
}
