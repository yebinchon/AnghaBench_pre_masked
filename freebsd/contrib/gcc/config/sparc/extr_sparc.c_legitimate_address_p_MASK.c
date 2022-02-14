
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *) ;
 scalar_t__ VAR_9 ;
 int * FUNC_9 (int *) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int * FUNC_10 (int *,int) ;
 int VAR_18 ;
 int VAR_19 ;
 int * VAR_20 ;
 int FUNC_11 (int *,int ) ;

int
FUNC_12 (enum machine_mode VAR_21, rtx VAR_22, int VAR_23)
{
  rtx VAR_24 = ((void*)0), VAR_25 = ((void*)0), VAR_26 = ((void*)0);

  if (FUNC_4 (VAR_22) || FUNC_1 (VAR_22) == VAR_9)
    VAR_24 = VAR_22;
  else if (FUNC_1 (VAR_22) == VAR_7)
    {
      VAR_24 = FUNC_10 (VAR_22, 0);
      VAR_25 = FUNC_10 (VAR_22, 1);



      if (!FUNC_4 (VAR_24)
   && FUNC_1 (VAR_24) != VAR_9
   && (FUNC_4 (VAR_25)
       || FUNC_1 (VAR_25) == VAR_9
       || (FUNC_1 (VAR_25) == VAR_5 && FUNC_1 (VAR_24) != VAR_5)))
 {
   VAR_24 = FUNC_10 (VAR_22, 1);
   VAR_25 = FUNC_10 (VAR_22, 0);
 }

      if ((VAR_18 == 1
    && VAR_24 == VAR_20
    && !FUNC_4 (VAR_25)
    && FUNC_1 (VAR_25) != VAR_9
    && FUNC_1 (VAR_25) != VAR_5
    && FUNC_1 (VAR_25) != VAR_6
    && ! FUNC_8 (VAR_25)
    && (! FUNC_11 (VAR_25, VAR_17) || VAR_21 == VAR_8)
    && (FUNC_1 (VAR_25) != VAR_0 || FUNC_7 (VAR_25)))
   || ((FUNC_4 (VAR_24)
        || FUNC_1 (VAR_24) == VAR_9)
       && FUNC_5 (VAR_25)))
 {
   VAR_26 = VAR_25;
   VAR_25 = ((void*)0);
 }
      else if ((FUNC_4 (VAR_24) || FUNC_1 (VAR_24) == VAR_9)
        && (FUNC_4 (VAR_25) || FUNC_1 (VAR_25) == VAR_9))
 {






   if (VAR_21 == VAR_15
       && ! (VAR_13 && VAR_11 && VAR_14))
     return 0;





   if (VAR_10 && !VAR_19
       && (VAR_21 == VAR_1 || VAR_21 == VAR_2))
     return 0;
 }
      else if (VAR_16
        && FUNC_1 (VAR_24) == VAR_5
        && VAR_11
        && ! VAR_12
        && FUNC_6 (VAR_25))
 {
   VAR_25 = ((void*)0);
   VAR_26 = FUNC_10 (VAR_24, 1);
   VAR_24 = FUNC_10 (VAR_24, 0);
   if (! FUNC_0 (VAR_26) || FUNC_8 (VAR_24))
     return 0;
 }
    }
  else if (FUNC_1 (VAR_22) == VAR_5)
    {
      VAR_24 = FUNC_10 (VAR_22, 0);
      VAR_26 = FUNC_10 (VAR_22, 1);

      if (! FUNC_0 (VAR_26) || FUNC_8 (VAR_24))
 return 0;



      if (VAR_21 == VAR_15 && VAR_10)
 return 0;
    }
  else if (FUNC_1 (VAR_22) == VAR_0 && FUNC_7 (VAR_22))
    return 1;
  else
    return 0;

  if (FUNC_1 (VAR_24) == VAR_9)
    VAR_24 = FUNC_9 (VAR_24);
  if (!FUNC_4 (VAR_24))
    return 0;

  if (VAR_25)
    {
      if (FUNC_1 (VAR_25) == VAR_9)
 VAR_25 = FUNC_9 (VAR_25);
      if (!FUNC_4 (VAR_25))
 return 0;
    }

  if (VAR_23)
    {
      if (!FUNC_3 (FUNC_2 (VAR_24))
   || (VAR_25 && !FUNC_3 (FUNC_2 (VAR_25))))
 return 0;
    }
  else
    {
      if ((FUNC_2 (VAR_24) >= 32
    && FUNC_2 (VAR_24) != VAR_4
    && FUNC_2 (VAR_24) < VAR_3)
   || (VAR_25
       && (FUNC_2 (VAR_25) >= 32
    && FUNC_2 (VAR_25) != VAR_4
    && FUNC_2 (VAR_25) < VAR_3)))
 return 0;
    }
  return 1;
}
