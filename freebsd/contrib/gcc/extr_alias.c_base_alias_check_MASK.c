
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
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_8 (rtx VAR_7, rtx VAR_8, enum machine_mode VAR_9,
    enum machine_mode VAR_10)
{
  rtx VAR_11 = FUNC_6 (VAR_7);
  rtx VAR_12 = FUNC_6 (VAR_8);




  if (VAR_11 == 0)
    {
      rtx VAR_13;

      if (! VAR_6 || (VAR_13 = FUNC_5 (VAR_7)) == VAR_7)
 return 1;

      VAR_11 = FUNC_6 (VAR_13);
      if (VAR_11 == 0)
 return 1;
    }

  if (VAR_12 == 0)
    {
      rtx VAR_14;
      if (! VAR_6 || (VAR_14 = FUNC_5 (VAR_8)) == VAR_8)
 return 1;

      VAR_12 = FUNC_6 (VAR_14);
      if (VAR_12 == 0)
 return 1;
    }


  if (FUNC_7 (VAR_11, VAR_12))
    return 1;






  if (FUNC_0 (VAR_11) != VAR_0 && FUNC_0 (VAR_12) != VAR_0)
    {
      if (FUNC_0 (VAR_7) == VAR_1 && FUNC_0 (VAR_8) == VAR_1)
 return 1;
      if (FUNC_0 (VAR_7) == VAR_1
   && (FUNC_0 (FUNC_4 (VAR_7, 1)) != VAR_2
       || (int) FUNC_2 (VAR_10) < -FUNC_3 (FUNC_4 (VAR_7, 1))))
 return 1;
      if (FUNC_0 (VAR_8) == VAR_1
   && (FUNC_0 (FUNC_4 (VAR_8, 1)) != VAR_2
       || (int) FUNC_2 (VAR_9) < -FUNC_3 (FUNC_4 (VAR_8, 1))))
 return 1;

      return 0;
    }





  if ((FUNC_0 (VAR_11) == VAR_0 && FUNC_1 (VAR_11) == VAR_3)
      || (FUNC_0 (VAR_12) == VAR_0 && FUNC_1 (VAR_12) == VAR_3))
    return 0;

  if (! VAR_5)
    return 1;

  if (VAR_5 > 1)
    return 0;


  return ! (FUNC_1 (VAR_11) == VAR_4 && FUNC_1 (VAR_12) == VAR_4);
}
