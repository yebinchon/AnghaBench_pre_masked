
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct impl_files {char* filename; struct impl_files* next; } ;


 struct impl_files* VAR_0 ;
 scalar_t__ FUNC_0 (char const*,char) ;

__attribute__((used)) static int
FUNC_1 (const char* VAR_1)
{

  struct impl_files *VAR_2;
  const char *VAR_3;

  for (VAR_2 = VAR_0; VAR_2; VAR_2 = VAR_2->next)
    {
      const char *VAR_4 = VAR_2->filename;
      VAR_3 = VAR_1;

      if (*VAR_3 != *VAR_4 || *VAR_3 == 0)
 continue;

      while (*VAR_3 == *VAR_4 && *VAR_3 != 0)
 VAR_3++, VAR_4++;


      if (*VAR_3 == *VAR_4)
 return 0;


      if (FUNC_0 (VAR_3, '.') || FUNC_0 (VAR_4, '.'))
 continue;

      if (*VAR_3 == '\0' || VAR_3[-1] != '.' || VAR_4[-1] != '.')
 continue;


      return 0;
    }


  return 1;
}
