
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum ia64_dependency_mode { ____Placeholder_ia64_dependency_mode } ia64_dependency_mode ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,char*,char*,int,int,char*,int) ;
 int FUNC_4 (int ,char const*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (char*,int,int *) ;
 int * FUNC_8 (char const*,char*) ;
 int FUNC_9 (char*) ;
 char* FUNC_10 (char*,char) ;
 scalar_t__ FUNC_11 (char*,char*) ;
 int FUNC_12 (char*) ;
 char* FUNC_13 (char*) ;

__attribute__((used)) static void
FUNC_14 (const char *VAR_2, enum ia64_dependency_mode VAR_3)
{
  FILE *VAR_4 = FUNC_8 (VAR_2, "r");
  char VAR_5[1024];

  if (VAR_4 == ((void*)0))
    FUNC_4 (FUNC_1("can't find %s for reading\n"), VAR_2);

  FUNC_7 (VAR_5, sizeof(VAR_5), VAR_4);
  while (!FUNC_6 (VAR_4))
    {
      char *VAR_6, *VAR_7;
      int VAR_8;
      char *VAR_9;
      char *VAR_10, *VAR_11;

      if (FUNC_7 (VAR_5, sizeof(VAR_5), VAR_4) == ((void*)0))
        break;

      while (FUNC_0 (VAR_5[FUNC_12 (VAR_5) - 1]))
        VAR_5[FUNC_12 (VAR_5) - 1] = '\0';

      VAR_6 = VAR_7 = VAR_5;
      while (*VAR_7 != ';')
        ++VAR_7;
      *VAR_7++ = '\0';

      while (FUNC_0 (*VAR_7))
        ++VAR_7;
      VAR_10 = VAR_7;
      VAR_7 = FUNC_10 (VAR_7, ';');
      if (!VAR_7)
        FUNC_2 ();
      *VAR_7++ = 0;
      while (FUNC_0 (*VAR_7))
        ++VAR_7;
      VAR_11 = VAR_7;
      VAR_7 = FUNC_10 (VAR_7, ';');
      if (!VAR_7)
        FUNC_2 ();
      *VAR_7++ = 0;
      while (FUNC_0 (*VAR_7))
        ++VAR_7;
      VAR_8 = FUNC_9 (VAR_7);
      VAR_9 = VAR_8 == VAR_0 ? FUNC_13 (VAR_7) : ((void*)0);




      if (VAR_3 == VAR_1 && FUNC_11 (VAR_10, VAR_11) != 0)
        {
          FUNC_3 (VAR_6, VAR_11, VAR_10, VAR_8, VAR_3, VAR_9, 0);
          FUNC_3 (VAR_6, VAR_10, VAR_11, VAR_8, VAR_3, VAR_9, 1);
        }
      else
        {
          FUNC_3 (VAR_6, VAR_11, VAR_10, VAR_8, VAR_3, VAR_9, 0);
        }
    }
  FUNC_5 (VAR_4);
}
