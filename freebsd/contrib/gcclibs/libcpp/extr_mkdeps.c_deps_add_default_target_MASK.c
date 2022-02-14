
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct deps {scalar_t__ ntargets; } ;


 char const* VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct deps*,char*,int) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char const*) ;
 char* FUNC_5 (char*,char) ;

void
FUNC_6 (struct deps *VAR_1, const char *VAR_2)
{

  if (VAR_1->ntargets)
    return;

  if (VAR_2[0] == '\0')
    FUNC_1 (VAR_1, "-", 1);
  else
    {



      const char *VAR_3 = FUNC_2 (VAR_2);
      char *VAR_4 = (char *) FUNC_0 (FUNC_4 (VAR_3)
                                 + FUNC_4 (".o") + 1);
      char *VAR_5;

      FUNC_3 (VAR_4, VAR_3);

      VAR_5 = FUNC_5 (VAR_4, '.');
      if (!VAR_5)
        VAR_5 = VAR_4 + FUNC_4 (VAR_4);
      FUNC_3 (VAR_5, ".o");

      FUNC_1 (VAR_1, VAR_4, 1);
    }
}
