
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (int,scalar_t__,unsigned int) ;
 scalar_t__ FUNC_3 (int,scalar_t__,int,unsigned int) ;
 scalar_t__ FUNC_4 (int,int,scalar_t__,unsigned int) ;

rtx
FUNC_5 (enum machine_mode VAR_4, rtx VAR_5,
       enum machine_mode VAR_6, unsigned int VAR_7)
{
  rtx VAR_8;

  VAR_8 = FUNC_3 (VAR_4, VAR_5, VAR_6, VAR_7);
  if (VAR_8)
    return VAR_8;

  if (FUNC_0 (VAR_5) == VAR_2
      || FUNC_0 (VAR_5) == VAR_0
      || FUNC_1 (VAR_5) == VAR_3)
    return VAR_1;

  if (FUNC_4 (VAR_4, VAR_6, VAR_5, VAR_7))
    return FUNC_2 (VAR_4, VAR_5, VAR_7);

  return VAR_1;
}
