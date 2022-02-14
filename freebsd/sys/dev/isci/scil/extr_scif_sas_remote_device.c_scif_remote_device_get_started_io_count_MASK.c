
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ U32 ;
struct TYPE_2__ {scalar_t__ task_request_count; scalar_t__ request_count; } ;
typedef scalar_t__ SCI_REMOTE_DEVICE_HANDLE_T ;
typedef TYPE_1__ SCIF_SAS_REMOTE_DEVICE_T ;



U32 FUNC_0(
   SCI_REMOTE_DEVICE_HANDLE_T VAR_0
)
{
   SCIF_SAS_REMOTE_DEVICE_T * VAR_1 = (SCIF_SAS_REMOTE_DEVICE_T *)
                                            VAR_0;

   return VAR_1->request_count - VAR_1->task_request_count;
}
