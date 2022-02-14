
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 size_t VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_4 (int ,int ,int *) ;
 int VAR_6 ;
 int FUNC_5 (int ,char*,char*) ;
 int FUNC_6 () ;
 size_t VAR_7 ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char*,char*,...) ;
 int FUNC_9 (int ,char* const*,char*,int *,char**,char**,int) ;
 char* VAR_8 ;
 int FUNC_10 (int,int*,int ) ;
 int VAR_9 ;
 int FUNC_11 (int *,char const*) ;
 int VAR_10 ;
 char* FUNC_12 (int) ;

__attribute__((used)) static int
FUNC_13 (const char *VAR_11)
{
  if (!VAR_7)
    FUNC_7 ("");


  VAR_5[VAR_7] = FUNC_11 (((void*)0), VAR_11);

  VAR_5[VAR_3] =
    FUNC_4 (VAR_5[VAR_7], VAR_4, ((void*)0));

  if (!VAR_9)
    FUNC_8 ("%s: compiling '%s'\n",
     VAR_8, VAR_5[VAR_7]);

  {
    char *VAR_12, *VAR_13;
    int VAR_14, VAR_15;

    VAR_15 = FUNC_9 (VAR_5[0], (char * const *) VAR_5,
      VAR_8, ((void*)0), &VAR_12, &VAR_13,
      VAR_0 | VAR_1 | VAR_2);

    if (VAR_15 == -1)
      {
 int VAR_16 = VAR_6;
 FUNC_5 (VAR_10, "%s: ", VAR_8);
 FUNC_5 (VAR_10, VAR_12, VAR_13);
 FUNC_5 (VAR_10, ": %s\n", FUNC_12 (VAR_16));
 return 0;
      }

    VAR_15 = FUNC_10 (VAR_15, &VAR_14, 0);
    if (VAR_15 == -1)
      {
 FUNC_8 ("%s: wait: %s\n", VAR_8, FUNC_12 (VAR_6));
 return 0;
      }
    if (FUNC_2 (VAR_14))
      {
 FUNC_8 ("%s: subprocess got fatal signal %d\n",
  VAR_8, FUNC_3 (VAR_14));
 return 0;
      }
    if (FUNC_1 (VAR_14))
      {
 if (FUNC_0 (VAR_14) != 0)
   {
     FUNC_8 ("%s: %s exited with status %d\n",
      VAR_8, VAR_5[0], FUNC_0 (VAR_14));
     return 0;
   }
 return 1;
      }
    FUNC_6 ();
  }
}
