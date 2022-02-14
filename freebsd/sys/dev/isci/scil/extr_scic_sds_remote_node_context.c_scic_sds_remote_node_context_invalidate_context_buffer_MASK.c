
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int device; int remote_node_index; } ;
struct TYPE_6__ {int is_valid; } ;
struct TYPE_7__ {TYPE_1__ ssp; } ;
typedef TYPE_2__ SCU_REMOTE_NODE_CONTEXT_T ;
typedef TYPE_3__ SCIC_SDS_REMOTE_NODE_CONTEXT_T ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static
void FUNC_3(
   SCIC_SDS_REMOTE_NODE_CONTEXT_T * VAR_2
)
{
   SCU_REMOTE_NODE_CONTEXT_T *VAR_3;

   VAR_3 = FUNC_0(
      FUNC_1(VAR_2->device),
      VAR_2->remote_node_index
         );

   VAR_3->ssp.is_valid = VAR_0;

   FUNC_2(
      VAR_2->device,
      VAR_1
         );
}
