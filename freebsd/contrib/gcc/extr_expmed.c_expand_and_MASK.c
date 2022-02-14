
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int,int ,scalar_t__,scalar_t__,scalar_t__,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int,scalar_t__,scalar_t__) ;

rtx
FUNC_4 (enum machine_mode VAR_4, rtx VAR_5, rtx VAR_6, rtx VAR_7)
{
  rtx VAR_8 = 0;

  if (FUNC_0 (VAR_5) == VAR_2 && FUNC_0 (VAR_6) == VAR_2)
    VAR_8 = FUNC_3 (VAR_0, VAR_4, VAR_5, VAR_6);
  if (VAR_8 == 0)
    VAR_8 = FUNC_2 (VAR_4, VAR_3, VAR_5, VAR_6, VAR_7, 0, VAR_1);

  if (VAR_7 == 0)
    VAR_7 = VAR_8;
  else if (VAR_8 != VAR_7)
    FUNC_1 (VAR_7, VAR_8);
  return VAR_7;
}
