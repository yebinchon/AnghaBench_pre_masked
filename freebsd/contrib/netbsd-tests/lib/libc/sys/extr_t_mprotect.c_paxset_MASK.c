
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int *,int *,int*,size_t) ;

__attribute__((used)) static bool
FUNC_1(int VAR_0, int VAR_1)
{
 size_t VAR_2 = sizeof(int);
 int VAR_3;

 VAR_3 = FUNC_0("security.pax.mprotect.global",
     ((void*)0), ((void*)0), &VAR_0, VAR_2);

 if (VAR_3 != 0)
  return 0;

 VAR_3 = FUNC_0("security.pax.mprotect.enabled",
     ((void*)0), ((void*)0), &VAR_1, VAR_2);

 if (VAR_3 != 0)
  return 0;

 return 1;
}
