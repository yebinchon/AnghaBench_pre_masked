
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,int*) ;
 int VAR_1 ;

__attribute__((used)) static bool
FUNC_1(void)
{
 int VAR_2;

 if ((VAR_1 & VAR_0) == 0)
  return (1);
 VAR_2 = 0;
 FUNC_0("vm.pmap.di_locked", &VAR_2);
 return (VAR_2 != 0);
}
