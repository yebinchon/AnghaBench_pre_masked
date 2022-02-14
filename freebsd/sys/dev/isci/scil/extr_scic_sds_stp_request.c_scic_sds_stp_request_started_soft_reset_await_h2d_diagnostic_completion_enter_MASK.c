
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_18__ {scalar_t__ control; } ;
struct TYPE_17__ {int parent; TYPE_3__* target_device; TYPE_10__* owning_controller; int io_tag; } ;
struct TYPE_16__ {scalar_t__ control_frame; } ;
struct TYPE_15__ {int parent; } ;
struct TYPE_13__ {scalar_t__ (* continue_io_handler ) (int *,int *,int *) ;} ;
struct TYPE_14__ {TYPE_1__ parent; } ;
struct TYPE_12__ {int parent; TYPE_2__* state_handlers; } ;
typedef TYPE_4__ SCU_TASK_CONTEXT_T ;
typedef scalar_t__ SCI_STATUS ;
typedef int SCI_BASE_OBJECT_T ;
typedef TYPE_5__ SCIC_SDS_REQUEST_T ;
typedef TYPE_6__ SATA_FIS_REG_H2D_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_5__*,int ,int ) ;
 TYPE_4__* FUNC_1 (TYPE_10__*,int ) ;
 int VAR_2 ;
 TYPE_6__* FUNC_2 (TYPE_5__*) ;
 scalar_t__ FUNC_3 (int *,int *,int *) ;

__attribute__((used)) static
void FUNC_4(
   SCI_BASE_OBJECT_T *VAR_3
)
{
   SCI_STATUS VAR_4;
   SCIC_SDS_REQUEST_T *VAR_5 = (SCIC_SDS_REQUEST_T *)VAR_3;
   SATA_FIS_REG_H2D_T *VAR_6;
   SCU_TASK_CONTEXT_T *VAR_7;


   VAR_6 = FUNC_2(VAR_5);
   VAR_6->control = 0;


   VAR_7 = FUNC_1(
                        VAR_5->owning_controller, VAR_5->io_tag);
   VAR_7->control_frame = 0;

   VAR_4 = VAR_5->owning_controller->state_handlers->parent.continue_io_handler(
      &VAR_5->owning_controller->parent,
      &VAR_5->target_device->parent,
      &VAR_5->parent
   );

   if (VAR_4 == VAR_1)
   {
      FUNC_0(
         VAR_5,
         VAR_2,
         VAR_0
      );
   }
}
