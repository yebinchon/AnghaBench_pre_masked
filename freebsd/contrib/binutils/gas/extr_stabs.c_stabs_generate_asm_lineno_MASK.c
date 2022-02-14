
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char**,unsigned int*) ;
 int FUNC_2 (char*) ;
 char* VAR_3 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (char) ;
 int FUNC_6 (char*,char*,...) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (char*) ;

void
FUNC_10 (void)
{
  static int VAR_7;
  char *VAR_8;
  char *VAR_9;
  unsigned int VAR_10;
  char *VAR_11;
  char VAR_12[30];

  static unsigned int VAR_13 = -1;
  static char *VAR_14 = ((void*)0);






  VAR_8 = VAR_5;

  FUNC_1 (&VAR_9, &VAR_10);


  if (VAR_14 == ((void*)0))
    {

      VAR_14 = FUNC_9 (VAR_9);
      VAR_13 = VAR_10;
    }
  else if (VAR_10 == VAR_13
    && FUNC_7 (VAR_9, VAR_14) == 0)
    {

      return;
    }
  else
    {

      VAR_13 = VAR_10;
      if (FUNC_7 (VAR_9, VAR_14) != 0)
 {
   FUNC_3 (VAR_14);
   VAR_14 = FUNC_9 (VAR_9);
 }
    }



  VAR_6 = 1;

  FUNC_4 (VAR_2, VAR_9);

  FUNC_6 (VAR_12, "%sL%d", VAR_0, VAR_7);
  ++VAR_7;

  if (VAR_4)
    {
      VAR_11 = (char *) FUNC_0 (100 + FUNC_8 (VAR_3));
      FUNC_6 (VAR_11, "%d,0,%d,%s-%s\n", VAR_1, VAR_10,
        VAR_12, VAR_3);
    }
  else
    {
      VAR_11 = (char *) FUNC_0 (100);
      FUNC_6 (VAR_11, "%d,0,%d,%s\n", VAR_1, VAR_10, VAR_12);
    }
  VAR_5 = VAR_11;
  FUNC_5 ('n');
  FUNC_2 (VAR_12);

  VAR_5 = VAR_8;
  VAR_6 = 0;
}
