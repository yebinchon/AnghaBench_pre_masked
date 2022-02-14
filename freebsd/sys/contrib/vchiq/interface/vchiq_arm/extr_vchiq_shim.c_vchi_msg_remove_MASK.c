
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int int32_t ;
typedef scalar_t__ VCHI_SERVICE_HANDLE_T ;
typedef int VCHIQ_HEADER_T ;
struct TYPE_2__ {int handle; int queue; } ;
typedef TYPE_1__ SHIM_SERVICE_T ;


 int FUNC_0 (int ,int *) ;
 int * FUNC_1 (int *) ;

int32_t FUNC_2(VCHI_SERVICE_HANDLE_T VAR_0)
{
 SHIM_SERVICE_T *VAR_1 = (SHIM_SERVICE_T *)VAR_0;
 VCHIQ_HEADER_T *VAR_2;

 VAR_2 = FUNC_1(&VAR_1->queue);

 FUNC_0(VAR_1->handle, VAR_2);

 return 0;
}
