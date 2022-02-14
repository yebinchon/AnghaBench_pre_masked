
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char const* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char const* FUNC_2 (char const*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int *,char) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,char const*,scalar_t__) ;
 int FUNC_10 (int *) ;
 int * VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_11 (char*,char*) ;
 scalar_t__ FUNC_12 (char const*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

__attribute__((used)) static void
FUNC_13 (int VAR_19, char **VAR_20)
{
  const char *VAR_21;
  int VAR_22;

  VAR_8 = 0;
  VAR_14 = 0;
  VAR_9 = 0;
  VAR_16 = 0;
  VAR_17 = 0;
  VAR_18 = 0;
  VAR_13 = 0;
  for (VAR_22 = 2; VAR_22 < VAR_19; VAR_22++)
    if (FUNC_11 (VAR_20 [VAR_22], VAR_1) == 0)
      VAR_9 = 1;
    else if (FUNC_11 (VAR_20 [VAR_22], VAR_4) == 0)
      VAR_16 = 1;
    else if (FUNC_11 (VAR_20 [VAR_22], VAR_5) == 0)
      VAR_17 = 1;
    else if (FUNC_11 (VAR_20 [VAR_22], VAR_6) == 0)
      VAR_18 = 1;
    else if (FUNC_11 (VAR_20 [VAR_22], VAR_0) == 0)
      VAR_8 = 1;
    else if (FUNC_11 (VAR_20 [VAR_22], VAR_2) == 0)
      VAR_13 = 1;
    else if (FUNC_11 (VAR_20 [VAR_22], "-split") == 0)
      {
 if (VAR_22 + 1 >= VAR_19)
   FUNC_1 ("-split has no argument.");
 FUNC_1 ("option `-split' has not been implemented yet\n");

      }


  FUNC_10 (&VAR_7);
  FUNC_3 ();
  FUNC_5 ();
  FUNC_4 ();
  VAR_12 = VAR_15;
  VAR_10 = ((void*)0);
  VAR_21 = FUNC_0 (VAR_20[1]);
  FUNC_9 (&VAR_7, VAR_21,
  FUNC_12 (VAR_21) - FUNC_12 (FUNC_2 (VAR_21)));
  FUNC_9 (&VAR_7, VAR_3,
  FUNC_12 (VAR_3) + 1);
  FUNC_6 (&VAR_7, '\0');
  VAR_11 = FUNC_7 (&VAR_7);
  (void) FUNC_8 (&VAR_7);
}
