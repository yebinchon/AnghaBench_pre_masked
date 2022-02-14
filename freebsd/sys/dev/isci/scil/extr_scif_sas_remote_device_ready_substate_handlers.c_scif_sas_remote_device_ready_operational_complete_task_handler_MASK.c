
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int task_request_count; int request_count; } ;
typedef int SCI_STATUS ;
typedef int SCI_BASE_REQUEST_T ;
typedef int SCI_BASE_REMOTE_DEVICE_T ;
typedef TYPE_1__ SCIF_SAS_REMOTE_DEVICE_T ;


 int VAR_0 ;

SCI_STATUS FUNC_0(
   SCI_BASE_REMOTE_DEVICE_T * VAR_1,
   SCI_BASE_REQUEST_T * VAR_2
)
{
   SCIF_SAS_REMOTE_DEVICE_T * VAR_3 = (SCIF_SAS_REMOTE_DEVICE_T*)
                                          VAR_1;
   VAR_3->request_count--;
   VAR_3->task_request_count--;

   return VAR_0;
}
