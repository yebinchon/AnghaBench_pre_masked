
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char*) ;

int
FUNC_1(const char *VAR_0)
{
 if ((FUNC_0(VAR_0, "USER") == 0) ||
     (FUNC_0(VAR_0, "DISPLAY") == 0) ||
     (FUNC_0(VAR_0, "PRINTER") == 0) ||
     (FUNC_0(VAR_0, "SYSTEMTYPE") == 0) ||
     (FUNC_0(VAR_0, "JOB") == 0) ||
     (FUNC_0(VAR_0, "ACCT") == 0))
  return(1);
 return(0);
}
