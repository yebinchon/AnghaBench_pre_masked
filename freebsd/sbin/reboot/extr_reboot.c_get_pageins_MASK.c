
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int pageins ;


 scalar_t__ FUNC_0 (char*,int *,size_t*,int *,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static u_int
FUNC_2(void)
{
 u_int VAR_0;
 size_t VAR_1;

 VAR_1 = sizeof(VAR_0);
 if (FUNC_0("vm.stats.vm.v_swappgsin", &VAR_0, &VAR_1, ((void*)0), 0)
     != 0) {
  FUNC_1("v_swappgsin");
  return (0);
 }
 return VAR_0;
}
