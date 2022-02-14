
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int int32_t ;
typedef scalar_t__ VCHI_SERVICE_HANDLE_T ;
typedef int VCHIQ_STATUS_T ;
struct TYPE_2__ {int handle; } ;
typedef TYPE_1__ SHIM_SERVICE_T ;


 int FUNC_0 (int ,short*) ;
 int FUNC_1 (int ) ;

int32_t FUNC_2( const VCHI_SERVICE_HANDLE_T VAR_0, short *VAR_1 )
{
   int32_t VAR_2 = -1;
   SHIM_SERVICE_T *VAR_3 = (SHIM_SERVICE_T *)VAR_0;
   if(VAR_3)
   {
      VCHIQ_STATUS_T VAR_4 = FUNC_0(VAR_3->handle, VAR_1);
      VAR_2 = FUNC_1( VAR_4 );
   }
   return VAR_2;
}
