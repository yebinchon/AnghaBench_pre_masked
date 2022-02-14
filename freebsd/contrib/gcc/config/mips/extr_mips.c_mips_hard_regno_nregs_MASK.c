
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;

unsigned int
FUNC_3 (int VAR_2, enum machine_mode VAR_3)
{
  if (FUNC_2 (VAR_2))
    return ((FUNC_1 (VAR_3) + 3) / 4);
  else if (! FUNC_0 (VAR_2))
    return ((FUNC_1 (VAR_3) + VAR_1 - 1) / VAR_1);
  else
    return ((FUNC_1 (VAR_3) + VAR_0 - 1) / VAR_0);
}
