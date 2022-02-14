
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ,int) ;
 int VAR_5 ;

bool
FUNC_4 (rtx VAR_6, enum machine_mode VAR_7)
{
  if (!VAR_4 || !VAR_5
      || VAR_7 != VAR_3 || FUNC_1 (VAR_6) != VAR_1)
    return 0;
  VAR_6 = FUNC_3 (VAR_6, 0);

  if (FUNC_1 (VAR_6) != VAR_0)
    return 0;
  if (FUNC_1 (FUNC_3 (VAR_6, 0)) != VAR_2)
    return 0;
  if (!FUNC_2 (FUNC_3 (VAR_6, 0), 0))
    return 0;
  VAR_6 = FUNC_3 (VAR_6, 1);

  return FUNC_0 (VAR_6);
}
