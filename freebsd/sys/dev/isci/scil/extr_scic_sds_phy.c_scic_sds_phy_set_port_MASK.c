
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * owning_port; scalar_t__ bcn_received_while_port_unassigned; } ;
typedef int SCIC_SDS_PORT_T ;
typedef TYPE_1__ SCIC_SDS_PHY_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*) ;

void FUNC_1(
   SCIC_SDS_PHY_T * VAR_1,
   SCIC_SDS_PORT_T * VAR_2
)
{
   VAR_1->owning_port = VAR_2;

   if (VAR_1->bcn_received_while_port_unassigned)
   {
      VAR_1->bcn_received_while_port_unassigned = VAR_0;
      FUNC_0(VAR_1->owning_port, VAR_1);
   }
}
