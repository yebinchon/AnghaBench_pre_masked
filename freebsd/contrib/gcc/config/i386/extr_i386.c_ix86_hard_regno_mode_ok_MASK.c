
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;

bool
FUNC_11 (int VAR_8, enum machine_mode VAR_9)
{

  if (FUNC_0 (VAR_8))
    return FUNC_2 (VAR_9) == VAR_0;
  if (FUNC_2 (VAR_9) == VAR_0
      || FUNC_2 (VAR_9) == VAR_2
      || FUNC_2 (VAR_9) == VAR_1)
    return 0;
  if (FUNC_1 (VAR_8))
    return FUNC_5 (VAR_9);
  if (FUNC_4 (VAR_8))
    {



      return (FUNC_10 (VAR_9)
       || FUNC_9 (VAR_9)
       || FUNC_7 (VAR_9)
       || FUNC_8 (VAR_9));
    }
  if (FUNC_3 (VAR_8))
    {



      return (FUNC_7 (VAR_9)
       || FUNC_8 (VAR_9));
    }

  if (VAR_9 == VAR_3)
    {


      if (VAR_8 < 4 || VAR_4)
 return 1;
      if (!VAR_5)
 return 1;
      return VAR_7 || VAR_6;
    }

  else if (FUNC_6 (VAR_9))
    return 1;
  else if (FUNC_5 (VAR_9))
    return 1;




  else if (FUNC_8 (VAR_9) || FUNC_7 (VAR_9))
    return 1;

  return 0;
}
