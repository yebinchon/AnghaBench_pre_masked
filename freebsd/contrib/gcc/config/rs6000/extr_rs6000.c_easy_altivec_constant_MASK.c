
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ,unsigned int,unsigned int) ;

bool
FUNC_3 (rtx VAR_1, enum machine_mode VAR_2)
{
  unsigned VAR_3, VAR_4;

  if (VAR_2 == VAR_0)
    VAR_2 = FUNC_0 (VAR_1);
  else if (VAR_2 != FUNC_0 (VAR_1))
    return 0;


  VAR_3 = FUNC_1 (VAR_2) / 4;
  VAR_4 = 1;

  if (FUNC_2 (VAR_1, VAR_3, VAR_4))
    return 1;


  if (VAR_3 == 1)
    VAR_4 <<= 1;
  else
    VAR_3 >>= 1;

  if (FUNC_2 (VAR_1, VAR_3, VAR_4))
    return 1;


  if (VAR_3 == 1)
    VAR_4 <<= 1;
  else
    VAR_3 >>= 1;

  if (FUNC_2 (VAR_1, VAR_3, VAR_4))
    return 1;

  return 0;
}
