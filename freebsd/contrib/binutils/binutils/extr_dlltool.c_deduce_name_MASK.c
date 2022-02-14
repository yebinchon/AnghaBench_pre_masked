
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char*,int) ;
 char* VAR_0 ;
 char* FUNC_1 (char const*) ;

__attribute__((used)) static char *
FUNC_2 (const char *VAR_1)
{
  char *VAR_2;
  char *VAR_3, *VAR_4, *VAR_5;

  VAR_3 = ((void*)0);
  VAR_4 = ((void*)0);
  for (VAR_5 = VAR_0; *VAR_5 != '\0'; ++VAR_5)
    {
      if (*VAR_5 == '-')
 VAR_3 = VAR_5;
      if (



   *VAR_5 == '/')
 {
   VAR_4 = VAR_5;
   VAR_3 = ((void*)0);
 }
    }

  VAR_2 = ((void*)0);

  if (VAR_3 != ((void*)0))
    {


      VAR_2 = FUNC_0 (VAR_1, VAR_0, VAR_3 - VAR_0 + 1);
    }

  if (VAR_4 != ((void*)0) && VAR_2 == ((void*)0))
    {


      VAR_2 = FUNC_0 (VAR_1, VAR_0, VAR_4 - VAR_0 + 1);
    }

  if (VAR_2 == ((void*)0))
    {

      VAR_2 = FUNC_1 (VAR_1);
    }

  return VAR_2;
}
