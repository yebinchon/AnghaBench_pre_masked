
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char**) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 char* FUNC_7 (char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_8 (char *VAR_1, int VAR_2)
{
  char **VAR_3;
  char *VAR_4;

  FUNC_6 (VAR_2);

  if (VAR_1)
    {



      VAR_3 = FUNC_0 (VAR_1);
      if (VAR_3 == ((void*)0))
        FUNC_5 (0);

      FUNC_4 (VAR_3);

      for (; (*VAR_3 != ((void*)0)) && (**VAR_3 == '-'); VAR_3++)
        {;
        }
      if (*VAR_3 == ((void*)0))
        FUNC_1 ("No executable file name was specified");

      VAR_4 = FUNC_7 (*VAR_3);
      FUNC_3 (VAR_0, VAR_4);
      FUNC_2 (VAR_4, VAR_2);
    }
  else
    FUNC_2 (((void*)0), VAR_2);
}
