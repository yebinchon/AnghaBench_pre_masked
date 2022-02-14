
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (scalar_t__,int,scalar_t__,scalar_t__,int,scalar_t__,scalar_t__,int,int ) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

void
FUNC_4 (rtx VAR_5, enum rtx_code VAR_6, rtx VAR_7, rtx VAR_8)
{
  enum machine_mode VAR_9 = FUNC_0 (VAR_7);
  enum rtx_code VAR_10;
  rtx VAR_11;

  if (VAR_6 == VAR_2 || VAR_6 == VAR_3)
    VAR_10 = VAR_0;
  else
    VAR_10 = VAR_1;

  if (VAR_6 == VAR_2 || VAR_6 == VAR_4)
    VAR_11 = FUNC_1 (VAR_5, VAR_10, VAR_7, VAR_8, VAR_9,
        VAR_7, VAR_8, VAR_9, 0);
  else
    VAR_11 = FUNC_1 (VAR_5, VAR_10, VAR_7, VAR_8, VAR_9,
        VAR_8, VAR_7, VAR_9, 0);
  FUNC_3 (VAR_11);
  if (VAR_11 != VAR_5)
    FUNC_2 (VAR_5, VAR_11);
}
