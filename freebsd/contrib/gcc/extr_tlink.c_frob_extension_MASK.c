
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (int *,char const*,int) ;
 int FUNC_1 (int *,char const*,int) ;
 int FUNC_2 (char const*) ;
 char* FUNC_3 (char const*,char) ;
 int VAR_0 ;

__attribute__((used)) static char *
FUNC_4 (const char *VAR_1, const char *VAR_2)
{
  const char *VAR_3 = FUNC_3 (VAR_1, '/');
  if (! VAR_3)
    VAR_3 = VAR_1;
  VAR_3 = FUNC_3 (VAR_3, '.');
  if (! VAR_3)
    VAR_3 = VAR_1 + FUNC_2 (VAR_1);

  FUNC_1 (&VAR_0, VAR_1, VAR_3 - VAR_1);
  return FUNC_0 (&VAR_0, VAR_2, FUNC_2 (VAR_2));
}
