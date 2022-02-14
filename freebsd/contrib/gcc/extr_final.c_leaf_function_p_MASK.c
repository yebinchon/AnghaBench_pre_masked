
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,int) ;
 scalar_t__ FUNC_7 (int ,int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_8 () ;
 scalar_t__ VAR_3 ;

int
FUNC_9 (void)
{
  rtx VAR_4;
  rtx VAR_5;

  if (VAR_2 || VAR_3)
    return 0;

  for (VAR_4 = FUNC_8 (); VAR_4; VAR_4 = FUNC_2 (VAR_4))
    {
      if (FUNC_0 (VAR_4)
   && ! FUNC_5 (VAR_4))
 return 0;
      if (FUNC_3 (VAR_4)
   && FUNC_1 (FUNC_4 (VAR_4)) == VAR_0
   && FUNC_0 (FUNC_7 (FUNC_4 (VAR_4), 0, 0))
   && ! FUNC_5 (FUNC_7 (FUNC_4 (VAR_4), 0, 0)))
 return 0;
    }
  for (VAR_5 = VAR_1;
       VAR_5;
       VAR_5 = FUNC_6 (VAR_5, 1))
    {
      VAR_4 = FUNC_6 (VAR_5, 0);

      if (FUNC_0 (VAR_4)
   && ! FUNC_5 (VAR_4))
 return 0;
      if (FUNC_3 (VAR_4)
   && FUNC_1 (FUNC_4 (VAR_4)) == VAR_0
   && FUNC_0 (FUNC_7 (FUNC_4 (VAR_4), 0, 0))
   && ! FUNC_5 (FUNC_7 (FUNC_4 (VAR_4), 0, 0)))
 return 0;
    }

  return 1;
}
