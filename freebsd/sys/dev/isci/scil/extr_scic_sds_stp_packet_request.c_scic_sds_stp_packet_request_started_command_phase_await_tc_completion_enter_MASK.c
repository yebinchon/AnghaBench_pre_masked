
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ U8 ;
struct TYPE_13__ {int parent; TYPE_2__* state_handlers; } ;
struct TYPE_12__ {scalar_t__ sat_protocol; int parent; TYPE_3__* target_device; TYPE_7__* owning_controller; int io_tag; } ;
struct TYPE_11__ {int parent; } ;
struct TYPE_9__ {scalar_t__ (* continue_io_handler ) (int *,int *,int *) ;} ;
struct TYPE_10__ {TYPE_1__ parent; } ;
typedef int SCU_TASK_CONTEXT_T ;
typedef scalar_t__ SCI_STATUS ;
typedef int SCI_BASE_OBJECT_T ;
typedef TYPE_4__ SCIC_SDS_REQUEST_T ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_4__*,int ,int ) ;
 int * FUNC_1 (TYPE_7__*,int ) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_4__*,int *) ;
 int FUNC_3 (TYPE_4__*,int *) ;
 scalar_t__ FUNC_4 (int *,int *,int *) ;

__attribute__((used)) static
void FUNC_5(
   SCI_BASE_OBJECT_T *VAR_4
)
{
   SCIC_SDS_REQUEST_T *VAR_5 = (SCIC_SDS_REQUEST_T *)VAR_4;
   U8 VAR_6 = VAR_5->sat_protocol;

   SCU_TASK_CONTEXT_T *VAR_7;
   SCI_STATUS VAR_8;



   VAR_7 = FUNC_1(
                        VAR_5->owning_controller, VAR_5->io_tag);

   if (VAR_6 == VAR_0)
      FUNC_3(
         VAR_5, VAR_7);
   else
      FUNC_2(
         VAR_5, VAR_7);


   VAR_8 = VAR_5->owning_controller->state_handlers->parent.continue_io_handler(
      &VAR_5->owning_controller->parent,
      &VAR_5->target_device->parent,
      &VAR_5->parent
   );

   if (VAR_8 == VAR_2)
      FUNC_0(
         VAR_5,
         VAR_3,
         VAR_1
      );
}
