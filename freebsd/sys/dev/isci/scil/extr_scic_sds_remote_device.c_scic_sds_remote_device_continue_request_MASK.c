
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {TYPE_5__* working_request; } ;
struct TYPE_12__ {int parent; TYPE_4__* target_device; TYPE_3__* owning_controller; } ;
struct TYPE_11__ {int parent; } ;
struct TYPE_10__ {int parent; TYPE_2__* state_handlers; } ;
struct TYPE_8__ {int (* continue_io_handler ) (int *,int *,int *) ;} ;
struct TYPE_9__ {TYPE_1__ parent; } ;
typedef TYPE_5__ SCIC_SDS_REQUEST_T ;
typedef TYPE_6__ SCIC_SDS_REMOTE_DEVICE_T ;


 int FUNC_0 (int *,int *,int *) ;

void FUNC_1(
   SCIC_SDS_REMOTE_DEVICE_T * VAR_0
)
{

   if (VAR_0->working_request != ((void*)0))
   {
      SCIC_SDS_REQUEST_T * VAR_1 = VAR_0->working_request;

      VAR_1->owning_controller->state_handlers->parent.continue_io_handler(
         &VAR_1->owning_controller->parent,
         &VAR_1->target_device->parent,
         &VAR_1->parent
      );
   }
}
