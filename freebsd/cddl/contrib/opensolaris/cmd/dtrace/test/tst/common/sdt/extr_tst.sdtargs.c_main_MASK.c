
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int val ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char*,int *,int *,int*,int) ;

int
FUNC_3(int VAR_0, char **VAR_1)
{
 int VAR_2 = 1;

 while (1) {
  if (FUNC_2("debug.dtracetest.sdttest", ((void*)0), ((void*)0), &VAR_2,
      sizeof(VAR_2)))
   FUNC_0(1, "sysctlbyname");

  FUNC_1(1);
 }

 return (0);
}
