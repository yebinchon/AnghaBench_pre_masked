
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_5 (int ,int) ;
 scalar_t__ VAR_14 ;

__attribute__((used)) static bool
FUNC_6 (enum machine_mode VAR_15, rtx VAR_16, int VAR_17)
{
  if (FUNC_1 (VAR_16) != VAR_5)
    return 0;
  if (FUNC_1 (FUNC_5 (VAR_16, 0)) != VAR_6)
    return 0;
  if (!FUNC_4 (FUNC_5 (VAR_16, 0), VAR_17))
    return 0;

  if (VAR_7 && (VAR_15 == VAR_3 || VAR_15 == VAR_4))
    return 0;
  VAR_16 = FUNC_5 (VAR_16, 1);

  if (VAR_8 || VAR_11)
    {
      if (VAR_2 != VAR_0 && VAR_2 != VAR_1 && VAR_14)
 return 0;
      if (VAR_13)
 return 0;
      if (FUNC_3 (VAR_15) != 1)
 return 0;
      if (FUNC_2 (VAR_15) > 64
   || (FUNC_2 (VAR_15) > 32 && !VAR_12
       && !(VAR_10 && VAR_9 && VAR_15 == VAR_3)))
 return 0;

      return FUNC_0 (VAR_16);
    }

  return 0;
}
