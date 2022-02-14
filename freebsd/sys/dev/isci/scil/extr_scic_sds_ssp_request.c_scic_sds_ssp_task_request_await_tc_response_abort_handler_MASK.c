
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int state_machine; } ;
struct TYPE_5__ {TYPE_1__ parent; } ;
typedef int SCI_STATUS ;
typedef int SCI_BASE_REQUEST_T ;
typedef TYPE_2__ SCIC_SDS_REQUEST_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static
SCI_STATUS FUNC_3(
   SCI_BASE_REQUEST_T * VAR_4
)
{
   SCIC_SDS_REQUEST_T *VAR_5 = (SCIC_SDS_REQUEST_T *)VAR_4;

   FUNC_0((
      FUNC_1(VAR_5),
      VAR_0,
      "scic_sds_ssp_task_request_await_tc_response_abort_handler(0x%x) enter\n",
      VAR_5
   ));

   FUNC_2(
      &VAR_5->parent.state_machine,
      VAR_1
   );

   FUNC_2(
      &VAR_5->parent.state_machine,
      VAR_2
   );

   return VAR_3;
}
