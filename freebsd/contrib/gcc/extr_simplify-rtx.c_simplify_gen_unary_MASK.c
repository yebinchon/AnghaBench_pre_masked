
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int FUNC_0 (int,int,int ) ;
 int FUNC_1 (int,int,int ,int) ;

rtx
FUNC_2 (enum rtx_code VAR_0, enum machine_mode VAR_1, rtx VAR_2,
      enum machine_mode VAR_3)
{
  rtx VAR_4;


  if ((VAR_4 = FUNC_1 (VAR_0, VAR_1, VAR_2, VAR_3)) != 0)
    return VAR_4;

  return FUNC_0 (VAR_0, VAR_1, VAR_2);
}
