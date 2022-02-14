
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 () ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,scalar_t__) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;

void
FUNC_7 (int VAR_9)
{
  int VAR_10 = VAR_9;
  int VAR_11;





  FUNC_0 ();

  FUNC_1 ();

  VAR_11 = 0;

  if (VAR_1)
    VAR_6 = VAR_9;
  else
    VAR_6 = 0;
  VAR_5 =
    FUNC_3 () - 1;

  while (1)
    {

      VAR_8 = VAR_2;
      FUNC_6 ();
      if (VAR_7 != VAR_4)
 {


   FUNC_2 (0, VAR_7);
 }
      else
 {

   if (!VAR_11)
     {






       FUNC_5 ();


       FUNC_4 ();

       VAR_11 = 1;
     }

   VAR_10 = VAR_10 - 1;
   if (0 == VAR_10)
     break;

   FUNC_2 (0, VAR_3);
 }
    }
  VAR_8 = VAR_0;
}
