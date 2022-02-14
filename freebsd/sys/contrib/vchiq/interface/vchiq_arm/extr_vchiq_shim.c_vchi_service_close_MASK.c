
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
typedef scalar_t__ VCHI_SERVICE_HANDLE_T ;
typedef scalar_t__ VCHIQ_STATUS_T ;
struct TYPE_3__ {int handle; } ;
typedef TYPE_1__ SHIM_SERVICE_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;

int32_t FUNC_3(const VCHI_SERVICE_HANDLE_T VAR_1)
{
 int32_t VAR_2 = -1;
 SHIM_SERVICE_T *VAR_3 = (SHIM_SERVICE_T *)VAR_1;
 if (VAR_3) {
  VCHIQ_STATUS_T VAR_4 = FUNC_1(VAR_3->handle);
  if (VAR_4 == VAR_0) {
   FUNC_0(VAR_3);
   VAR_3 = ((void*)0);
  }

  VAR_2 = FUNC_2(VAR_4);
 }
 return VAR_2;
}
