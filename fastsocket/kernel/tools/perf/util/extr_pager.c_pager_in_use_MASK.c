
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,char const*) ;
 scalar_t__ VAR_0 ;

int FUNC_2(void)
{
 const char *VAR_1;

 if (VAR_0)
  return 1;

 VAR_1 = FUNC_0("PERF_PAGER_IN_USE");
 return VAR_1 ? FUNC_1("PERF_PAGER_IN_USE", VAR_1) : 0;
}
