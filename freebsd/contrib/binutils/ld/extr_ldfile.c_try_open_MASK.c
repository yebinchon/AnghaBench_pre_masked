
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char*) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int ,char const*) ;
 int FUNC_3 (char*,char*,char const*,char const*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static FILE *
FUNC_4 (const char *VAR_1, const char *VAR_2)
{
  FILE *VAR_3;
  char VAR_4[1000];

  VAR_3 = FUNC_1 (VAR_1, "r");

  if (VAR_0)
    {
      if (VAR_3 == ((void*)0))
 FUNC_2 (FUNC_0("cannot find script file %s\n"), VAR_1);
      else
 FUNC_2 (FUNC_0("opened script file %s\n"), VAR_1);
    }

  if (VAR_3 != ((void*)0))
    return VAR_3;

  if (*VAR_2)
    {
      FUNC_3 (VAR_4, "%s%s", VAR_1, VAR_2);
      VAR_3 = FUNC_1 (VAR_4, "r");

      if (VAR_0)
 {
   if (VAR_3 == ((void*)0))
     FUNC_2 (FUNC_0("cannot find script file %s\n"), VAR_4);
   else
     FUNC_2 (FUNC_0("opened script file %s\n"), VAR_4);
 }
    }

  return VAR_3;
}
