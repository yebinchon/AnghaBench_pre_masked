
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int (* link_up_handler ) (TYPE_1__*,TYPE_3__*,int *,int *) ;} ;
struct TYPE_7__ {TYPE_3__ port_agent; } ;
typedef int SCIC_SDS_PORT_T ;
typedef int SCIC_SDS_PHY_T ;
typedef TYPE_1__ SCIC_SDS_CONTROLLER_T ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_3__*,int *,int *) ;

__attribute__((used)) static
void FUNC_3(
   SCIC_SDS_CONTROLLER_T *VAR_0,
   SCIC_SDS_PORT_T *VAR_1,
   SCIC_SDS_PHY_T *VAR_2
)
{
   FUNC_0(VAR_0);

   VAR_0->port_agent.link_up_handler(
      VAR_0, &VAR_0->port_agent, VAR_1, VAR_2
   );


   FUNC_1(VAR_0);
}
