
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 unsigned int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_5 (unsigned int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (scalar_t__,int) ;
 scalar_t__ VAR_5 ;

int
FUNC_7 (rtx VAR_6, enum machine_mode VAR_7)
{
  unsigned int VAR_8 = FUNC_2 (VAR_7);





  if (!FUNC_4 (VAR_6))
    return 0;

  if (VAR_7 != VAR_4 && FUNC_1 (VAR_6) != VAR_7)
    return 0;

  VAR_6 = FUNC_6 (VAR_6, 0);

  if (VAR_8 == FUNC_2 (VAR_7))
    {
      if (FUNC_0 (VAR_6) != VAR_3)
 return 0;
    }
  else
    {
      if (FUNC_0 (VAR_6) != VAR_2
   || FUNC_0 (FUNC_6 (VAR_6, 1)) != VAR_1
   || FUNC_6 (FUNC_6 (VAR_6, 1), 0) != FUNC_6 (VAR_6, 0)
   || FUNC_0 (FUNC_6 (FUNC_6 (VAR_6, 1), 1)) != VAR_0



   || FUNC_3 (FUNC_6 (FUNC_6 (VAR_6, 1), 1)) != (int) VAR_8

   )
 return 0;
    }

  return FUNC_6 (VAR_6, 0) == VAR_5;
}
