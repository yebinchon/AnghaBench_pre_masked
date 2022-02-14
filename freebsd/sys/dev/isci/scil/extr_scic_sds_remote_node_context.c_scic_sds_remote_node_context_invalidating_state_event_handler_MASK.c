
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_3__ {scalar_t__ destination_state; int state_machine; int device; } ;
typedef int SCI_STATUS ;
typedef TYPE_1__ SCIC_SDS_REMOTE_NODE_CONTEXT_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;


 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static
SCI_STATUS FUNC_7(
   SCIC_SDS_REMOTE_NODE_CONTEXT_T * VAR_9,
   U32 VAR_10
)
{
   SCI_STATUS VAR_11;

   if (FUNC_5(VAR_10) == VAR_8)
   {
      VAR_11 = VAR_7;

      if (VAR_9->destination_state == VAR_5)
      {
         FUNC_3(
            &VAR_9->state_machine,
            VAR_3
               );
      }
      else
      {
         FUNC_3(
            &VAR_9->state_machine,
            VAR_4
               );
      }
   }
   else
   {
      switch (FUNC_6(VAR_10))
      {
         case 129:
         case 128:


            FUNC_0((
               FUNC_2(VAR_9->device),
               VAR_1 |
                  VAR_0 |
                  VAR_2,
               "SCIC Remote Node Context 0x%x was suspeneded by hardware while being invalidated.\n",
               VAR_9
                  ));
            VAR_11 = VAR_7;
            break;

         default:
            FUNC_1((
               FUNC_2(VAR_9->device),
               VAR_1 |
                  VAR_0 |
                  VAR_2,
               "SCIC Remote Node Context 0x%x requested to process event 0x%x while in state %d.\n",
               VAR_9, VAR_10, FUNC_4(&VAR_9->state_machine)
                  ));
            VAR_11 = VAR_6;
            break;
      }
   }

   return VAR_11;
}
