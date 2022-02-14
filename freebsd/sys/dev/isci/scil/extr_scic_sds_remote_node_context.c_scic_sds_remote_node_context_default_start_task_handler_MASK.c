
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SCIC_SDS_REQUEST {int dummy; } ;
struct SCIC_SDS_REMOTE_NODE_CONTEXT {int state_machine; int device; } ;
typedef int SCI_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static
SCI_STATUS FUNC_3(
   struct SCIC_SDS_REMOTE_NODE_CONTEXT * VAR_4,
   struct SCIC_SDS_REQUEST * VAR_5
)
{
   FUNC_0((
      FUNC_1(VAR_4->device),
      VAR_1 |
         VAR_0 |
         VAR_2,
      "SCIC Remote Node Context 0x%x requested to start task 0x%x while in wrong state %d\n",
      VAR_4, VAR_5, FUNC_2(&VAR_4->state_machine)
         ));

   return VAR_3;
}
