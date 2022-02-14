
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_5 (scalar_t__,int) ;
 scalar_t__ VAR_16 ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,int) ;
 scalar_t__ FUNC_8 (scalar_t__,int) ;
 scalar_t__ FUNC_9 (int,scalar_t__,int) ;
 scalar_t__ FUNC_10 (int,scalar_t__) ;
 scalar_t__ FUNC_11 (int,scalar_t__,int) ;
 scalar_t__ VAR_17 ;

int
FUNC_12 (enum machine_mode VAR_18, rtx VAR_19, int VAR_20)
{

  if (VAR_8
      && FUNC_0 (VAR_18)
      && FUNC_1 (VAR_19) == VAR_0
      && FUNC_1 (FUNC_5 (VAR_19, 1)) == VAR_1
      && FUNC_2 (FUNC_5 (VAR_19, 1)) == -16)
    VAR_19 = FUNC_5 (VAR_19, 0);

  if (FUNC_3 (VAR_19))
    return 0;
  if (FUNC_8 (VAR_19, VAR_20))
    return 1;
  if ((FUNC_1 (VAR_19) == VAR_6 || FUNC_1 (VAR_19) == VAR_5)
      && !FUNC_0 (VAR_18)
      && !FUNC_4 (VAR_18)
      && VAR_18 != VAR_14

      && !(VAR_9 && (VAR_18 == VAR_2 || VAR_18 == VAR_3))
      && VAR_13
      && FUNC_8 (FUNC_5 (VAR_19, 0), VAR_20))
    return 1;
  if (FUNC_10 (VAR_18, VAR_19))
    return 1;
  if (FUNC_6 (VAR_19))
    return 1;

  if (! VAR_20
      && FUNC_1 (VAR_19) == VAR_4
      && FUNC_1 (FUNC_5 (VAR_19, 0)) == VAR_7
      && (FUNC_5 (VAR_19, 0) == VAR_17
   || FUNC_5 (VAR_19, 0) == VAR_16)
      && FUNC_1 (FUNC_5 (VAR_19, 1)) == VAR_1)
    return 1;
  if (FUNC_11 (VAR_18, VAR_19, VAR_20))
    return 1;
  if (VAR_18 != VAR_15
      && VAR_18 != VAR_14
      && ((VAR_11 && VAR_10)
   || VAR_12
   || ((VAR_18 != VAR_2 || VAR_9) && VAR_18 != VAR_14))
      && (VAR_12 || VAR_18 != VAR_3)
      && FUNC_7 (VAR_19, VAR_20))
    return 1;
  if (FUNC_9 (VAR_18, VAR_19, VAR_20))
    return 1;
  return 0;
}
