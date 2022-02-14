
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int * FUNC_2 (char*,char*) ;
 int * VAR_3 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int FUNC_11 (char*,char*,char*,int *,char*) ;
 int FUNC_12 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_13 (int) ;
 char* VAR_6 ;

__attribute__((used)) static void
FUNC_14 (char *VAR_7, int VAR_8)
{
  int VAR_9;
  char VAR_10[100];

  FUNC_13 (VAR_8);

  VAR_9 = FUNC_11 (VAR_7, " %s %d %s", VAR_2, &VAR_1, VAR_10);

  if (VAR_9 != 2)
    FUNC_0 ("Bad arguments.  Usage: target st2000 <device> <speed>\nor target st2000 <host> <port>\n");


  FUNC_12 (0);

  VAR_4 = FUNC_8 (VAR_2);

  if (!VAR_4)
    FUNC_3 (VAR_2);

  if (FUNC_10 (VAR_4, VAR_1))
    {
      FUNC_7 (VAR_2);
      FUNC_3 (VAR_2);
    }

  FUNC_9 (VAR_4);

  FUNC_6 (&VAR_5);
  FUNC_5 ("\003");

  FUNC_1 (1);

  if (VAR_8)
    FUNC_4 ("Remote %s connected to %s\n", VAR_6,
     VAR_2);
}
