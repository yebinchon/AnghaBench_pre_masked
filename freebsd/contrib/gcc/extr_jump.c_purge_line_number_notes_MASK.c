
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 () ;

unsigned int
FUNC_7 (void)
{
  rtx VAR_2 = 0;
  rtx VAR_3;





  for (VAR_3 = FUNC_6 (); VAR_3; VAR_3 = FUNC_0 (VAR_3))
    if (FUNC_2 (VAR_3))
      {
 if (FUNC_1 (VAR_3) == VAR_0)


   VAR_2 = VAR_1;
 else if (FUNC_1 (VAR_3) >= 0)
   {

     if (VAR_2



  && FUNC_3 (VAR_3) == FUNC_3 (VAR_2)
  && FUNC_1 (VAR_3) == FUNC_1 (VAR_2)

)
       {
  FUNC_5 (VAR_3);
  continue;
       }

     VAR_2 = VAR_3;
   }
      }
  return 0;
}
