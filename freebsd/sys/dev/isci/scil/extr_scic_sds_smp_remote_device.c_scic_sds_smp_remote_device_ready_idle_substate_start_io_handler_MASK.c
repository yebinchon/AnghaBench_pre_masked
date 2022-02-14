
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* state_handlers; } ;
struct TYPE_7__ {int ready_substate_machine; int * working_request; int rnc; TYPE_3__* owning_port; } ;
struct TYPE_6__ {scalar_t__ (* start_io_handler ) (TYPE_3__*,TYPE_2__*,int *) ;} ;
typedef scalar_t__ SCI_STATUS ;
typedef int SCI_BASE_REQUEST_T ;
typedef int SCI_BASE_REMOTE_DEVICE_T ;
typedef int SCIC_SDS_REQUEST_T ;
typedef TYPE_2__ SCIC_SDS_REMOTE_DEVICE_T ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_2__*,int *,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_3__*,TYPE_2__*,int *) ;

__attribute__((used)) static
SCI_STATUS FUNC_5(
   SCI_BASE_REMOTE_DEVICE_T * VAR_2,
   SCI_BASE_REQUEST_T * VAR_3
)
{
   SCI_STATUS VAR_4;
   SCIC_SDS_REMOTE_DEVICE_T * VAR_5 = (SCIC_SDS_REMOTE_DEVICE_T *)VAR_2;
   SCIC_SDS_REQUEST_T * VAR_6 = (SCIC_SDS_REQUEST_T *)VAR_3;


   VAR_4 = VAR_5->owning_port->state_handlers->start_io_handler(
      VAR_5->owning_port,
      VAR_5,
      VAR_6
   );

   if (VAR_4 == VAR_1)
   {
      VAR_4 =
         FUNC_2(VAR_5->rnc, VAR_6);

      if (VAR_4 == VAR_1)
      {
         VAR_4 = FUNC_3(VAR_6);
      }

      if (VAR_4 == VAR_1)
      {
         VAR_5->working_request = VAR_6;

         FUNC_0(
               &VAR_5->ready_substate_machine,
               VAR_0
         );
      }

      FUNC_1(VAR_5, VAR_6, VAR_4);
   }

   return VAR_4;
}
