
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,int ,scalar_t__,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ,int ,int ,int (*) (int ,int)) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_15 (int ,int ) ;

int
FUNC_16 (rtx VAR_5, enum machine_mode VAR_6, rtx VAR_7,
         rtx VAR_8, int (*VAR_9) (rtx, int))
{
  rtx VAR_10;

  if (FUNC_6 (VAR_8) && FUNC_6 (VAR_5))
    return 1;



  if (FUNC_2 (VAR_8) == VAR_2 && FUNC_1 (FUNC_8 (VAR_8, 0)) == VAR_4)
    return 1;
  if (FUNC_2 (VAR_5) == VAR_2 && FUNC_1 (FUNC_8 (VAR_5, 0)) == VAR_4)
    return 1;
  if (FUNC_4 (VAR_8) == VAR_0
      || FUNC_4 (VAR_5) == VAR_0)
    return 1;

  if (FUNC_0 (VAR_8, VAR_5))
    return 0;




  if (FUNC_5 (VAR_8))
    return 0;

  if (FUNC_15 (VAR_8, VAR_5))
    return 0;

  VAR_10 = FUNC_13 (FUNC_8 (VAR_8, 0));

  if (! FUNC_10 (VAR_10, VAR_7, FUNC_2 (VAR_8), VAR_6))
    return 0;

  VAR_10 = FUNC_11 (VAR_10);
  if (! FUNC_14 (FUNC_3 (VAR_6), VAR_7,
       FUNC_7 (VAR_8), VAR_10, 0))
    return 0;

  if (FUNC_9 (VAR_8))
    return 1;



  if (VAR_6 == VAR_3 || FUNC_1 (VAR_7) == VAR_1)
    return 1;



  if (VAR_6 == VAR_2 || FUNC_2 (VAR_8) == VAR_2)
    return 1;

  return ! FUNC_12 (VAR_5, VAR_8, VAR_7, VAR_10,
           VAR_9);
}
