
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int int32_t ;
typedef int VCHI_SERVICE_OPTION_T ;
typedef scalar_t__ VCHI_SERVICE_HANDLE_T ;
typedef int VCHIQ_STATUS_T ;
typedef int VCHIQ_SERVICE_OPTION_T ;
struct TYPE_2__ {int handle; } ;
typedef TYPE_1__ SHIM_SERVICE_T ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;

int32_t FUNC_2(const VCHI_SERVICE_HANDLE_T VAR_2,
    VCHI_SERVICE_OPTION_T VAR_3,
    int VAR_4)
{
 int32_t VAR_5 = -1;
 SHIM_SERVICE_T *VAR_6 = (SHIM_SERVICE_T *)VAR_2;
 VCHIQ_SERVICE_OPTION_T VAR_7;
 switch (VAR_3) {
 case 128:
  VAR_7 = VAR_1;
  break;
 case 129:
  VAR_7 = VAR_0;
  break;
 default:
  VAR_6 = ((void*)0);
  break;
 }
 if (VAR_6) {
  VCHIQ_STATUS_T VAR_8 =
   FUNC_0(VAR_6->handle,
      VAR_7,
      VAR_4);

  VAR_5 = FUNC_1(VAR_8);
 }
 return VAR_5;
}
