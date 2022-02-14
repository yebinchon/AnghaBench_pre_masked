
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int state_machine; } ;
struct TYPE_8__ {TYPE_1__ parent; } ;
typedef scalar_t__ SCI_TASK_REQUEST_HANDLE_T ;
typedef int SCI_STATUS ;
typedef TYPE_2__ SCIC_SDS_REQUEST_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;

SCI_STATUS FUNC_6(
   SCI_TASK_REQUEST_HANDLE_T VAR_3
)
{
   SCIC_SDS_REQUEST_T *VAR_4 = (SCIC_SDS_REQUEST_T *)
                                      VAR_3;

   FUNC_0((
      FUNC_1(VAR_4),
      VAR_0,
      "scic_task_request_construct_ssp(0x%x) enter\n",
      VAR_4
   ));


   FUNC_5(VAR_4);


   FUNC_4(VAR_4);

   FUNC_3(VAR_4);

   FUNC_2(
      &VAR_4->parent.state_machine,
      VAR_1
   );

   return VAR_2;
}
