
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int HOST_WIDE_INT ;


 int FUNC_0 (int) ;

int
FUNC_1 (enum machine_mode VAR_0, HOST_WIDE_INT VAR_1)
{
  switch (FUNC_0 (VAR_0))
    {
    case 1:
      return VAR_1 >= 0 && VAR_1 < 32;

    case 2:
      return VAR_1 >= 0 && VAR_1 < 64 && (VAR_1 & 1) == 0;

    default:
      return (VAR_1 >= 0
       && (VAR_1 + FUNC_0 (VAR_0)) <= 128
       && (VAR_1 & 3) == 0);
    }
}
