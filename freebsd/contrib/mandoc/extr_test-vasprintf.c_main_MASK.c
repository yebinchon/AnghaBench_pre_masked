
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char*) ;
 int FUNC_1 (char**,char*,char*) ;

int
FUNC_2(void)
{
 char *VAR_0;

 if (FUNC_1(&VAR_0, "%s.", "Text") != 5)
  return 1;
 if (FUNC_0(VAR_0, "Text."))
  return 2;
 return 0;
}
