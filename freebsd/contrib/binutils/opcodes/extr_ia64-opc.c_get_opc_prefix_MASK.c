
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*,int) ;
 char* FUNC_1 (char const*,char) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static void
FUNC_3 (const char **VAR_0, char *VAR_1)
{
  char *VAR_2 = FUNC_1 (*VAR_0, '.');
  if (VAR_2 != ((void*)0))
    {
      FUNC_0 (VAR_1, *VAR_0, VAR_2 - *VAR_0);
      VAR_1[VAR_2 - *VAR_0] = '\0';
      *VAR_0 = VAR_2 + 1;
    }
  else
    {
      int VAR_3 = FUNC_2 (*VAR_0);
      FUNC_0 (VAR_1, *VAR_0, VAR_3);
      VAR_1[VAR_3] = '\0';
      *VAR_0 += VAR_3;
    }
}
