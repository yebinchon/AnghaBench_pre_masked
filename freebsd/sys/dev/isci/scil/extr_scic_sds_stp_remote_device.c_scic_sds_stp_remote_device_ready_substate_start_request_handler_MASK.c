
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


struct TYPE_18__ {TYPE_1__* state_handlers; } ;
struct TYPE_17__ {int rnc; int ready_substate_machine; TYPE_4__* working_request; TYPE_6__* owning_port; } ;
struct TYPE_16__ {TYPE_3__* state_handlers; } ;
struct TYPE_14__ {scalar_t__ (* start_handler ) (int *) ;} ;
struct TYPE_15__ {TYPE_2__ parent; } ;
struct TYPE_13__ {scalar_t__ (* start_io_handler ) (TYPE_6__*,TYPE_5__*,TYPE_4__*) ;} ;
typedef scalar_t__ SCI_STATUS ;
typedef int SCI_BASE_REQUEST_T ;
typedef int SCI_BASE_REMOTE_DEVICE_T ;
typedef TYPE_4__ SCIC_SDS_REQUEST_T ;
typedef int SCIC_SDS_REMOTE_NODE_CONTEXT_CALLBACK ;
typedef TYPE_5__ SCIC_SDS_REMOTE_DEVICE_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_5__*,TYPE_4__*,scalar_t__) ;
 int FUNC_2 (int ,int ,TYPE_5__*) ;
 scalar_t__ FUNC_3 (int ,TYPE_4__*) ;
 int FUNC_4 (int ,int ,int *,int *) ;
 scalar_t__ FUNC_5 (TYPE_6__*,TYPE_5__*,TYPE_4__*) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static
SCI_STATUS FUNC_7(
   SCI_BASE_REMOTE_DEVICE_T * VAR_5,
   SCI_BASE_REQUEST_T * VAR_6
)
{
   SCI_STATUS VAR_7;
   SCIC_SDS_REMOTE_DEVICE_T * VAR_8 = (SCIC_SDS_REMOTE_DEVICE_T *)VAR_5;
   SCIC_SDS_REQUEST_T * VAR_9 = (SCIC_SDS_REQUEST_T *)VAR_6;


   VAR_7 = VAR_8->owning_port->state_handlers->start_io_handler(
      VAR_8->owning_port,
      VAR_8,
      VAR_9
   );

   if (VAR_3 == VAR_7)
   {
      VAR_7 =
         FUNC_3(VAR_8->rnc, VAR_9);

      if (VAR_3 == VAR_7)
      {
         VAR_7 = VAR_9->state_handlers->parent.start_handler(VAR_6);
      }

      if (VAR_7 == VAR_3)
      {



         VAR_8->working_request = VAR_9;

         FUNC_0(
            &VAR_8->ready_substate_machine,
            VAR_0
         );






         FUNC_4(
            VAR_8->rnc, VAR_2, ((void*)0), ((void*)0));

         FUNC_2(
            VAR_8->rnc,
            (SCIC_SDS_REMOTE_NODE_CONTEXT_CALLBACK)
                VAR_4,
            VAR_8);
      }

      FUNC_1(VAR_8,VAR_9,VAR_7);




      return VAR_1;
   }

   return VAR_7;
}
