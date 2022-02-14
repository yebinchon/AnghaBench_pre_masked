
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* pFreePRDLink; } ;
typedef void* PVOID ;
typedef TYPE_1__ IAL_ADAPTER_T ;



__attribute__((used)) static void
FUNC_0(IAL_ADAPTER_T *VAR_0, PVOID VAR_1)
{
 *(void**)VAR_1 = VAR_0->pFreePRDLink;
 VAR_0->pFreePRDLink = VAR_1;
}
