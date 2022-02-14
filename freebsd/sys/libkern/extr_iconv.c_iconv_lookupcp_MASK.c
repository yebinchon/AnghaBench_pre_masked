
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (char*,char const*) ;

int
FUNC_2(char **VAR_1, const char *VAR_2)
{
 if (VAR_1 == ((void*)0)) {
  FUNC_0("warning a NULL list passed\n", "");
  return VAR_0;
 }
 for (; *VAR_1; VAR_1++)
  if (FUNC_1(*VAR_1, VAR_2) == 0)
   return 0;
 return VAR_0;
}
