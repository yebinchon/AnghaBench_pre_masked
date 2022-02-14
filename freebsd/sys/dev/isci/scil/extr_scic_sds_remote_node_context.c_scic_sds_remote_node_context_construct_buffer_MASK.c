
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_12__ ;
typedef struct TYPE_19__ TYPE_10__ ;


struct TYPE_29__ {TYPE_12__* device; int remote_node_index; } ;
struct TYPE_27__ {scalar_t__ oaf_more_compatibility_features; scalar_t__ oaf_source_zone_group; scalar_t__ oaf_features; int oaf_connection_rate; scalar_t__ initial_arbitration_wait_time; int connection_inactivity_timeout; int connection_occupancy_timeout; scalar_t__ arbitration_wait_time; scalar_t__ function_number; void* is_remote_node_context; void* is_valid; void* check_bit; void* nexus_loss_timer_enable; void* remote_sas_address_lo; void* remote_sas_address_hi; int logical_port_index; int remote_node_port_width; int remote_node_index; } ;
struct TYPE_28__ {TYPE_7__ ssp; } ;
struct TYPE_25__ {int ssp_inactivity_timeout; int ssp_max_occupancy_timeout; int stp_inactivity_timeout; int stp_max_occupancy_timeout; } ;
struct TYPE_26__ {TYPE_5__ sds1; } ;
struct TYPE_22__ {scalar_t__ attached_stp_target; scalar_t__ attached_sata_device; } ;
struct TYPE_23__ {TYPE_2__ bits; } ;
struct TYPE_24__ {TYPE_3__ u; } ;
struct TYPE_21__ {int low; int high; } ;
struct TYPE_20__ {int connection_rate; TYPE_4__ target_protocols; TYPE_1__ device_address; int device_port_width; } ;
struct TYPE_19__ {TYPE_6__ user_parameters; } ;
typedef TYPE_8__ SCU_REMOTE_NODE_CONTEXT_T ;
typedef TYPE_9__ SCIC_SDS_REMOTE_NODE_CONTEXT_T ;
typedef TYPE_10__ SCIC_SDS_CONTROLLER_T ;


 void* VAR_0 ;
 void* FUNC_0 (int ) ;
 void* VAR_1 ;
 int FUNC_1 (TYPE_8__*,int,int) ;
 TYPE_8__* FUNC_2 (TYPE_10__*,int ) ;
 TYPE_10__* FUNC_3 (TYPE_12__*) ;
 int FUNC_4 (TYPE_12__*) ;
 int FUNC_5 (TYPE_12__*) ;

void FUNC_6(
   SCIC_SDS_REMOTE_NODE_CONTEXT_T * VAR_2
      )
{
   SCU_REMOTE_NODE_CONTEXT_T * VAR_3;
   SCIC_SDS_CONTROLLER_T * VAR_4;

   VAR_4 = FUNC_3(VAR_2->device);

   VAR_3 = FUNC_2(
      VAR_4, VAR_2->remote_node_index);

   FUNC_1(
      VAR_3,
      0x00,
      sizeof(SCU_REMOTE_NODE_CONTEXT_T)
         * FUNC_5(VAR_2->device)
         );

   VAR_3->ssp.remote_node_index = VAR_2->remote_node_index;
   VAR_3->ssp.remote_node_port_width = VAR_2->device->device_port_width;
   VAR_3->ssp.logical_port_index =
      FUNC_4(VAR_2->device);

   VAR_3->ssp.remote_sas_address_hi = FUNC_0(VAR_2->device->device_address.high);
   VAR_3->ssp.remote_sas_address_lo = FUNC_0(VAR_2->device->device_address.low);

   VAR_3->ssp.nexus_loss_timer_enable = VAR_1;
   VAR_3->ssp.check_bit = VAR_0;
   VAR_3->ssp.is_valid = VAR_0;
   VAR_3->ssp.is_remote_node_context = VAR_1;
   VAR_3->ssp.function_number = 0;

   VAR_3->ssp.arbitration_wait_time = 0;


   if (
      VAR_2->device->target_protocols.u.bits.attached_sata_device
         || VAR_2->device->target_protocols.u.bits.attached_stp_target
         )
   {
      VAR_3->ssp.connection_occupancy_timeout =
         VAR_4->user_parameters.sds1.stp_max_occupancy_timeout;
      VAR_3->ssp.connection_inactivity_timeout =
         VAR_4->user_parameters.sds1.stp_inactivity_timeout;
   }
   else
   {
      VAR_3->ssp.connection_occupancy_timeout =
         VAR_4->user_parameters.sds1.ssp_max_occupancy_timeout;
      VAR_3->ssp.connection_inactivity_timeout =
         VAR_4->user_parameters.sds1.ssp_inactivity_timeout;
   }

   VAR_3->ssp.initial_arbitration_wait_time = 0;


   VAR_3->ssp.oaf_connection_rate = VAR_2->device->connection_rate;
   VAR_3->ssp.oaf_features = 0;
   VAR_3->ssp.oaf_source_zone_group = 0;
   VAR_3->ssp.oaf_more_compatibility_features = 0;
}
