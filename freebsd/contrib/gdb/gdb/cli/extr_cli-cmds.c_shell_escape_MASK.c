
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,char*,...) ;
 int FUNC_4 (int ,char*,char*,int) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (int ) ;
 char* FUNC_8 (char*,char) ;
 int FUNC_9 (char*) ;
 int FUNC_10 () ;
 int FUNC_11 (int*) ;

__attribute__((used)) static void
FUNC_12 (char *VAR_3, int VAR_4)
{
  int VAR_5, VAR_6, VAR_7;

  if ((VAR_7 = FUNC_10 ()) == 0)
    {
      char *VAR_8, *VAR_9;

      if ((VAR_9 = (char *) FUNC_6 ("SHELL")) == ((void*)0))
 VAR_9 = "/bin/sh";


      if ((VAR_8 = FUNC_8 (VAR_9, '/')) == ((void*)0))
 VAR_8 = VAR_9;
      else
 VAR_8++;

      if (!VAR_3)
 FUNC_3 (VAR_9, VAR_8, (char *) 0);
      else
 FUNC_3 (VAR_9, VAR_8, "-c", VAR_3, (char *) 0);

      FUNC_4 (VAR_2, "Cannot execute %s: %s\n", VAR_9,
     FUNC_7 (VAR_1));
      FUNC_5 (VAR_2);
      FUNC_0 (0177);
    }

  if (VAR_7 != -1)
    while ((VAR_5 = FUNC_11 (&VAR_6)) != VAR_7 && VAR_5 != -1)
      ;
  else
    FUNC_2 ("Fork failed");

}
