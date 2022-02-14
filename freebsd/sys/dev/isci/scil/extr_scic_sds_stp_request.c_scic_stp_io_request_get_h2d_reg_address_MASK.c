
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* command_buffer; } ;
typedef scalar_t__ SCI_IO_REQUEST_HANDLE_T ;
typedef TYPE_1__ SCIC_SDS_REQUEST_T ;



void * FUNC_0(
   SCI_IO_REQUEST_HANDLE_T VAR_0
)
{
   SCIC_SDS_REQUEST_T * VAR_1 = (SCIC_SDS_REQUEST_T *)VAR_0;

   return VAR_1->command_buffer;
}
