
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;

__attribute__((used)) static int FUNC_1(char *VAR_0, bool *VAR_1)
{
 if (VAR_0) {
  if (!FUNC_0(VAR_0, "1") || !FUNC_0(VAR_0, "yes") || !FUNC_0(VAR_0, "true"))
   *VAR_1 = 1;
  else if (!FUNC_0(VAR_0, "0") || !FUNC_0(VAR_0, "no") ||
       !FUNC_0(VAR_0, "false"))
   *VAR_1 = 0;
  else
   return 0;
 } else
  *VAR_1 = 1;
 return 1;
}
