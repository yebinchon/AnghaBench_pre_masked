
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t U8 ;
struct TYPE_11__ {int * phy_table; } ;
struct TYPE_10__ {TYPE_1__* phy_valid_port_range; } ;
struct TYPE_9__ {size_t min_index; size_t max_index; } ;
typedef int SCI_STATUS ;
typedef int SCI_SAS_ADDRESS_T ;
typedef TYPE_2__ SCIC_SDS_PORT_CONFIGURATION_AGENT_T ;
typedef TYPE_3__ SCIC_SDS_CONTROLLER_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 size_t VAR_2 ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_3__*,TYPE_2__*) ;

__attribute__((used)) static
SCI_STATUS FUNC_5(
   SCIC_SDS_CONTROLLER_T * VAR_3,
   SCIC_SDS_PORT_CONFIGURATION_AGENT_T * VAR_4
)
{
   U8 VAR_5;
   U8 VAR_6;
   SCI_SAS_ADDRESS_T VAR_7;
   SCI_SAS_ADDRESS_T VAR_8;

   FUNC_0((
      FUNC_1(VAR_3),
      VAR_0 | VAR_1,
      "scic_sds_apc_agent_validate_phy_configuration(0x%08x, 0x%08x) enter\n",
      VAR_3, VAR_4
   ));

   VAR_5 = 0;

   while (VAR_5 < VAR_2)
   {
      VAR_6 = VAR_5;


      FUNC_3(
         &VAR_3->phy_table[VAR_5], &VAR_7
      );

      while (++VAR_5 < VAR_2)
      {
         FUNC_3(
            &VAR_3->phy_table[VAR_5], &VAR_8
         );


         if (FUNC_2(VAR_7, VAR_8) == 0)
         {
            VAR_4->phy_valid_port_range[VAR_5].min_index = VAR_6;
            VAR_4->phy_valid_port_range[VAR_5].max_index = VAR_5;
         }
         else
         {
            VAR_4->phy_valid_port_range[VAR_5].min_index = VAR_5;
            VAR_4->phy_valid_port_range[VAR_5].max_index = VAR_5;
            break;
         }
      }
   }

   return FUNC_4(VAR_3, VAR_4);
}
