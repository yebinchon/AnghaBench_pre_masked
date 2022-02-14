
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef int REAL_VALUE_TYPE ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_6 () ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_7 (int *,int *) ;
 int VAR_6 ;

int
FUNC_8 (rtx VAR_7)
{
  if (FUNC_3 (VAR_7) != VAR_0 || !FUNC_2 (FUNC_4 (VAR_7)))
    return -1;

  if (VAR_7 == FUNC_0 (FUNC_4 (VAR_7)))
    return 1;
  if (VAR_7 == FUNC_1 (FUNC_4 (VAR_7)))
    return 2;



  if (FUNC_4 (VAR_7) == VAR_2
      && (VAR_5 || VAR_6 & VAR_1))
    {
      REAL_VALUE_TYPE VAR_8;
      int VAR_9;

      if (! VAR_3)
 FUNC_6 ();

      FUNC_5 (VAR_8, VAR_7);
      for (VAR_9 = 0; VAR_9 < 5; VAR_9++)
        if (FUNC_7 (&VAR_8, &VAR_4[VAR_9]))
   return VAR_9 + 3;
    }

  return 0;
}
