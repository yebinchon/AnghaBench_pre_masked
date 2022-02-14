
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int owning_port; int ready_substate_machine; } ;
struct TYPE_9__ {scalar_t__ sci_status; } ;
typedef scalar_t__ SCI_STATUS ;
typedef int SCI_BASE_REQUEST_T ;
typedef int SCI_BASE_REMOTE_DEVICE_T ;
typedef TYPE_1__ SCIC_SDS_REQUEST_T ;
typedef TYPE_2__ SCIC_SDS_REMOTE_DEVICE_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ,TYPE_2__*,TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static
SCI_STATUS FUNC_7(
   SCI_BASE_REMOTE_DEVICE_T * VAR_5,
   SCI_BASE_REQUEST_T * VAR_6
)
{
   SCIC_SDS_REMOTE_DEVICE_T * VAR_7 = (SCIC_SDS_REMOTE_DEVICE_T *)VAR_5;
   SCIC_SDS_REQUEST_T * VAR_8 = (SCIC_SDS_REQUEST_T *)VAR_6;
   SCI_STATUS VAR_9;

   VAR_9 = FUNC_3(VAR_8);

   if (VAR_9 == VAR_4)
   {
      VAR_9 = FUNC_4(
                  VAR_7->owning_port, VAR_7, VAR_8
               );

      if (VAR_9 == VAR_4)
      {
         FUNC_5(VAR_7);
         if (VAR_8->sci_status == VAR_3)
         {




            FUNC_2(
               &VAR_7->ready_substate_machine,
               VAR_1
            );
         }
         else if (FUNC_6(VAR_7) == 0)
         {
            FUNC_2(
               &VAR_7->ready_substate_machine,
               VAR_2
            );
         }
      }
   }

   if (VAR_9 != VAR_4)
   {
      FUNC_0((
         FUNC_1(VAR_7),
         VAR_0,
         "Port:0x%x Device:0x%x Request:0x%x Status:0x%x could not complete\n",
         VAR_7->owning_port, VAR_7, VAR_8, VAR_9
      ));
   }

   return VAR_9;
}
