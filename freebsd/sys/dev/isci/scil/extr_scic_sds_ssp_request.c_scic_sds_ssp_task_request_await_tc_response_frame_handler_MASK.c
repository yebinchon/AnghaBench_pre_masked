
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_6__ {int state_machine; } ;
struct TYPE_7__ {TYPE_1__ parent; int * owning_controller; } ;
typedef int SCI_STATUS ;
typedef TYPE_2__ SCIC_SDS_REQUEST_T ;
typedef int SCIC_SDS_CONTROLLER_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static
SCI_STATUS FUNC_5(
   SCIC_SDS_REQUEST_T * VAR_3,
   U32 VAR_4
)
{


   SCIC_SDS_CONTROLLER_T * VAR_5 = VAR_3->owning_controller;

   FUNC_0((
      FUNC_1(VAR_3),
      VAR_0,
      "scic_sds_ssp_task_request_await_tc_response_frame_handler(0x%x, 0x%x) enter\n",
      VAR_3, VAR_4
   ));

   FUNC_4(VAR_3);

   FUNC_2(
      &VAR_3->parent.state_machine,
      VAR_1
   );

   FUNC_3(
      VAR_5, VAR_4
   );

   return VAR_2;
}
