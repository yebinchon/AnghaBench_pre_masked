
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (int) ;

__attribute__((used)) static const char *
FUNC_4 (const char *VAR_0)
{
  char *VAR_1;
  char *VAR_2;

  if (! VAR_0 || *VAR_0 == 0)
    return "./";
  VAR_2 = FUNC_3 (FUNC_2 (VAR_0) + 2);
  FUNC_1 (VAR_2, VAR_0);
  VAR_1 = VAR_2 + FUNC_2 (VAR_2);
  if (VAR_2[-1] != '/' && VAR_2[-1] != '\\')
    FUNC_1 (VAR_1, "/");
  while ((VAR_1 = FUNC_0 (VAR_2, '\\')) != ((void*)0))
    *VAR_1 = '/';
  return VAR_2;
}
