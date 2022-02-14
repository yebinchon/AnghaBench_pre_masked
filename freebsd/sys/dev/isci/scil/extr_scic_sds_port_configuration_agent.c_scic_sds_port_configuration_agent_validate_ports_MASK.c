
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int * phy_table; } ;
struct TYPE_8__ {TYPE_1__* phy_valid_port_range; } ;
struct TYPE_7__ {int max_index; int min_index; } ;
typedef int SCI_STATUS ;
typedef int SCI_SAS_ADDRESS_T ;
typedef TYPE_2__ SCIC_SDS_PORT_CONFIGURATION_AGENT_T ;
typedef TYPE_3__ SCIC_SDS_CONTROLLER_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static
SCI_STATUS FUNC_4(
   SCIC_SDS_CONTROLLER_T * VAR_4,
   SCIC_SDS_PORT_CONFIGURATION_AGENT_T * VAR_5
)
{

   SCI_SAS_ADDRESS_T VAR_6;
   SCI_SAS_ADDRESS_T VAR_7;

   FUNC_0((
      FUNC_1(VAR_4),
      VAR_0 | VAR_1,
      "scic_sds_port_configuration_agent_validate_ports(0x%08x, 0x%08x) enter\n",
      VAR_4, VAR_5
   ));



   if (
         (VAR_5->phy_valid_port_range[0].max_index != 0)
      || (VAR_5->phy_valid_port_range[1].max_index != 1)
      || (VAR_5->phy_valid_port_range[2].max_index != 2)
      || (VAR_5->phy_valid_port_range[3].max_index != 3)
      )
   {
      return VAR_2;
   }



   if (
         (VAR_5->phy_valid_port_range[0].min_index == 0)
      && (VAR_5->phy_valid_port_range[1].min_index == 0)
      && (VAR_5->phy_valid_port_range[2].min_index == 0)
      && (VAR_5->phy_valid_port_range[3].min_index == 0)
      )
   {
      return VAR_3;
   }





   if (VAR_5->phy_valid_port_range[2].min_index == 1)
   {
      return VAR_2;
   }




   FUNC_3(&VAR_4->phy_table[0], &VAR_6);
   FUNC_3(&VAR_4->phy_table[3], &VAR_7);

   if (FUNC_2(VAR_6, VAR_7) == 0)
   {
      return VAR_2;
   }




   if (
         (VAR_5->phy_valid_port_range[0].min_index == 0)
      && (VAR_5->phy_valid_port_range[1].min_index == 1)
      )
   {
      FUNC_3(&VAR_4->phy_table[0], &VAR_6);
      FUNC_3(&VAR_4->phy_table[2], &VAR_7);

      if (FUNC_2(VAR_6, VAR_7) == 0)
      {
         return VAR_2;
      }
   }




   if (
         (VAR_5->phy_valid_port_range[2].min_index == 2)
      && (VAR_5->phy_valid_port_range[3].min_index == 3)
      )
   {
      FUNC_3(&VAR_4->phy_table[1], &VAR_6);
      FUNC_3(&VAR_4->phy_table[3], &VAR_7);

      if (FUNC_2(VAR_6, VAR_7) == 0)
      {
         return VAR_2;
      }
   }


   return VAR_3;
}
