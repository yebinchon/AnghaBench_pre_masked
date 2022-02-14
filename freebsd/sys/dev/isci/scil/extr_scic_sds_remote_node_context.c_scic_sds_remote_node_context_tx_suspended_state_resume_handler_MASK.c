
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int is_direct_attached; } ;
struct TYPE_12__ {int state_machine; TYPE_7__* device; } ;
struct TYPE_9__ {int attached_stp_target; } ;
struct TYPE_10__ {TYPE_1__ bits; } ;
struct TYPE_11__ {TYPE_2__ u; } ;
typedef TYPE_3__ SMP_DISCOVER_RESPONSE_PROTOCOLS_T ;
typedef int SCI_STATUS ;
typedef TYPE_4__ SCIC_SDS_REMOTE_NODE_CONTEXT_T ;
typedef int SCIC_SDS_REMOTE_NODE_CONTEXT_CALLBACK ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_7__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_4__*,int ,void*) ;

__attribute__((used)) static
SCI_STATUS FUNC_3(
   SCIC_SDS_REMOTE_NODE_CONTEXT_T * VAR_3,
   SCIC_SDS_REMOTE_NODE_CONTEXT_CALLBACK VAR_4,
   void * VAR_5
)
{
   SMP_DISCOVER_RESPONSE_PROTOCOLS_T VAR_6;

   FUNC_2(
      VAR_3, VAR_4, VAR_5
         );





   FUNC_1(VAR_3->device, &VAR_6);

   if (
      (VAR_6.u.bits.attached_stp_target == 1)
         && !(VAR_3->device->is_direct_attached)
         )
   {
      FUNC_0(
         &VAR_3->state_machine,
         VAR_0
            );
   }
   else
   {
      FUNC_0(
         &VAR_3->state_machine,
         VAR_1
            );
   }

   return VAR_2;
}
