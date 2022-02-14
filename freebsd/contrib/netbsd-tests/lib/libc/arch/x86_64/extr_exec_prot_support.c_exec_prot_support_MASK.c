
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;

int
FUNC_1(void)
{
 if (FUNC_0("cpuctl identify 0 | grep -q NOX") == 0 ||
     FUNC_0("cpuctl identify 0 | grep -q XD") == 0)
  return VAR_1;

 return VAR_0;
}
