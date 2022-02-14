
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _SYSTEM_INFO {int dwAllocationGranularity; } ;
typedef int DWORD ;


 int FUNC_0 (struct _SYSTEM_INFO*) ;

__attribute__((used)) static DWORD FUNC_1(void)
{
 struct _SYSTEM_INFO VAR_0;

 FUNC_0(&VAR_0);

 return VAR_0.dwAllocationGranularity;
}
