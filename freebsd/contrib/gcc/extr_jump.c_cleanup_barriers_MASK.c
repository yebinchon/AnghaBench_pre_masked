
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,scalar_t__,scalar_t__) ;

unsigned int
FUNC_7 (void)
{
  rtx VAR_0, VAR_1, VAR_2;
  for (VAR_0 = FUNC_4 (); VAR_0; VAR_0 = VAR_1)
    {
      VAR_1 = FUNC_1 (VAR_0);
      if (FUNC_0 (VAR_0))
 {
   VAR_2 = FUNC_5 (VAR_0);
   if (FUNC_0 (VAR_2))
     FUNC_3 (VAR_0);
   else if (VAR_2 != FUNC_2 (VAR_0))
     FUNC_6 (VAR_0, VAR_0, VAR_2);
 }
    }
  return 0;
}
