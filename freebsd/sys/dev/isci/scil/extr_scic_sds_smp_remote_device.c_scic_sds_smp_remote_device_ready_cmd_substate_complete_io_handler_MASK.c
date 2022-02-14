
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int owning_port; int ready_substate_machine; } ;
typedef scalar_t__ SCI_STATUS ;
typedef int SCI_BASE_REQUEST_T ;
typedef int SCI_BASE_REMOTE_DEVICE_T ;
typedef int SCIC_SDS_REQUEST_T ;
typedef TYPE_1__ SCIC_SDS_REMOTE_DEVICE_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static
SCI_STATUS FUNC_6(
   SCI_BASE_REMOTE_DEVICE_T * VAR_3,
   SCI_BASE_REQUEST_T * VAR_4
)
{
   SCI_STATUS VAR_5;
   SCIC_SDS_REMOTE_DEVICE_T * VAR_6;
   SCIC_SDS_REQUEST_T * VAR_7;

   VAR_6 = (SCIC_SDS_REMOTE_DEVICE_T *)VAR_3;
   VAR_7 = (SCIC_SDS_REQUEST_T *)VAR_4;

   VAR_5 = FUNC_3(VAR_7);

   if (VAR_5 == VAR_2)
   {
      VAR_5 = FUNC_4(
         VAR_6->owning_port, VAR_6, VAR_7);

      if (VAR_5 == VAR_2)
      {
       FUNC_5(VAR_6);
         FUNC_2(
            &VAR_6->ready_substate_machine,
            VAR_1
         );
      }
      else
      {
         FUNC_0((
            FUNC_1(VAR_6),
            VAR_0,
            "SCIC SDS Remote Device 0x%x io request 0x%x could not be completd on the port 0x%x failed with status %d.\n",
            VAR_6, VAR_7, VAR_6->owning_port, VAR_5
         ));
      }
   }

   return VAR_5;
}
