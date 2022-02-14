
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (scalar_t__) ;
 int VAR_8 ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (int ,char*) ;

int
FUNC_9 (int VAR_9, rtx VAR_10)
{
  rtx VAR_11;


  if (VAR_9 != 0)
    return 0;


  if (FUNC_0 (VAR_10) != VAR_4)
    return 0;



  if (FUNC_4 (VAR_10) == (unsigned) VAR_1)
    return 0;



  if ((VAR_7 || !VAR_8)
      && FUNC_4 (VAR_10) == VAR_6)
    return 0;
  for (VAR_11 = FUNC_7 (); VAR_11; VAR_11 = FUNC_2 (VAR_11))
    {
      if ( FUNC_0 (VAR_11) == VAR_2
   && FUNC_0 (FUNC_3 (VAR_11)) == VAR_5
   && FUNC_4 (FUNC_5 (FUNC_3 (VAR_11), 0)) == FUNC_4 (VAR_10)
   && FUNC_0 (FUNC_5 (FUNC_3 (VAR_11), 1)) == VAR_3
   && FUNC_0 (FUNC_5 (FUNC_5 (FUNC_3 (VAR_11), 1), 0)) == VAR_4
   && FUNC_4 (FUNC_5 (FUNC_5 (FUNC_3 (VAR_11), 1), 0)) == (unsigned) VAR_1
   && FUNC_0 (FUNC_5 (FUNC_5 (FUNC_3 (VAR_11), 1), 1)) == VAR_0
      )
 {
   VAR_9 = FUNC_1 (FUNC_5 (FUNC_5 (FUNC_3 (VAR_11), 1), 1));

   break;
 }
    }

  if (VAR_9 == 0)
    {
      FUNC_6 (VAR_10);
      FUNC_8 (0, "unable to compute real location of stacked parameter");
      VAR_9 = 8;
    }

  return VAR_9;
}
