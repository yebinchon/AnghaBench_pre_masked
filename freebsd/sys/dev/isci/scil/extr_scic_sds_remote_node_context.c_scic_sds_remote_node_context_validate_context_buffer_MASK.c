
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ attached_stp_target; } ;
struct TYPE_12__ {TYPE_1__ bits; } ;
struct TYPE_13__ {TYPE_2__ u; } ;
struct TYPE_17__ {int owning_port; scalar_t__ is_direct_attached; TYPE_3__ target_protocols; } ;
struct TYPE_16__ {int remote_node_index; TYPE_8__* device; } ;
struct TYPE_14__ {int is_valid; } ;
struct TYPE_15__ {TYPE_4__ ssp; } ;
typedef TYPE_5__ SCU_REMOTE_NODE_CONTEXT_T ;
typedef TYPE_6__ SCIC_SDS_REMOTE_NODE_CONTEXT_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_8__*) ;
 int FUNC_3 (TYPE_8__*,int ) ;

__attribute__((used)) static
void FUNC_4(
   SCIC_SDS_REMOTE_NODE_CONTEXT_T * VAR_3
)
{
   SCU_REMOTE_NODE_CONTEXT_T *VAR_4;

   VAR_4 = FUNC_0(
      FUNC_2(VAR_3->device),
      VAR_3->remote_node_index
         );

   VAR_4->ssp.is_valid = VAR_2;

   if (
      !VAR_3->device->is_direct_attached
         && VAR_3->device->target_protocols.u.bits.attached_stp_target
         )
   {
      FUNC_3(
         VAR_3->device,
         VAR_1
            );
   }
   else
   {
      FUNC_3(
         VAR_3->device,
         VAR_0
            );

      if (VAR_3->device->is_direct_attached)
      {
         FUNC_1(
            VAR_3->device->owning_port,
            VAR_3->remote_node_index
               );
      }
   }
}
