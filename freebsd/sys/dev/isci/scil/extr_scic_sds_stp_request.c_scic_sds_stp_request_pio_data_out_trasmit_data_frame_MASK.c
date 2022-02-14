
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_16__ ;
typedef struct TYPE_20__ TYPE_13__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


typedef int U32 ;
struct TYPE_30__ {int parent; } ;
struct TYPE_28__ {int (* continue_io_handler ) (int *,int *,int *) ;} ;
struct TYPE_29__ {TYPE_7__ parent; } ;
struct TYPE_26__ {int fis_type; } ;
struct TYPE_27__ {TYPE_5__ stp; } ;
struct TYPE_23__ {scalar_t__ sgl_set; TYPE_1__* sgl_pair; } ;
struct TYPE_24__ {TYPE_2__ request_current; } ;
struct TYPE_25__ {TYPE_3__ pio; } ;
struct TYPE_18__ {int address_lower; int address_upper; } ;
struct TYPE_22__ {TYPE_11__ B; TYPE_11__ A; } ;
struct TYPE_21__ {int parent; TYPE_8__* state_handlers; } ;
struct TYPE_20__ {int parent; TYPE_9__* target_device; TYPE_16__* owning_controller; int io_tag; } ;
struct TYPE_19__ {TYPE_4__ type; } ;
struct TYPE_17__ {TYPE_6__ type; int transfer_length_bytes; int command_iu_lower; int command_iu_upper; } ;
typedef TYPE_10__ SCU_TASK_CONTEXT_T ;
typedef TYPE_11__ SCU_SGL_ELEMENT_T ;
typedef int SCI_STATUS ;
typedef TYPE_12__ SCIC_SDS_STP_REQUEST_T ;
typedef TYPE_13__ SCIC_SDS_REQUEST_T ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_10__* FUNC_0 (TYPE_16__*,int ) ;
 int FUNC_1 (int *,int *,int *) ;

__attribute__((used)) static
SCI_STATUS FUNC_2 (
   SCIC_SDS_REQUEST_T * VAR_3,
   U32 VAR_4
)
{
   SCI_STATUS VAR_5 = VAR_1;
   SCU_SGL_ELEMENT_T * VAR_6;
   SCIC_SDS_STP_REQUEST_T * VAR_7 = (SCIC_SDS_STP_REQUEST_T *)VAR_3;



   SCU_TASK_CONTEXT_T * VAR_8 = FUNC_0(
                                          VAR_3->owning_controller,
                                          VAR_3->io_tag
                                       );

   if (VAR_7->type.pio.request_current.sgl_set == VAR_2)
   {
      VAR_6 = &(VAR_7->type.pio.request_current.sgl_pair->A);
   }
   else
   {
      VAR_6 = &(VAR_7->type.pio.request_current.sgl_pair->B);
   }


   VAR_8->command_iu_upper = VAR_6->address_upper;
   VAR_8->command_iu_lower = VAR_6->address_lower;
   VAR_8->transfer_length_bytes = VAR_4;
   VAR_8->type.stp.fis_type = VAR_0;


   VAR_5 = VAR_3->owning_controller->state_handlers->parent.continue_io_handler(
      &VAR_3->owning_controller->parent,
      &VAR_3->target_device->parent,
      &VAR_3->parent
   );

   return VAR_5;

}
