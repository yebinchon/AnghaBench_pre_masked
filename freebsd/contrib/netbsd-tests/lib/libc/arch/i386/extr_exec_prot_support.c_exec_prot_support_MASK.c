
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pae ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int*,size_t*,int *,int ) ;
 scalar_t__ FUNC_1 (char*) ;

int
FUNC_2(void)
{
 int VAR_2;
 size_t VAR_3 = sizeof(VAR_2);

 if (FUNC_0("machdep.pae", &VAR_2, &VAR_3, ((void*)0), 0) == -1)
  return VAR_0;

 if (VAR_2 == 1) {
  if (FUNC_1("cpuctl identify 0 | grep -q NOX") == 0 ||
      FUNC_1("cpuctl identify 0 | grep -q XD") == 0)
   return VAR_1;
 }

 return VAR_0;
}
