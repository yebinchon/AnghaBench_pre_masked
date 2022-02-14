
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (char*,char const*) ;

__attribute__((used)) static char *
FUNC_3(char **VAR_0, const char *VAR_1)
{
 char *VAR_2, *VAR_3;
 FUNC_0(FUNC_1(VAR_1) == 1);
 if (!VAR_0 || !*VAR_0)
  return ((void*)0);
 VAR_3 = *VAR_0;
 VAR_2 = FUNC_2(VAR_3, VAR_1);
 if (VAR_2) {
  *VAR_2 = '\0';
  *VAR_0 = VAR_2 + 1;
 } else
  *VAR_0 = ((void*)0);
 return VAR_3;
}
