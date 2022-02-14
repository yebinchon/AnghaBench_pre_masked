
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t U16 ;
struct TYPE_10__ {int physical_port_index; TYPE_1__* owning_controller; } ;
struct TYPE_8__ {size_t remote_node_index; int remote_node_port_width; scalar_t__ arbitration_wait_time; scalar_t__ function_number; void* is_remote_node_context; void* is_valid; void* check_bit; void* nexus_loss_timer_enable; int logical_port_index; scalar_t__ remote_sas_address_lo; scalar_t__ remote_sas_address_hi; } ;
struct TYPE_9__ {TYPE_2__ ssp; } ;
struct TYPE_7__ {TYPE_3__* remote_node_context_table; } ;
typedef TYPE_3__ SCU_REMOTE_NODE_CONTEXT_T ;
typedef TYPE_4__ SCIC_SDS_PORT_T ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ,int) ;

__attribute__((used)) static
void FUNC_1(
   SCIC_SDS_PORT_T *VAR_2,
   U16 VAR_3
)
{
   SCU_REMOTE_NODE_CONTEXT_T * VAR_4;

   VAR_4 = &(VAR_2->owning_controller->remote_node_context_table[VAR_3]);

   FUNC_0(VAR_4, 0, sizeof(SCU_REMOTE_NODE_CONTEXT_T));

   VAR_4->ssp.remote_sas_address_hi = 0;
   VAR_4->ssp.remote_sas_address_lo = 0;

   VAR_4->ssp.remote_node_index = VAR_3;
   VAR_4->ssp.remote_node_port_width = 1;
   VAR_4->ssp.logical_port_index = VAR_2->physical_port_index;

   VAR_4->ssp.nexus_loss_timer_enable = VAR_0;
   VAR_4->ssp.check_bit = VAR_0;
   VAR_4->ssp.is_valid = VAR_1;
   VAR_4->ssp.is_remote_node_context = VAR_1;
   VAR_4->ssp.function_number = 0;
   VAR_4->ssp.arbitration_wait_time = 0;
}
