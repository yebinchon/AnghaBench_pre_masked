
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zoneid_t ;
typedef int jailid ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,int*,size_t*,int *,int ) ;

zoneid_t
FUNC_2(void)
{
 size_t VAR_0;
 int VAR_1;


 VAR_0 = sizeof(VAR_1);
 if (FUNC_1("security.jail.jailed", &VAR_1, &VAR_0, ((void*)0), 0) == -1)
  FUNC_0(!"No security.jail.jailed sysctl!");
 return ((zoneid_t)VAR_1);
}
