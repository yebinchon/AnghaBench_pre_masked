
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int U16 ;
struct TYPE_8__ {TYPE_3__* task_context_buffer; } ;
struct TYPE_5__ {int ncq_tag; } ;
struct TYPE_6__ {TYPE_1__ stp; } ;
struct TYPE_7__ {TYPE_2__ type; } ;
typedef scalar_t__ SCI_IO_REQUEST_HANDLE_T ;
typedef TYPE_4__ SCIC_SDS_REQUEST_T ;



void FUNC_0(
   SCI_IO_REQUEST_HANDLE_T VAR_0,
   U16 VAR_1
)
{




   SCIC_SDS_REQUEST_T * VAR_2 = (SCIC_SDS_REQUEST_T *)VAR_0;
   VAR_2->task_context_buffer->type.stp.ncq_tag = VAR_1;
}
