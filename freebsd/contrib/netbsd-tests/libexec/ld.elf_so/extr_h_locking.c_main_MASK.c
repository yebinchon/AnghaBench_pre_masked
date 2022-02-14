
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;

int
FUNC_4(int VAR_0, char **VAR_1)
{
 if (VAR_0 != 2)
  return 1;
 if (FUNC_0(VAR_1[1], "dl_iterate_phdr") == 0)
  FUNC_1();
 if (FUNC_0(VAR_1[1], "dlopen") == 0)
  FUNC_3();
 if (FUNC_0(VAR_1[1], "dlclose") == 0)
  FUNC_2();
 return 1;
}
