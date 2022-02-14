
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;
 int FUNC_9 (char*) ;
 int VAR_2 ;

int
FUNC_10 (int VAR_3, char *VAR_4[])
{
  FILE *VAR_5;
  int VAR_6;

  if (VAR_3 < 3)
    {
      FUNC_4 (VAR_2, "Usage: gdbreplay <logfile> <host:port>\n");
      FUNC_2 (VAR_2);
      FUNC_0 (1);
    }
  VAR_5 = FUNC_3 (VAR_4[1], "r");
  if (VAR_5 == ((void*)0))
    {
      FUNC_6 (VAR_4[1]);
    }
  FUNC_9 (VAR_4[2]);
  while ((VAR_6 = FUNC_5 (VAR_5)) != VAR_0)
    {
      switch (VAR_6)
 {
 case 'w':

   FUNC_1 (VAR_5);
   break;
 case 'r':

   FUNC_7 (VAR_5);
   break;
 case 'c':

   while ((VAR_6 = FUNC_5 (VAR_5)) != VAR_1);
   break;
 }
    }
  FUNC_8 ();
  FUNC_0 (0);
}
