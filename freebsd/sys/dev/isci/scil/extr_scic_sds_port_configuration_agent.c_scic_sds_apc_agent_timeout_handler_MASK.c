
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int U32 ;
typedef int U16 ;
struct TYPE_11__ {int next_phy_to_start; scalar_t__ phy_startup_timer_pending; int * phy_table; } ;
struct TYPE_10__ {int phy_configured_mask; int phy_ready_mask; scalar_t__ timer_pending; } ;
typedef TYPE_1__ SCIC_SDS_PORT_CONFIGURATION_AGENT_T ;
typedef TYPE_2__ SCIC_SDS_CONTROLLER_T ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*,int *,scalar_t__) ;
 TYPE_1__* FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static
void FUNC_6(
   void * VAR_5
)
{
   U32 VAR_6;
   SCIC_SDS_PORT_CONFIGURATION_AGENT_T * VAR_7;
   SCIC_SDS_CONTROLLER_T * VAR_8 = (SCIC_SDS_CONTROLLER_T *)VAR_5;
   U16 VAR_9;

   VAR_7 = FUNC_3(VAR_8);

   FUNC_0((
      FUNC_1(VAR_8),
      VAR_1 | VAR_2,
      "scic_sds_apc_agent_timeout_handler(0x%08x) enter\n",
      VAR_8
   ));

   VAR_7->timer_pending = VAR_0;

   VAR_9 = ~VAR_7->phy_configured_mask & VAR_7->phy_ready_mask;

   if (VAR_9 != 0x00)
   {
      for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++)
      {
         if (VAR_9 & (1 << VAR_6))
         {
            FUNC_2(
               VAR_8, VAR_7, &VAR_8->phy_table[VAR_6], VAR_0
            );
         }
      }


      if (
            (VAR_7->phy_ready_mask == VAR_7->phy_configured_mask) &&
            (VAR_8->next_phy_to_start == VAR_3) &&
            (VAR_8->phy_startup_timer_pending == VAR_0)
         )
      {


         if (FUNC_4(VAR_8) == VAR_4)
         {
            FUNC_5(VAR_8);
         }
      }
   }
}
