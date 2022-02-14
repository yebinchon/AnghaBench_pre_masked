
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int U8 ;
struct TYPE_7__ {int parent; } ;
struct TYPE_6__ {TYPE_5__ parent; int starting_substate_machine; int * error_counter; int phy_type; int * sata_timeout_timer; int max_negotiated_speed; int * link_layer_registers; int protocol; int bcn_received_while_port_unassigned; int phy_index; int * owning_port; } ;
typedef int SCIC_SDS_PORT_T ;
typedef TYPE_1__ SCIC_SDS_PHY_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_5__*,int ,int ) ;
 int FUNC_3 (int *,int *,int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_6(
   SCIC_SDS_PHY_T *VAR_6,
   SCIC_SDS_PORT_T *VAR_7,
   U8 VAR_8
)
{


   FUNC_2(
      &VAR_6->parent,
      FUNC_1(VAR_7),
      VAR_5
      );


   VAR_6->owning_port = VAR_7;
   VAR_6->phy_index = VAR_8;
   VAR_6->bcn_received_while_port_unassigned = VAR_0;
   VAR_6->protocol = VAR_1;
   VAR_6->link_layer_registers = ((void*)0);
   VAR_6->max_negotiated_speed = VAR_3;
   VAR_6->sata_timeout_timer = ((void*)0);


   FUNC_0(&VAR_6->phy_type, 0, sizeof(VAR_6->phy_type));


   FUNC_0(VAR_6->error_counter, 0, sizeof(VAR_6->error_counter));


   FUNC_3(
      &VAR_6->starting_substate_machine,
      &VAR_6->parent.parent,
      VAR_4,
      VAR_2
      );
}
