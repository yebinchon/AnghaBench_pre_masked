
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ offsetT ;


 scalar_t__ FUNC_0 (char) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,...) ;
 int FUNC_4 () ;
 scalar_t__ VAR_1 ;
 char* FUNC_5 (int) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (int,char*) ;
 int FUNC_8 () ;
 char* VAR_2 ;
 int FUNC_9 (int) ;
 char* FUNC_10 (int,char*,int*) ;
 int FUNC_11 (char*,char*,unsigned int) ;
 int FUNC_12 (char*,char) ;
 char* FUNC_13 (char*) ;

void
FUNC_14 (int VAR_3)
{
  offsetT VAR_4;
  int VAR_5;
  char VAR_6[VAR_0];
  char *VAR_7 = ((void*)0);
  char VAR_8 = 0;

  if (VAR_1)
    VAR_7 = FUNC_13 (&VAR_8);

  VAR_4 = FUNC_6 ();

  FUNC_1 ();
  if (*VAR_2 != ',')
    {
      FUNC_3 (FUNC_2("missing value"));
      FUNC_8 ();
      if (VAR_1)
 FUNC_12 (VAR_7, VAR_8);
      return;
    }

  ++VAR_2;

  FUNC_1 ();



  if (VAR_2[0] == '0'
      && FUNC_0 (VAR_2[1]))
    VAR_2 += 2;



  if (VAR_2[0] == ':')
    {
      VAR_5 = FUNC_7 (VAR_3, VAR_6);
      if (VAR_5 < 0)
 {
   FUNC_8 ();
   if (VAR_1)
     FUNC_12 (VAR_7, VAR_8);
   return;
 }
    }
  else
    {
      char *VAR_9;

      VAR_9 = FUNC_10 (VAR_3, VAR_6, &VAR_5);
      FUNC_9 (VAR_5 <= VAR_0);
      FUNC_9 (VAR_5 > 0);
      if (VAR_9)
 {
   FUNC_3 (FUNC_2("bad floating literal: %s"), VAR_9);
   FUNC_8 ();
   if (VAR_1)
     FUNC_12 (VAR_7, VAR_8);
   return;
 }
    }

  while (--VAR_4 >= 0)
    {
      char *VAR_10;

      VAR_10 = FUNC_5 (VAR_5);
      FUNC_11 (VAR_10, VAR_6, (unsigned int) VAR_5);
    }

  FUNC_4 ();

  if (VAR_1)
    FUNC_12 (VAR_7, VAR_8);
}
