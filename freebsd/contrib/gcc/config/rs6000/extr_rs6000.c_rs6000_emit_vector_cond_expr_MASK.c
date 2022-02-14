
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int,int ,int ,int) ;
 int FUNC_3 (int ,int ,int ,int ) ;

int
FUNC_4 (rtx VAR_1, rtx VAR_2, rtx VAR_3,
         rtx VAR_4, rtx VAR_5, rtx VAR_6)
{
  enum machine_mode VAR_7 = FUNC_1 (VAR_1);
  enum rtx_code VAR_8 = FUNC_0 (VAR_4);
  rtx VAR_9;

  if (!VAR_0)
    return 0;


  VAR_9 = FUNC_2 (VAR_8, VAR_5, VAR_6, VAR_7);

  FUNC_3 (VAR_1, VAR_2, VAR_3, VAR_9);

  return 1;
}
