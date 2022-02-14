
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ,int) ;

unsigned int
FUNC_4 (rtx VAR_2, enum machine_mode VAR_3, int VAR_4)
{
  if (VAR_1 == 0)
    return 0;

  return (VAR_4
   ? (FUNC_0 (VAR_3) <= VAR_0
      ? (unsigned int) (FUNC_0 (VAR_3) - 1
          - FUNC_1 (FUNC_2 (VAR_2, VAR_3)))
      : 0)
   : FUNC_3 (VAR_2, VAR_3) - 1);
}
