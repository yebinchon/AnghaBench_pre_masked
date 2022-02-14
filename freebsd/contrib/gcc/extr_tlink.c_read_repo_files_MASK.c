
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int file ;


 int FUNC_0 (char const*) ;
 int * FUNC_1 (char const*) ;
 int * VAR_0 ;
 char* FUNC_2 (char*,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int * VAR_1 ;

__attribute__((used)) static int
FUNC_5 (char **VAR_2)
{
  char **VAR_3 = VAR_2;

  for (; *VAR_3; VAR_3++)
    {
      const char *VAR_4;
      file *VAR_5;


      if (*VAR_3[0] == '-')
 continue;

      VAR_4 = FUNC_2 (*VAR_3, ".rpo");

      if (! FUNC_0 (VAR_4))
 continue;

      VAR_5 = FUNC_1 (VAR_4);

      FUNC_3 (VAR_5);
    }

  if (VAR_0 != ((void*)0) && ! FUNC_4 ())
    return 0;

  return (VAR_1 != ((void*)0));
}
