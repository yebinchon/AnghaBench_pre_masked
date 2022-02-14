
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_17__ {TYPE_1__* state_handlers; } ;
struct TYPE_16__ {int ready_substate_machine; TYPE_4__* working_request; int rnc; TYPE_6__* owning_port; } ;
struct TYPE_15__ {scalar_t__ sat_protocol; TYPE_3__* state_handlers; } ;
struct TYPE_13__ {scalar_t__ (* start_handler ) (int *) ;} ;
struct TYPE_14__ {TYPE_2__ parent; } ;
struct TYPE_12__ {scalar_t__ (* start_io_handler ) (TYPE_6__*,TYPE_5__*,TYPE_4__*) ;} ;
typedef scalar_t__ SCI_STATUS ;
typedef int SCI_BASE_REQUEST_T ;
typedef int SCI_BASE_REMOTE_DEVICE_T ;
typedef TYPE_4__ SCIC_SDS_REQUEST_T ;
typedef TYPE_5__ SCIC_SDS_REMOTE_DEVICE_T ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_5__*,TYPE_4__*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,TYPE_4__*) ;
 scalar_t__ FUNC_3 (TYPE_6__*,TYPE_5__*,TYPE_4__*) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static
SCI_STATUS FUNC_5(
   SCI_BASE_REMOTE_DEVICE_T * VAR_4,
   SCI_BASE_REQUEST_T * VAR_5
)
{
   SCI_STATUS VAR_6;
   SCIC_SDS_REMOTE_DEVICE_T * VAR_7 = (SCIC_SDS_REMOTE_DEVICE_T *)VAR_4;
   SCIC_SDS_REQUEST_T * VAR_8 = (SCIC_SDS_REQUEST_T *)VAR_5;



   VAR_6 = VAR_7->owning_port->state_handlers->start_io_handler(
      VAR_7->owning_port,
      VAR_7,
      VAR_8
   );

   if (VAR_6 == VAR_3)
   {
      VAR_6 =
         FUNC_2(VAR_7->rnc, VAR_8);

      if (VAR_6 == VAR_3)
      {
         VAR_6 = VAR_8->state_handlers->parent.start_handler(VAR_5);
      }

      if (VAR_6 == VAR_3)
      {
         if (VAR_8->sat_protocol == VAR_0)
         {
            FUNC_0(
               &VAR_7->ready_substate_machine,
               VAR_2
            );
         }
         else
         {
            VAR_7->working_request = VAR_8;

            FUNC_0(
               &VAR_7->ready_substate_machine,
               VAR_1
            );
         }
      }

      FUNC_1(VAR_7, VAR_8, VAR_6);
   }

   return VAR_6;
}
