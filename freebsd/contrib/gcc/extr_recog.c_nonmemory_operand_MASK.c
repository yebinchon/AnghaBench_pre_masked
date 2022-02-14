
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_11 (int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_12 (int ,int) ;
 int VAR_8 ;
 scalar_t__ FUNC_13 (scalar_t__,int) ;

int
FUNC_14 (rtx VAR_9, enum machine_mode VAR_10)
{
  if (FUNC_0 (VAR_9))
    {


      if (FUNC_2 (VAR_9) == VAR_6 && VAR_10 != VAR_6
   && FUNC_3 (VAR_10) != VAR_2
   && FUNC_3 (VAR_10) != VAR_3)
 return 0;

      if (FUNC_1 (VAR_9) == VAR_0
   && VAR_10 != VAR_6
   && FUNC_13 (FUNC_4 (VAR_9), VAR_10) != FUNC_4 (VAR_9))
 return 0;

      return ((FUNC_2 (VAR_9) == VAR_6 || FUNC_2 (VAR_9) == VAR_10
        || VAR_10 == VAR_6)
       && (! VAR_7 || FUNC_6 (VAR_9))
       && FUNC_5 (VAR_9));
    }

  if (FUNC_2 (VAR_9) != VAR_10 && VAR_10 != VAR_6)
    return 0;

  if (FUNC_1 (VAR_9) == VAR_5)
    {






      if (! VAR_8 && FUNC_7 (FUNC_11 (VAR_9)))
 return FUNC_12 (VAR_9, VAR_10);
      VAR_9 = FUNC_11 (VAR_9);
    }



  return (FUNC_10 (VAR_9)
   && (FUNC_8 (VAR_9) >= VAR_1
       || FUNC_9 (FUNC_8 (VAR_9)) != VAR_4));
}
