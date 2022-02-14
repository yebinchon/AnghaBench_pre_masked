
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SCIC_SDS_REMOTE_NODE_CONTEXT {int state_machine; int device; void* suspension_code; } ;
typedef int U32 ;
typedef int SCI_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static
SCI_STATUS FUNC_6(
   struct SCIC_SDS_REMOTE_NODE_CONTEXT * VAR_7,
   U32 VAR_8
)
{
   SCI_STATUS VAR_9;

   switch (FUNC_5(VAR_8))
   {
      case 129:
         FUNC_2(
            &VAR_7->state_machine,
            VAR_4
               );

         VAR_7->suspension_code = FUNC_4(VAR_8);
         VAR_9 = VAR_6;
         break;

      case 128:
         FUNC_2(
            &VAR_7->state_machine,
            VAR_3
               );

         VAR_7->suspension_code = FUNC_4(VAR_8);
         VAR_9 = VAR_6;
         break;

      default:
         FUNC_0((
            FUNC_1(VAR_7->device),
            VAR_1 |
               VAR_0 |
               VAR_2,
            "SCIC Remote Node Context 0x%x requested to process event 0x%x while in state %d.\n",
            VAR_7, VAR_8, FUNC_3(&VAR_7->state_machine)
               ));

         VAR_9 = VAR_5;
         break;
   }

   return VAR_9;
}
