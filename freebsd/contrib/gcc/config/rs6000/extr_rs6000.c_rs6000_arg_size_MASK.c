
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 unsigned long FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 unsigned long FUNC_1 (int ) ;

__attribute__((used)) static unsigned long
FUNC_2 (enum machine_mode VAR_2, tree VAR_3)
{
  unsigned long VAR_4;

  if (VAR_2 != VAR_0)
    VAR_4 = FUNC_0 (VAR_2);
  else
    VAR_4 = FUNC_1 (VAR_3);

  if (VAR_1)
    return (VAR_4 + 3) >> 2;
  else
    return (VAR_4 + 7) >> 3;
}
