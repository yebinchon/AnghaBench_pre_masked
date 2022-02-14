
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int *,size_t*,int *,int ) ;

__attribute__((used)) static bool
FUNC_1(void)
{
 size_t VAR_2 = sizeof(int);
 int VAR_3;

 VAR_3 = FUNC_0("security.pax.mprotect.global",
     &VAR_1, &VAR_2, ((void*)0), 0);

 if (VAR_3 != 0)
  return 0;

 VAR_3 = FUNC_0("security.pax.mprotect.enabled",
     &VAR_0, &VAR_2, ((void*)0), 0);

 return VAR_3 == 0;
}
