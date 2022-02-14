
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,int ,int ) ;
 int VAR_3 ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,long) ;
 int FUNC_6 (int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 () ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static int
FUNC_10 (char *VAR_8,
 long VAR_9,
 int VAR_10)
{
  int VAR_11;
  int VAR_12;
  int VAR_13;
  int VAR_14;

  FUNC_8 (VAR_8, "timeout");

  if (VAR_10)
    {
      VAR_13 = VAR_7 > 0 ? VAR_7 : -1;
    }

  else
    VAR_13 = VAR_6;



  for (VAR_12 = 1; VAR_12 <= 3; VAR_12++)
    {
      do
 {
   VAR_11 = FUNC_6 (VAR_13);

   if (VAR_11 == VAR_2)
     {
       if (VAR_10)
  {
    VAR_1;
    FUNC_9 ();
    FUNC_0 ("Watchdog has expired.  Target detached.\n");
  }
       if (VAR_4)
  FUNC_2 ("Timed out.\n", VAR_3);
       goto retry;
     }
 }
      while (VAR_11 != '$');



      VAR_14 = FUNC_5 (VAR_8, VAR_9);

      if (VAR_14 >= 0)
 {
   if (VAR_4)
     {
       FUNC_1 (VAR_3, "Packet received: ");
       FUNC_3 (VAR_8, 0, VAR_3);
       FUNC_1 (VAR_3, "\n");
     }
   FUNC_7 (VAR_5, "+", 1);
   return 0;
 }


    retry:
      FUNC_7 (VAR_5, "-", 1);
    }



  FUNC_4 ("Ignoring packet error, continuing...\n");
  FUNC_7 (VAR_5, "+", 1);
  return 1;
}
