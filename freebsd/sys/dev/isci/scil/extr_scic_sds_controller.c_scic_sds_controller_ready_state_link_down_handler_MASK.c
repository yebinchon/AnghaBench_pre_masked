
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int (* link_down_handler ) (TYPE_1__*,TYPE_3__*,int *,int *) ;} ;
struct TYPE_5__ {TYPE_3__ port_agent; } ;
typedef int SCIC_SDS_PORT_T ;
typedef int SCIC_SDS_PHY_T ;
typedef TYPE_1__ SCIC_SDS_CONTROLLER_T ;


 int FUNC_0 (TYPE_1__*,TYPE_3__*,int *,int *) ;

__attribute__((used)) static
void FUNC_1(
   SCIC_SDS_CONTROLLER_T *VAR_0,
   SCIC_SDS_PORT_T *VAR_1,
   SCIC_SDS_PHY_T *VAR_2
)
{
   VAR_0->port_agent.link_down_handler(
      VAR_0, &VAR_0->port_agent, VAR_1, VAR_2
   );
}
