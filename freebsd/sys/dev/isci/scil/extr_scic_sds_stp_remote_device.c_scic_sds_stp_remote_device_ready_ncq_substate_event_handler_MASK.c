
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_6__ {int ready_substate_machine; int not_ready_reason; } ;
typedef int SCI_STATUS ;
typedef TYPE_1__ SCIC_SDS_REMOTE_DEVICE_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static
SCI_STATUS FUNC_8(
   SCIC_SDS_REMOTE_DEVICE_T * VAR_4,
   U32 VAR_5
)
{
   SCI_STATUS VAR_6;

   VAR_6 = FUNC_5(VAR_4, VAR_5);

   switch (FUNC_7(VAR_5))
   {
   case 134:
   case 129:


      break;

   case 133:
   case 131:
   case 132:
   case 130:
   case 128:
      VAR_4->not_ready_reason =
         VAR_1;

      FUNC_3(
         &VAR_4->ready_substate_machine,
         VAR_2
      );



      FUNC_1((
         FUNC_2(VAR_4),
         VAR_0,
         "SCIC Remote device 0x%x received driver suspend event %x while in ncq ready substate %d\n",
         VAR_4, VAR_5, FUNC_4(&VAR_4->ready_substate_machine)
      ));


      VAR_6 = FUNC_6(VAR_4);
      break;

   case 135:

      FUNC_0((
         FUNC_2(VAR_4),
         VAR_0,
         "SCIC Remote device 0x%x received driver release event %x while in the ready substate %d\n",
         VAR_4, VAR_5, FUNC_4(&VAR_4->ready_substate_machine)
      ));
      break;

   default:

      FUNC_1((
         FUNC_2(VAR_4),
         VAR_0,
         "SCIC Remote device 0x%x received driver unexpected event %x while in the ready substate %d\n",
         VAR_4, VAR_5, FUNC_4(&VAR_4->ready_substate_machine)
      ));

      VAR_6 = VAR_3;
      break;
   }

   return VAR_6;
}
