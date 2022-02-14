
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SCIC_SDS_REMOTE_NODE_CONTEXT {int device; int state_machine; } ;
typedef int U32 ;
typedef int SCI_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static
SCI_STATUS FUNC_4(
   struct SCIC_SDS_REMOTE_NODE_CONTEXT * VAR_6,
   U32 VAR_7
)
{
   SCI_STATUS VAR_8;

   switch (FUNC_3(VAR_7))
   {
      case 128:
         VAR_8 = VAR_5;

         FUNC_2(
            &VAR_6->state_machine,
            VAR_3
               );
         break;

      default:
         VAR_8 = VAR_4;
         FUNC_0((
            FUNC_1(VAR_6->device),
            VAR_1 |
               VAR_0 |
               VAR_2,
            "SCIC Remote Node Context 0x%x requested to process unexpected event 0x%x while in posting state\n",
            VAR_6, VAR_7
               ));
         break;
   }

   return VAR_8;
}
