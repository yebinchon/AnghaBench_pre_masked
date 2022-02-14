
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CORE_ADDR ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 char** FUNC_1 (char*) ;
 int FUNC_2 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 () ;
 int VAR_3 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (char**) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*,char*,char*) ;
 int FUNC_9 (int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_10 () ;
 int FUNC_11 (int ,scalar_t__,char**,char**) ;
 scalar_t__ FUNC_12 () ;
 int FUNC_13 (char*,char*) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char*) ;

__attribute__((used)) static void
FUNC_16 (char *VAR_5, char *VAR_6, char **VAR_7)
{
  int VAR_8;
  char *VAR_9, **VAR_10;

  if (VAR_5 == 0 || VAR_1 == 0)
    FUNC_15 ("No executable file specified.");
  if (!VAR_4)
    FUNC_15 ("No program loaded.");

  if (FUNC_12 ())
    FUNC_8 ("gdbsim_create_inferior: exec_file \"%s\", args \"%s\"\n",
       (VAR_5 ? VAR_5 : "(NULL)"),
       VAR_6);

  FUNC_3 ();
  FUNC_10 ();
  FUNC_4 ();

  if (VAR_5 != ((void*)0))
    {
      VAR_8 = FUNC_14 (VAR_5) + 1 + FUNC_14 (VAR_6) + 1 + 10;
      VAR_9 = (char *) FUNC_0 (VAR_8);
      VAR_9[0] = '\0';
      FUNC_13 (VAR_9, VAR_5);
      FUNC_13 (VAR_9, " ");
      FUNC_13 (VAR_9, VAR_6);
      VAR_10 = FUNC_1 (VAR_9);
      FUNC_6 (VAR_10);
    }
  else
    VAR_10 = ((void*)0);
  FUNC_11 (VAR_2, VAR_1, VAR_10, VAR_7);

  VAR_3 = FUNC_7 (42);
  FUNC_5 ();

  FUNC_2 ();


  FUNC_9 ((CORE_ADDR) -1, VAR_0, 0);
}
