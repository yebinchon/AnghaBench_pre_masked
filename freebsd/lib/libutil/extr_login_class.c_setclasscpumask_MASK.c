
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int maskset ;
typedef int login_cap_t ;
typedef int cpusetid_t ;
typedef int cpuset_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int ,int,int,int *) ;
 int VAR_4 ;
 int FUNC_3 (char const*,int *) ;
 char* FUNC_4 (int *,char*,int *,int *) ;
 scalar_t__ FUNC_5 (char*,char const*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,char const*,...) ;

void
FUNC_8(login_cap_t *VAR_5)
{
 const char *VAR_6;
 cpuset_t VAR_7;
 cpusetid_t VAR_8;

 VAR_6 = FUNC_4(VAR_5, "cpumask", ((void*)0), ((void*)0));
 FUNC_0(&VAR_7);
 if (VAR_6 == ((void*)0))
  return;
 if (FUNC_5("default", VAR_6) == 0)
  return;
 if (!FUNC_3(VAR_6, &VAR_7)) {
  FUNC_7(VAR_3,
      "list2cpuset(%s) invalid mask specification", VAR_6);
  return;
 }

 if (FUNC_1(&VAR_8) != 0) {
  FUNC_7(VAR_2, "cpuset(): %s", FUNC_6(VAR_4));
  return;
 }

 if (FUNC_2(VAR_0, VAR_1, -1,
     sizeof(VAR_7), &VAR_7) != 0)
  FUNC_7(VAR_2, "cpuset_setaffinity(%s): %s", VAR_6,
      FUNC_6(VAR_4));
}
