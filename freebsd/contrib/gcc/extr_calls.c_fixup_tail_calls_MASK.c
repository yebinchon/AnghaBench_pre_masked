
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (scalar_t__,scalar_t__) ;

void
FUNC_6 (void)
{
  rtx VAR_2;

  for (VAR_2 = FUNC_4 (); VAR_2; VAR_2 = FUNC_0 (VAR_2))
    {


      if (FUNC_2 (VAR_2)
   && FUNC_1 (VAR_2) == VAR_0)
 break;

      while (1)
 {
   rtx VAR_3 = FUNC_3 (VAR_2, VAR_1, 0);
   if (VAR_3)
     {


       FUNC_5 (VAR_2, VAR_3);
       continue;
     }
   break;
 }
    }
}
