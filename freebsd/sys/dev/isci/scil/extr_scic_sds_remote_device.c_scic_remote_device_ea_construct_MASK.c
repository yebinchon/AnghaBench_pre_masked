
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_18__ {int parent; } ;
struct TYPE_15__ {scalar_t__ attached_stp_target; scalar_t__ attached_smp_target; scalar_t__ attached_ssp_target; } ;
struct TYPE_16__ {TYPE_2__ bits; } ;
struct TYPE_17__ {TYPE_3__ u; } ;
struct TYPE_22__ {int device_port_width; int owning_port; int connection_rate; TYPE_5__ parent; int ready_substate_machine; void* has_ready_substate_machine; TYPE_4__ target_protocols; TYPE_1__* rnc; } ;
struct TYPE_19__ {int negotiated_physical_link_rate; } ;
struct TYPE_20__ {TYPE_6__ sas1_1; } ;
struct TYPE_21__ {TYPE_7__ u2; } ;
struct TYPE_14__ {int remote_node_index; } ;
typedef TYPE_8__ SMP_RESPONSE_DISCOVER_T ;
typedef scalar_t__ SCI_STATUS ;
typedef scalar_t__ SCI_REMOTE_DEVICE_HANDLE_T ;
typedef TYPE_9__ SCIC_SDS_REMOTE_DEVICE_T ;
typedef int SCIC_SDS_CONTROLLER_T ;


 void* VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 void* VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *,int ,int ) ;
 scalar_t__ FUNC_4 (int *,TYPE_9__*,int *) ;
 int * FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_9__*,TYPE_8__*) ;
 int VAR_7 ;
 int VAR_8 ;

SCI_STATUS FUNC_8(
   SCI_REMOTE_DEVICE_HANDLE_T VAR_9,
   SMP_RESPONSE_DISCOVER_T * VAR_10
)
{
   SCI_STATUS VAR_11;

   SCIC_SDS_REMOTE_DEVICE_T *VAR_12;
   SCIC_SDS_CONTROLLER_T *VAR_13;

   VAR_12 = (SCIC_SDS_REMOTE_DEVICE_T *)VAR_9;

   FUNC_1((
      FUNC_2(VAR_12->owning_port),
      VAR_2 |
      VAR_1,
      "scic_remote_device_ea_sas_construct0x%x, 0x%x) enter\n",
      VAR_9, VAR_10
   ));

   VAR_13 = FUNC_5(VAR_12->owning_port);

   FUNC_7(
      VAR_12, VAR_10
   );

   VAR_11 = FUNC_4(
               VAR_13,
               VAR_12,
               &VAR_12->rnc->remote_node_index
            );

   if (VAR_11 == VAR_5)
   {
      if (VAR_12->target_protocols.u.bits.attached_ssp_target)
      {
         VAR_12->has_ready_substate_machine = VAR_0;
      }
      else if (VAR_12->target_protocols.u.bits.attached_smp_target)
      {
         VAR_12->has_ready_substate_machine = VAR_6;


         FUNC_3(
            &VAR_12->ready_substate_machine,
            &VAR_12->parent.parent,
            VAR_7,
            VAR_3
         );
      }
      else if (VAR_12->target_protocols.u.bits.attached_stp_target)
      {
         VAR_12->has_ready_substate_machine = VAR_6;

         FUNC_3(
            &VAR_12->ready_substate_machine,
            &VAR_12->parent.parent,
            VAR_8,
            VAR_4
         );
      }







      VAR_12->connection_rate = FUNC_0(
         FUNC_6( VAR_12->owning_port),
         VAR_10->u2.sas1_1.negotiated_physical_link_rate
         );


      VAR_12->device_port_width = 1;
   }

   return VAR_11;
}
