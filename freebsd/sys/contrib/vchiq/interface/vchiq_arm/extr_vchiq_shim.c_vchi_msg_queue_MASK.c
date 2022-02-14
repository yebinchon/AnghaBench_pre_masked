
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int32_t ;
typedef scalar_t__ VCHI_SERVICE_HANDLE_T ;
typedef scalar_t__ VCHI_FLAGS_T ;
typedef scalar_t__ VCHIQ_STATUS_T ;
struct TYPE_4__ {void const* member_0; int member_1; } ;
typedef TYPE_1__ VCHIQ_ELEMENT_T ;
struct TYPE_5__ {int handle; } ;
typedef TYPE_2__ SHIM_SERVICE_T ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ,TYPE_1__*,int) ;
 int FUNC_3 (scalar_t__) ;

int32_t FUNC_4(VCHI_SERVICE_HANDLE_T VAR_2,
 const void *VAR_3,
 uint32_t VAR_4,
 VCHI_FLAGS_T VAR_5,
 void *VAR_6)
{
 SHIM_SERVICE_T *VAR_7 = (SHIM_SERVICE_T *)VAR_2;
 VCHIQ_ELEMENT_T VAR_8 = {VAR_3, VAR_4};
 VCHIQ_STATUS_T VAR_9;

 (void)VAR_6;

 FUNC_0(VAR_5 != VAR_1);

 VAR_9 = FUNC_2(VAR_7->handle, &VAR_8, 1);





 while (VAR_9 == VAR_0) {
  FUNC_1(1);
  VAR_9 = FUNC_2(VAR_7->handle, &VAR_8, 1);
 }

 return FUNC_3(VAR_9);
}
