
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int U16 ;
struct TYPE_7__ {int reserved_rni; int physical_port_index; int owning_controller; } ;
struct TYPE_6__ {int initiator_request; int connection_rate; int do_not_dma_ssp_good_response; int task_phase; scalar_t__ address_modifier; scalar_t__ block_guard_enable; scalar_t__ timeout_enable; scalar_t__ control_frame; scalar_t__ strict_ordering; scalar_t__ link_layer_control; scalar_t__ command_code; int remote_node_index; int context_type; int valid; int task_index; int protocol_type; int logical_port_index; scalar_t__ protocol_engine_index; scalar_t__ priority; scalar_t__ abort; } ;
typedef TYPE_1__ SCU_TASK_CONTEXT_T ;
typedef TYPE_2__ SCIC_SDS_PORT_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 TYPE_1__* FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static
void FUNC_3(
   SCIC_SDS_PORT_T *VAR_3,
   U16 VAR_4
)
{
   SCU_TASK_CONTEXT_T * VAR_5;

   VAR_5 = FUNC_1(VAR_3->owning_controller, VAR_4);

   FUNC_0(VAR_5, 0, sizeof(SCU_TASK_CONTEXT_T));

   VAR_5->abort = 0;
   VAR_5->priority = 0;
   VAR_5->initiator_request = 1;
   VAR_5->connection_rate = 1;
   VAR_5->protocol_engine_index = 0;
   VAR_5->logical_port_index = VAR_3->physical_port_index;
   VAR_5->protocol_type = VAR_0;
   VAR_5->task_index = FUNC_2(VAR_4);
   VAR_5->valid = VAR_2;
   VAR_5->context_type = VAR_1;

   VAR_5->remote_node_index = VAR_3->reserved_rni;
   VAR_5->command_code = 0;

   VAR_5->link_layer_control = 0;
   VAR_5->do_not_dma_ssp_good_response = 1;
   VAR_5->strict_ordering = 0;
   VAR_5->control_frame = 0;
   VAR_5->timeout_enable = 0;
   VAR_5->block_guard_enable = 0;

   VAR_5->address_modifier = 0;

   VAR_5->task_phase = 0x01;
}
