
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * pFreePRDLink; } ;
typedef int * PVOID ;
typedef TYPE_1__ IAL_ADAPTER_T ;


 int FUNC_0 (char*) ;

__attribute__((used)) static PVOID
FUNC_1(IAL_ADAPTER_T *VAR_0)
{
 PVOID VAR_1;
 if (VAR_0->pFreePRDLink) {
  FUNC_0(("pAdapter->pFreePRDLink:%p\n",VAR_0->pFreePRDLink));
  VAR_1 = VAR_0->pFreePRDLink;
  VAR_0->pFreePRDLink = *(void**)VAR_1;
  return VAR_1;
 }
 return ((void*)0);
}
