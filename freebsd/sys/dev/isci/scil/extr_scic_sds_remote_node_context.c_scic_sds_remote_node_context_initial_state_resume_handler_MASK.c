
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_6__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ previous_state_id; } ;
struct TYPE_7__ {scalar_t__ remote_node_index; TYPE_6__ state_machine; } ;
typedef int SCI_STATUS ;
typedef TYPE_1__ SCIC_SDS_REMOTE_NODE_CONTEXT_T ;
typedef int SCIC_SDS_REMOTE_NODE_CONTEXT_CALLBACK ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_6__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,void*) ;

__attribute__((used)) static
SCI_STATUS FUNC_4(
   SCIC_SDS_REMOTE_NODE_CONTEXT_T * VAR_5,
   SCIC_SDS_REMOTE_NODE_CONTEXT_CALLBACK VAR_6,
   void * VAR_7
)
{
   if (VAR_5->remote_node_index != VAR_1)
   {
      FUNC_3(
         VAR_5, VAR_6, VAR_7
            );

      FUNC_1(VAR_5);
      FUNC_0(
         &VAR_5->state_machine,
         VAR_2
            );

      return VAR_4;
   }

   return VAR_3;
}
