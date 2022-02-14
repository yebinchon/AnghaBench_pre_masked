
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_7 (scalar_t__,int) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (scalar_t__,int,int) ;
 scalar_t__ FUNC_13 (scalar_t__,int) ;
 scalar_t__ FUNC_14 (int,int) ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;

int
FUNC_15 (enum machine_mode VAR_19, rtx VAR_20, int VAR_21)
{

  if (FUNC_4 (VAR_19) < 4
      && !(VAR_14 || VAR_13)
      && (FUNC_10 (VAR_12, VAR_20)
   || FUNC_10 (VAR_10, VAR_20)
   || FUNC_10 (VAR_15, VAR_20)
   || FUNC_10 (VAR_16, VAR_20)
   || FUNC_10 (VAR_17, VAR_20)
   || FUNC_10 (VAR_18, VAR_20)))
    return 0;


  else if (FUNC_12 (VAR_20, VAR_19, VAR_21))
    return 1;


  else if (FUNC_4 (VAR_19) >= 4 && FUNC_0 (VAR_20)
    && FUNC_2 (VAR_20) == VAR_9
           && FUNC_1 (VAR_20) && !VAR_11)
    return 1;


  else if (FUNC_4 (VAR_19) >= 4 && VAR_13
    && (FUNC_2 (VAR_20) == VAR_3
        || (FUNC_2 (VAR_20) == VAR_0
     && FUNC_2 (FUNC_7 (VAR_20, 0)) == VAR_5
     && FUNC_2 (FUNC_7 (FUNC_7 (VAR_20, 0), 0)) == VAR_3
     && FUNC_2 (FUNC_7 (FUNC_7 (VAR_20, 0), 1)) == VAR_1)))
    return 1;


  else if (FUNC_2 (VAR_20) == VAR_6 && FUNC_4 (VAR_19) >= 4
    && FUNC_13 (FUNC_7 (VAR_20, 0), VAR_21))
    return 1;

  else if (FUNC_2 (VAR_20) == VAR_5)
    {




      if (FUNC_4 (VAR_19) <= 4
   && FUNC_7 (VAR_20, 0) != VAR_12
   && FUNC_7 (VAR_20, 1) != VAR_12
   && FUNC_13 (FUNC_7 (VAR_20, 0), VAR_21)
   && FUNC_13 (FUNC_7 (VAR_20, 1), VAR_21))
 return 1;


      else if ((FUNC_13 (FUNC_7 (VAR_20, 0), VAR_21)
  || FUNC_7 (VAR_20, 0) == VAR_10)
        && FUNC_2 (FUNC_7 (VAR_20, 1)) == VAR_1
        && FUNC_14 (VAR_19, FUNC_5 (FUNC_7 (VAR_20, 1))))
 return 1;





      else if (FUNC_2 (FUNC_7 (VAR_20, 0)) == VAR_7
        && FUNC_6 (FUNC_7 (VAR_20, 0)) == VAR_8
        && FUNC_4 (VAR_19) >= 4
        && FUNC_2 (FUNC_7 (VAR_20, 1)) == VAR_1
        && FUNC_5 (FUNC_7 (VAR_20, 1)) >= 0
        && FUNC_5 (FUNC_7 (VAR_20, 1)) + FUNC_4 (VAR_19) <= 1024
        && (FUNC_5 (FUNC_7 (VAR_20, 1)) & 3) == 0)
 return 1;

      else if (FUNC_2 (FUNC_7 (VAR_20, 0)) == VAR_7
        && FUNC_6 (FUNC_7 (VAR_20, 0)) == VAR_2
        && FUNC_4 (VAR_19) >= 4
        && FUNC_2 (FUNC_7 (VAR_20, 1)) == VAR_1
        && (FUNC_5 (FUNC_7 (VAR_20, 1)) & 3) == 0)
 return 1;
    }

  else if (FUNC_3 (VAR_19) != VAR_4
    && FUNC_4 (VAR_19) == 4
    && FUNC_2 (VAR_20) == VAR_9
    && FUNC_1 (VAR_20)
    && ! (VAR_11
   && FUNC_11 (FUNC_8 (VAR_20))
   && ! FUNC_9 (FUNC_8 (VAR_20))))
    return 1;

  return 0;
}
