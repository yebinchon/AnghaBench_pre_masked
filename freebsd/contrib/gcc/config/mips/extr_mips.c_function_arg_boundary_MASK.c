
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 unsigned int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_1 (scalar_t__) ;

int
FUNC_2 (enum machine_mode VAR_2, tree VAR_3)
{
  unsigned int VAR_4;

  VAR_4 = VAR_3 ? FUNC_1 (VAR_3) : FUNC_0 (VAR_2);
  if (VAR_4 < VAR_0)
    VAR_4 = VAR_0;
  if (VAR_4 > VAR_1)
    VAR_4 = VAR_1;
  return VAR_4;
}
