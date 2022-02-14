
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ U8 ;
struct TYPE_13__ {int parent; } ;
struct TYPE_16__ {TYPE_4__ parent; int started_substate_machine; TYPE_7__* task_context_buffer; } ;
struct TYPE_15__ {int sgl_pair_ab; } ;
struct TYPE_10__ {int * sgl_pair; int sgl_set; scalar_t__ sgl_offset; } ;
struct TYPE_11__ {TYPE_1__ request_current; scalar_t__ sgl_pair_index; scalar_t__ sat_protocol; scalar_t__ ending_status; scalar_t__ ending_error; scalar_t__ current_transfer_bytes; } ;
struct TYPE_12__ {TYPE_2__ pio; } ;
struct TYPE_14__ {TYPE_8__ parent; TYPE_3__ type; } ;
typedef int SCI_STATUS ;
typedef TYPE_5__ SCIC_SDS_STP_REQUEST_T ;
typedef int SCIC_SDS_REQUEST_T ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *,int ,int ) ;
 int FUNC_1 (TYPE_8__*) ;
 int FUNC_2 (TYPE_8__*) ;
 int VAR_4 ;
 int FUNC_3 (TYPE_5__*,TYPE_7__*) ;

SCI_STATUS FUNC_4(
   SCIC_SDS_REQUEST_T * VAR_5,
   U8 VAR_6,
   BOOL VAR_7
)
{
   SCIC_SDS_STP_REQUEST_T * VAR_8;

   VAR_8 = (SCIC_SDS_STP_REQUEST_T *)VAR_5;

   FUNC_2(&VAR_8->parent);

   FUNC_3(
      VAR_8, VAR_8->parent.task_context_buffer
   );

   VAR_8->type.pio.current_transfer_bytes = 0;
   VAR_8->type.pio.ending_error = 0;
   VAR_8->type.pio.ending_status = 0;

   VAR_8->type.pio.request_current.sgl_offset = 0;
   VAR_8->type.pio.request_current.sgl_set = VAR_3;
   VAR_8->type.pio.sat_protocol = VAR_6;
   VAR_8->type.pio.sgl_pair_index = 0;

   if ((VAR_7) || (VAR_6 == VAR_0))
   {
      FUNC_1(&VAR_8->parent);


      VAR_8->type.pio.request_current.sgl_pair =
         &VAR_8->parent.task_context_buffer->sgl_pair_ab;
   }
   else
   {

      VAR_8->type.pio.request_current.sgl_pair = ((void*)0);
   }

   FUNC_0(
      &VAR_8->parent.started_substate_machine,
      &VAR_8->parent.parent.parent,
      VAR_4,
      VAR_1
   );

   return VAR_2;
}
