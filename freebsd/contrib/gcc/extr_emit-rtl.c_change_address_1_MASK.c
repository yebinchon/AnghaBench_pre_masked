
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int,scalar_t__) ;
 scalar_t__ FUNC_6 (int,scalar_t__) ;
 scalar_t__ FUNC_7 (int,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;

__attribute__((used)) static rtx
FUNC_9 (rtx VAR_3, enum machine_mode VAR_4, rtx VAR_5, int VAR_6)
{
  rtx VAR_7;

  FUNC_4 (FUNC_2 (VAR_3));
  if (VAR_4 == VAR_0)
    VAR_4 = FUNC_0 (VAR_3);
  if (VAR_5 == 0)
    VAR_5 = FUNC_3 (VAR_3, 0);
  if (VAR_4 == FUNC_0 (VAR_3) && VAR_5 == FUNC_3 (VAR_3, 0)
      && (!VAR_6 || FUNC_7 (VAR_4, VAR_5)))
    return VAR_3;

  if (VAR_6)
    {
      if (VAR_2 || VAR_1)
 FUNC_4 (FUNC_7 (VAR_4, VAR_5));
      else
 VAR_5 = FUNC_6 (VAR_4, VAR_5);
    }

  if (FUNC_8 (VAR_5, FUNC_3 (VAR_3, 0)) && VAR_4 == FUNC_0 (VAR_3))
    return VAR_3;

  VAR_7 = FUNC_5 (VAR_4, VAR_5);
  FUNC_1 (VAR_7, VAR_3);
  return VAR_7;
}
