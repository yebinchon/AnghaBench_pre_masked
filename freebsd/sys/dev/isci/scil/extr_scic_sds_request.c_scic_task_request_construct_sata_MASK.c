
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int U8 ;
struct TYPE_7__ {int state_machine; } ;
struct TYPE_8__ {int sat_protocol; TYPE_1__ parent; int user_request; } ;
typedef scalar_t__ SCI_TASK_REQUEST_HANDLE_T ;
typedef scalar_t__ SCI_STATUS ;
typedef TYPE_2__ SCIC_SDS_REQUEST_T ;


 int VAR_0 ;



 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int,int ) ;
 scalar_t__ FUNC_7 (TYPE_2__*) ;

SCI_STATUS FUNC_8(
   SCI_TASK_REQUEST_HANDLE_T VAR_5
)
{
   SCI_STATUS VAR_6;
   SCIC_SDS_REQUEST_T * VAR_7;
   U8 VAR_8;

   VAR_7 = (SCIC_SDS_REQUEST_T *)VAR_5;

   FUNC_1((
      FUNC_2(VAR_7),
      VAR_1,
      "scic_task_request_construct_sata(0x%x) enter\n",
      VAR_7
   ));

   VAR_8 =
      FUNC_4(VAR_7->user_request);

   VAR_7->sat_protocol = VAR_8;

   switch (VAR_8)
   {
   case 130:
   case 128:
      VAR_6 = FUNC_7(VAR_7);
      break;

   case 129:
      VAR_6 = FUNC_6(VAR_7, VAR_8, VAR_0);
      break;

   default:
      FUNC_0((
         FUNC_2(VAR_7),
         VAR_1,
         "SCIC IO Request 0x%x received un-handled SAT Protocl %d.\n",
         VAR_7, VAR_8
      ));

      VAR_6 = VAR_3;
      break;
   }

   if (VAR_6 == VAR_4)
   {
      FUNC_5(VAR_7);

      FUNC_3(
         &VAR_7->parent.state_machine,
         VAR_2
      );
   }

   return VAR_6;
}
