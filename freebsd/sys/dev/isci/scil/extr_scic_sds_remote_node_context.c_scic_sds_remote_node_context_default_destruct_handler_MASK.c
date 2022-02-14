
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state_machine; int device; } ;
typedef int SCI_STATUS ;
typedef TYPE_1__ SCIC_SDS_REMOTE_NODE_CONTEXT_T ;
typedef int SCIC_SDS_REMOTE_NODE_CONTEXT_CALLBACK ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static
SCI_STATUS FUNC_3(
   SCIC_SDS_REMOTE_NODE_CONTEXT_T * VAR_4,
   SCIC_SDS_REMOTE_NODE_CONTEXT_CALLBACK VAR_5,
   void * VAR_6
)
{
   FUNC_0((
      FUNC_1(VAR_4->device),
      VAR_1 |
         VAR_0 |
         VAR_2,
      "SCIC Remote Node Context 0x%x requested to stop while in unexpected state %d\n",
      VAR_4, FUNC_2(&VAR_4->state_machine)
         ));



   return VAR_3;
}
