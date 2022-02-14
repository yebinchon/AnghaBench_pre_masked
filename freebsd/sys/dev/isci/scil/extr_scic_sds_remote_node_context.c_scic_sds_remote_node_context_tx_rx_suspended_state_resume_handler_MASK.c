
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int state_machine; } ;
typedef int SCI_STATUS ;
typedef TYPE_1__ SCIC_SDS_REMOTE_NODE_CONTEXT_T ;
typedef int SCIC_SDS_REMOTE_NODE_CONTEXT_CALLBACK ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_1__*,int ,void*) ;

__attribute__((used)) static
SCI_STATUS FUNC_2(
   SCIC_SDS_REMOTE_NODE_CONTEXT_T * VAR_2,
   SCIC_SDS_REMOTE_NODE_CONTEXT_CALLBACK VAR_3,
   void * VAR_4
)
{
   FUNC_1(
      VAR_2, VAR_3, VAR_4
         );

   FUNC_0(
      &VAR_2->state_machine,
      VAR_0
         );

   return VAR_1;
}
