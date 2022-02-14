
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 char** FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 (char**) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int *) ;
 char* FUNC_7 () ;
 int FUNC_8 () ;
 int * FUNC_9 (int ,int *,int ,char**) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (char*,char*) ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static void
FUNC_16 (char *VAR_5, int VAR_6)
{
  int VAR_7;
  char *VAR_8;
  char **VAR_9;

  if (FUNC_10 ())
    FUNC_5 ("gdbsim_open: args \"%s\"\n", VAR_5 ? VAR_5 : "(null)");







  if (VAR_3 != ((void*)0))
    FUNC_15 (&VAR_4);

  VAR_7 = (7 + 1
  + FUNC_13 (" -E little")
  + FUNC_13 (" --architecture=xxxxxxxxxx")
  + (VAR_5 ? FUNC_13 (VAR_5) : 0)
  + 50) ;
  VAR_8 = (char *) FUNC_0 (VAR_7);
  FUNC_12 (VAR_8, "gdbsim");


  switch (FUNC_8 ())
    {
    case 130:
      FUNC_11 (VAR_8, " -E big");
      break;
    case 129:
      FUNC_11 (VAR_8, " -E little");
      break;
    case 128:
      break;
    }


  if (FUNC_7 () != ((void*)0))
    {
      FUNC_11 (VAR_8, " --architecture=");
      FUNC_11 (VAR_8, FUNC_7 ());
    }

  if (VAR_5)
    {
      FUNC_11 (VAR_8, " ");
      FUNC_11 (VAR_8, VAR_5);
    }
  VAR_9 = FUNC_1 (VAR_8);
  if (VAR_9 == ((void*)0))
    FUNC_2 ("Insufficient memory available to allocate simulator arg list.");
  FUNC_4 (VAR_9);

  FUNC_3 ();
  VAR_3 = FUNC_9 (VAR_0, &VAR_2, VAR_1, VAR_9);

  if (VAR_3 == 0)
    FUNC_2 ("unable to create simulator instance");

  FUNC_6 (&VAR_4);
  FUNC_14 (-1);
  FUNC_5 ("Connected to the simulator.\n");
}
