
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_3__ {int timer; scalar_t__ timer_pending; } ;
typedef TYPE_1__ SCIC_SDS_PORT_CONFIGURATION_AGENT_T ;
typedef int SCIC_SDS_PHY_T ;
typedef int SCIC_SDS_CONTROLLER_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static
void FUNC_4(
   SCIC_SDS_CONTROLLER_T * VAR_4,
   SCIC_SDS_PORT_CONFIGURATION_AGENT_T * VAR_5,
   SCIC_SDS_PHY_T * VAR_6,
   U32 VAR_7
)
{
   FUNC_0((
      FUNC_1(VAR_4),
      VAR_0 | VAR_2 | VAR_1,
      "scic_sds_apc_agent_start_timer(0x%08x, 0x%08x, 0x%08x, 0x%08x) enter\n",
      VAR_4, VAR_5, VAR_6, VAR_7
   ));

   if (VAR_5->timer_pending)
   {
      FUNC_3(VAR_4, VAR_5->timer);
   }

   VAR_5->timer_pending = VAR_3;

   FUNC_2(VAR_4, VAR_5->timer, VAR_7);
}
