
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ started_request_count; int ready_substate_machine; } ;
typedef int SCI_STATUS ;
typedef int SCIC_SDS_REQUEST_T ;
typedef int SCIC_SDS_REMOTE_DEVICE_T ;
typedef TYPE_1__ SCIC_SDS_PORT_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static
SCI_STATUS FUNC_2(
   SCIC_SDS_PORT_T *VAR_2,
   SCIC_SDS_REMOTE_DEVICE_T *VAR_3,
   SCIC_SDS_REQUEST_T *VAR_4
)
{
   FUNC_1(VAR_2);

   if (VAR_2->started_request_count == 0)
   {
      FUNC_0(
         &VAR_2->ready_substate_machine,
         VAR_0
      );
   }

   return VAR_1;
}
