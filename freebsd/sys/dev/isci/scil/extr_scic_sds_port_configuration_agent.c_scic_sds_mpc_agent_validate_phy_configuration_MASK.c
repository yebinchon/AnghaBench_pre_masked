
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef size_t U8 ;
typedef int U32 ;
struct TYPE_17__ {TYPE_1__* ports; } ;
struct TYPE_18__ {TYPE_2__ sds1; } ;
struct TYPE_22__ {int * phy_table; int * port_table; TYPE_3__ oem_parameters; } ;
struct TYPE_21__ {TYPE_4__* phy_valid_port_range; } ;
struct TYPE_20__ {scalar_t__ low; scalar_t__ high; } ;
struct TYPE_19__ {size_t min_index; size_t max_index; } ;
struct TYPE_16__ {int phy_mask; } ;
typedef int SCI_STATUS ;
typedef TYPE_5__ SCI_SAS_ADDRESS_T ;
typedef TYPE_6__ SCIC_SDS_PORT_CONFIGURATION_AGENT_T ;
typedef TYPE_7__ SCIC_SDS_CONTROLLER_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (TYPE_7__*) ;
 scalar_t__ FUNC_2 (TYPE_5__,TYPE_5__) ;
 int FUNC_3 (int *,TYPE_5__*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (TYPE_7__*,TYPE_6__*) ;

__attribute__((used)) static
SCI_STATUS FUNC_6(
   SCIC_SDS_CONTROLLER_T * VAR_5,
   SCIC_SDS_PORT_CONFIGURATION_AGENT_T * VAR_6
)
{
   U32 VAR_7;
   U32 VAR_8;
   SCI_SAS_ADDRESS_T VAR_9;
   SCI_SAS_ADDRESS_T VAR_10;
   U8 VAR_11;
   U8 VAR_12;

   VAR_8 = 0;
   VAR_9.high = 0;
   VAR_9.low = 0;

   FUNC_0((
      FUNC_1(VAR_5),
      VAR_0 | VAR_1,
      "scic_sds_mpc_agent_validate_phy_configuration(0x%08x, 0x%08x) enter\n",
      VAR_5, VAR_6
   ));

   for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++)
   {
      VAR_7 = VAR_5->oem_parameters.sds1.ports[VAR_11].phy_mask;

      if (VAR_7 != 0)
      {


         if ((VAR_7 & ~VAR_8) == 0)
         {
            return VAR_2;
         }


         for (VAR_12 = 0; VAR_12 < VAR_3; VAR_12++)
         {
            if ((1 << VAR_12) & VAR_7)
            {
               FUNC_3(
                  &VAR_5->phy_table[VAR_12], &VAR_9
               );




               VAR_6->phy_valid_port_range[VAR_12].min_index = VAR_11;
               VAR_6->phy_valid_port_range[VAR_12].max_index = VAR_12;

               if (VAR_12 != VAR_11)
               {
                  return VAR_2;
               }

               break;
            }
         }





         while (VAR_12 < VAR_3)
         {
            if ((1 << VAR_12) & VAR_7)
            {
               FUNC_3(
                  &VAR_5->phy_table[VAR_12], &VAR_10
               );

               if (FUNC_2(VAR_9, VAR_10) != 0)
               {


                  return VAR_2;
               }

               VAR_6->phy_valid_port_range[VAR_12].min_index = VAR_11;
               VAR_6->phy_valid_port_range[VAR_12].max_index = VAR_12;

               FUNC_4(
                  &VAR_5->port_table[VAR_11],
                  &VAR_5->phy_table[VAR_12]
               );

               VAR_8 |= (1 << VAR_12);
            }

            VAR_12++;
         }
      }
   }

   return FUNC_5(VAR_5, VAR_6);
}
