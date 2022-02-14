
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int,int,int ,int ,int ) ;

rtx
FUNC_3 (rtx VAR_3, enum machine_mode VAR_4)
{
  enum rtx_code VAR_5 = FUNC_1 (VAR_3, VAR_0);
  if (VAR_5 == VAR_1)
    return VAR_0;
  else
    return FUNC_2 (VAR_5, VAR_4, VAR_2,
                                    FUNC_0 (VAR_3, 0), FUNC_0 (VAR_3, 1));
}
