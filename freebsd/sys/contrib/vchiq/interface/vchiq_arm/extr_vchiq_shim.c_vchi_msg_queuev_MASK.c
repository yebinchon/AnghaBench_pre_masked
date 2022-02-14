
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int32_t ;
typedef scalar_t__ VCHI_SERVICE_HANDLE_T ;
typedef int VCHI_MSG_VECTOR_T ;
typedef scalar_t__ VCHI_FLAGS_T ;
typedef int VCHIQ_ELEMENT_T ;
struct TYPE_2__ {int handle; } ;
typedef TYPE_1__ SHIM_SERVICE_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int const*,int ) ;
 int FUNC_2 (int ) ;

int32_t FUNC_3(VCHI_SERVICE_HANDLE_T VAR_1,
 VCHI_MSG_VECTOR_T *VAR_2,
 uint32_t VAR_3,
 VCHI_FLAGS_T VAR_4,
 void *VAR_5)
{
 SHIM_SERVICE_T *VAR_6 = (SHIM_SERVICE_T *)VAR_1;

 (void)VAR_5;

 FUNC_0(VAR_4 != VAR_0);

 return FUNC_2(FUNC_1(VAR_6->handle,
  (const VCHIQ_ELEMENT_T *)VAR_2, VAR_3));
}
