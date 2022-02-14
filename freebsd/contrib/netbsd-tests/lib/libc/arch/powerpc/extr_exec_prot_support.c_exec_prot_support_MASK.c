
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int execprot ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,int*,size_t*,int *,int ) ;

int
FUNC_1(void)
{
 int VAR_3 = 0;
 size_t VAR_4 = sizeof(VAR_3);

 if (FUNC_0("machdep.execprot", &VAR_3, &VAR_4, ((void*)0), 0) < 0)
  return VAR_0;

 if (VAR_3)
  return VAR_2;

 return VAR_1;
}
