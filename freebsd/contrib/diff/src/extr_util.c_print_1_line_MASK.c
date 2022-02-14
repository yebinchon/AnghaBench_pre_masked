
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 char* FUNC_0 (char*) ;
 int FUNC_1 (int *,char const*,char const*) ;
 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int FUNC_2 (char const*,char const*,char const*,char const*) ;

void
FUNC_3 (char const *VAR_2, char const *const *VAR_3)
{
  char const *VAR_4 = VAR_3[0], *VAR_5 = VAR_3[1];
  FILE *VAR_6 = VAR_1;
  char const *VAR_7 = 0;





  if (VAR_2 && *VAR_2)
    {
      VAR_7 = VAR_0 ? "%s\t" : "%s ";
      FUNC_1 (VAR_6, VAR_7, VAR_2);
    }

  FUNC_2 (VAR_4, VAR_5, VAR_7, VAR_2);

  if ((!VAR_2 || VAR_2[0]) && VAR_5[-1] != '\n')
    FUNC_1 (VAR_6, "\n\\ %s\n", FUNC_0("No newline at end of file"));
}
