
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*,char*,int ) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (char*,int,int *) ;
 char* VAR_3 ;
 int * FUNC_7 (char*,int ) ;
 int FUNC_8 (int *) ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_9 (char*,char) ;
 int FUNC_10 (char*,char*,int) ;
 int FUNC_11 (int,int *) ;
 int FUNC_12 (int ) ;

void
FUNC_13 (char *VAR_6,
   int VAR_7)
{
  int VAR_8;
  char VAR_9[80];

  VAR_4 = VAR_7;

  FUNC_3 (VAR_6 != 0);
  if (VAR_6[0])
    {
      VAR_2 = FUNC_7 (VAR_6, VAR_0);
      VAR_3 = VAR_6;
    }
  else
    {

      VAR_2 = VAR_5;

      VAR_3 = FUNC_1("{standard input}");
    }

  if (VAR_2 == ((void*)0))
    {
      FUNC_2 (FUNC_1("can't open %s for reading: %s"),
       VAR_3, FUNC_12 (VAR_1));
      return;
    }

  VAR_8 = FUNC_8 (VAR_2);

  if (FUNC_5 (VAR_2))
    {
      FUNC_2 (FUNC_1("can't read from %s: %s"),
       VAR_3, FUNC_12 (VAR_1));

      FUNC_4 (VAR_2);
      VAR_2 = ((void*)0);
      return;
    }

  if (VAR_8 == '#')
    {

      VAR_8 = FUNC_8 (VAR_2);
      if (VAR_8 == 'N')
 {
   if (FUNC_6 (VAR_9, sizeof (VAR_9), VAR_2)
       && !FUNC_10 (VAR_9, "O_APP", 5) && FUNC_0 (VAR_9[5]))
     VAR_4 = 0;
   if (!FUNC_9 (VAR_9, '\n'))
     FUNC_11 ('#', VAR_2);
   else
     FUNC_11 ('\n', VAR_2);
 }
      else if (VAR_8 == 'A')
 {
   if (FUNC_6 (VAR_9, sizeof (VAR_9), VAR_2)
       && !FUNC_10 (VAR_9, "PP", 2) && FUNC_0 (VAR_9[2]))
     VAR_4 = 1;
   if (!FUNC_9 (VAR_9, '\n'))
     FUNC_11 ('#', VAR_2);
   else
     FUNC_11 ('\n', VAR_2);
 }
      else if (VAR_8 == '\n')
 FUNC_11 ('\n', VAR_2);
      else
 FUNC_11 ('#', VAR_2);
    }
  else
    FUNC_11 (VAR_8, VAR_2);
}
