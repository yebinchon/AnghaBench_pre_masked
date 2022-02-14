
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int FUNC_0 (int,int,int ,int ) ;
 int FUNC_1 (int,int,int,int ,int ) ;

rtx
FUNC_2 (enum rtx_code VAR_0, enum machine_mode VAR_1,
    enum machine_mode VAR_2, rtx VAR_3, rtx VAR_4)
{
  rtx VAR_5;

  if (0 != (VAR_5 = FUNC_1 (VAR_0, VAR_1, VAR_2,
       VAR_3, VAR_4)))
    return VAR_5;

  return FUNC_0 (VAR_0, VAR_1, VAR_3, VAR_4);
}
