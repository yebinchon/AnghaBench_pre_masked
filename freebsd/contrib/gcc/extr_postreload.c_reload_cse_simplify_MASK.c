
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;
 scalar_t__ FUNC_6 (scalar_t__,int ,int) ;
 int FUNC_7 (scalar_t__,int ) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_15 (rtx VAR_4, rtx VAR_5)
{
  rtx VAR_6 = FUNC_1 (VAR_4);

  if (FUNC_0 (VAR_6) == VAR_3)
    {
      int VAR_7 = 0;






      VAR_7 += FUNC_14 (VAR_6, VAR_4);

      if (!VAR_7 && FUNC_12 (VAR_6))
 {
   rtx VAR_8 = FUNC_4 (VAR_6);
   if (FUNC_3 (VAR_8)
       && ! FUNC_2 (VAR_8))
     VAR_8 = 0;
   FUNC_11 (VAR_4);
   return;
 }

      if (VAR_7 > 0)
 FUNC_8 ();
      else
 FUNC_13 (VAR_4, VAR_5);
    }
  else if (FUNC_0 (VAR_6) == VAR_2)
    {
      int VAR_9;
      int VAR_10 = 0;
      rtx VAR_11 = VAR_1;




      if (FUNC_9 (VAR_6) >= 0)
 {
   for (VAR_9 = FUNC_7 (VAR_6, 0) - 1; VAR_9 >= 0; --VAR_9)
     {
       rtx VAR_12 = FUNC_6 (VAR_6, 0, VAR_9);
       if (FUNC_0 (VAR_12) == VAR_0 && FUNC_3 (FUNC_5 (VAR_12, 0)))
  FUNC_10 (FUNC_5 (VAR_12, 0));
     }
 }



      for (VAR_9 = FUNC_7 (VAR_6, 0) - 1; VAR_9 >= 0; --VAR_9)
 {
   rtx VAR_13 = FUNC_6 (VAR_6, 0, VAR_9);
   if (FUNC_0 (VAR_13) == VAR_3)
     {
       if (! FUNC_12 (VAR_13))
  break;
       if (FUNC_3 (FUNC_4 (VAR_13))
    && FUNC_2 (FUNC_4 (VAR_13)))
  {
    if (VAR_11)
      break;
    VAR_11 = FUNC_4 (VAR_13);
  }
     }
   else if (FUNC_0 (VAR_13) != VAR_0)
     break;
 }

      if (VAR_9 < 0)
 {
   FUNC_11 (VAR_4);

   return;
 }


      for (VAR_9 = FUNC_7 (VAR_6, 0) - 1; VAR_9 >= 0; --VAR_9)
 if (FUNC_0 (FUNC_6 (VAR_6, 0, VAR_9)) == VAR_3)
   VAR_10 += FUNC_14 (FUNC_6 (VAR_6, 0, VAR_9), VAR_4);

      if (VAR_10 > 0)
 FUNC_8 ();
      else
 FUNC_13 (VAR_4, VAR_5);
    }
}
