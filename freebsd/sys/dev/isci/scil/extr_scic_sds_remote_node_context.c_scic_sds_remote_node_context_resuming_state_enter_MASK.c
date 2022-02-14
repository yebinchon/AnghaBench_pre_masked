
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int owning_port; scalar_t__ is_direct_attached; } ;
struct TYPE_12__ {TYPE_5__* device; int remote_node_index; } ;
struct TYPE_9__ {int attached_stp_target; } ;
struct TYPE_10__ {TYPE_1__ bits; } ;
struct TYPE_11__ {TYPE_2__ u; } ;
typedef TYPE_3__ SMP_DISCOVER_RESPONSE_PROTOCOLS_T ;
typedef int SCI_BASE_OBJECT_T ;
typedef TYPE_4__ SCIC_SDS_REMOTE_NODE_CONTEXT_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*,int ,int ) ;
 int FUNC_1 (TYPE_5__*,TYPE_3__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_5__*,int ) ;
 int VAR_2 ;

__attribute__((used)) static
void FUNC_4(
   SCI_BASE_OBJECT_T * VAR_3
)
{
   SCIC_SDS_REMOTE_NODE_CONTEXT_T * VAR_4;
   SMP_DISCOVER_RESPONSE_PROTOCOLS_T VAR_5;
   VAR_4 = (SCIC_SDS_REMOTE_NODE_CONTEXT_T *)VAR_3;

   FUNC_0(
      VAR_4,
      VAR_2,
      VAR_0
         );





   FUNC_1(VAR_4->device, &VAR_5);

   if (
      (VAR_5.u.bits.attached_stp_target == 1)
         && (VAR_4->device->is_direct_attached)
         )
   {
      FUNC_2(
         VAR_4->device->owning_port, VAR_4->remote_node_index
            );
   }

   FUNC_3(
      VAR_4->device,
      VAR_1
         );
}
