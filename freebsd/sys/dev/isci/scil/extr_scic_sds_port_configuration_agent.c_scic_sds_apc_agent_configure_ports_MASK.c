
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef enum SCIC_SDS_APC_ACTIVITY { ____Placeholder_SCIC_SDS_APC_ACTIVITY } SCIC_SDS_APC_ACTIVITY ;
typedef scalar_t__ U8 ;
struct TYPE_18__ {size_t phy_index; } ;
struct TYPE_17__ {int phy_configured_mask; TYPE_1__* phy_valid_port_range; } ;
struct TYPE_16__ {int active_phy_mask; int physical_port_index; } ;
struct TYPE_15__ {scalar_t__ min_index; scalar_t__ max_index; } ;
typedef int SCI_STATUS ;
typedef scalar_t__ SCI_PORT_HANDLE_T ;
typedef TYPE_2__ SCIC_SDS_PORT_T ;
typedef TYPE_3__ SCIC_SDS_PORT_CONFIGURATION_AGENT_T ;
typedef TYPE_4__ SCIC_SDS_PHY_T ;
typedef int SCIC_SDS_CONTROLLER_T ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;



 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__,scalar_t__*) ;
 int FUNC_3 (int *,TYPE_3__*,TYPE_4__*,int ) ;
 int FUNC_4 (TYPE_2__*,TYPE_4__*) ;
 TYPE_2__* FUNC_5 (int *,TYPE_4__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,size_t) ;

__attribute__((used)) static
void FUNC_7(
   SCIC_SDS_CONTROLLER_T * VAR_7,
   SCIC_SDS_PORT_CONFIGURATION_AGENT_T * VAR_8,
   SCIC_SDS_PHY_T * VAR_9,
   BOOL VAR_10
)
{
   U8 VAR_11;
   SCI_STATUS VAR_12;
   SCIC_SDS_PORT_T * VAR_13;
   SCI_PORT_HANDLE_T VAR_14;
   enum SCIC_SDS_APC_ACTIVITY VAR_15 = 129;

   FUNC_0((
      FUNC_1(VAR_7),
      VAR_1 | VAR_3 | VAR_2,
      "scic_sds_apc_agent_configure_ports(0x%08x, 0x%08x, 0x%08x, %d) enter\n",
      VAR_7, VAR_8, VAR_9, VAR_10
   ));

   VAR_13 = FUNC_5(VAR_7, VAR_9);

   if (VAR_13 != VAR_5)
   {
      if (FUNC_6(VAR_13, VAR_9->phy_index))
         VAR_15 = 130;
      else
         VAR_15 = 129;
   }
   else
   {





      for (
             VAR_11 = VAR_8->phy_valid_port_range[VAR_9->phy_index].min_index;
             VAR_11 <= VAR_8->phy_valid_port_range[VAR_9->phy_index].max_index;
             VAR_11++
          )
      {
         FUNC_2(VAR_7, VAR_11, &VAR_14);

         VAR_13 = (SCIC_SDS_PORT_T *)VAR_14;


         if (FUNC_6(VAR_13, VAR_9->phy_index))
         {



            if (VAR_13->active_phy_mask > (1 << VAR_9->phy_index))
            {
               VAR_15 = 129;
               break;
            }




            if (VAR_13->physical_port_index == VAR_9->phy_index)
            {




               if (VAR_15 != 128)
               {
                  VAR_15 = 130;
               }

               break;
            }




            if (VAR_13->active_phy_mask == 0)
            {
               VAR_15 = 128;
            }
         }
         else if (VAR_13->active_phy_mask != 0)
         {



            VAR_15 = 129;
         }
      }
   }







   if (
         (VAR_10 == VAR_0)
      && (VAR_15 == 128)
      )
   {
      VAR_15 = 130;
   }

   switch (VAR_15)
   {
   case 130:
      VAR_12 = FUNC_4(VAR_13, VAR_9);

      if (VAR_12 == VAR_6)
      {
         VAR_8->phy_configured_mask |= (1 << VAR_9->phy_index);
      }
      break;

   case 128:
      FUNC_3(
         VAR_7, VAR_8, VAR_9, VAR_4
      );
      break;

   case 129:
   default:

      break;
   }
}
