
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char*) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;

int
FUNC_2(const char *VAR_0)
{

 if (FUNC_1(VAR_0, "dtrace_", 7) == 0 &&
     FUNC_1(VAR_0, "dtrace_safe_", 12) != 0) {






  return (1);
 }




 if (FUNC_0(VAR_0, "owner_mtx") == 0 ||
     FUNC_0(VAR_0, "owner_rm") == 0 ||
     FUNC_0(VAR_0, "owner_rw") == 0 ||
     FUNC_0(VAR_0, "owner_sx") == 0)
  return (1);






 if (FUNC_1(VAR_0, "fbt_", 4) == 0)
  return (1);


 return (0);
}
