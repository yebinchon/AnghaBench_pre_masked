
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_9 (scalar_t__,int ) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 int FUNC_14 (scalar_t__,scalar_t__,scalar_t__,scalar_t__,int (*) (scalar_t__,int)) ;
 scalar_t__ FUNC_15 (scalar_t__) ;
 int FUNC_16 (int ,scalar_t__,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_17 (scalar_t__,scalar_t__) ;

int
FUNC_18 (rtx VAR_8, enum machine_mode VAR_9, rtx VAR_10,
   int (*VAR_11) (rtx, int))
{
  rtx VAR_12, VAR_13;
  rtx VAR_14;

  if (FUNC_7 (VAR_10) && FUNC_7 (VAR_8))
    return 1;



  if (FUNC_3 (VAR_10) == VAR_2 && FUNC_2 (FUNC_9 (VAR_10, 0)) == VAR_5)
    return 1;
  if (FUNC_3 (VAR_8) == VAR_2 && FUNC_2 (FUNC_9 (VAR_8, 0)) == VAR_5)
    return 1;
  if (FUNC_5 (VAR_10) == VAR_0
      || FUNC_5 (VAR_8) == VAR_0)
    return 1;

  if (FUNC_1 (VAR_10, VAR_8))
    return 0;




  if (FUNC_6 (VAR_10))
    return 0;

  if (FUNC_17 (VAR_8, VAR_10))
    return 0;

  if (VAR_9 == VAR_7)
    VAR_9 = FUNC_3 (VAR_8);

  VAR_12 = FUNC_15 (FUNC_9 (VAR_10, 0));
  VAR_13 = FUNC_15 (FUNC_9 (VAR_8, 0));

  VAR_14 = FUNC_13 (VAR_12);
  if (VAR_14 && (FUNC_2 (VAR_14) == VAR_3
        || (FUNC_2 (VAR_14) == VAR_6
     && FUNC_0 (VAR_14))))
    return 0;

  if (! FUNC_11 (VAR_12, VAR_13, FUNC_3 (VAR_10), VAR_9))
    return 0;

  VAR_12 = FUNC_12 (VAR_12);
  VAR_13 = FUNC_12 (VAR_13);

  if (! FUNC_16 (FUNC_4 (VAR_9), VAR_13,
       FUNC_8 (VAR_10), VAR_12, 0))
    return 0;

  if (FUNC_10 (VAR_10))
    return 1;



  if (VAR_9 == VAR_4 || FUNC_2 (VAR_13) == VAR_1)
    return 1;



  if (VAR_9 == VAR_2 || FUNC_3 (VAR_10) == VAR_2)
    return 1;

  return ! FUNC_14 (VAR_8, VAR_10, VAR_13, VAR_12,
           VAR_11);
}
