
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int ,int) ;
 int VAR_2 ;

int
FUNC_5 (rtx VAR_3, enum machine_mode VAR_4)
{
  rtx VAR_5;

  if (! VAR_2)


    return FUNC_2 (VAR_3) && FUNC_4 (VAR_3, VAR_4);

  if (VAR_4 != VAR_1 && FUNC_1 (VAR_3) != VAR_4)
    return 0;

  VAR_5 = VAR_3;
  if (FUNC_0 (VAR_5) == VAR_0)
    VAR_5 = FUNC_3 (VAR_5);

  return (FUNC_2 (VAR_5) && FUNC_4 (VAR_3, VAR_4));
}
