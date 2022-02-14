
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* state_handlers; } ;
struct TYPE_5__ {int (* link_down_handler ) (TYPE_2__*,int *) ;} ;
typedef TYPE_2__ SCIC_SDS_PORT_T ;
typedef int SCIC_SDS_PHY_T ;


 int FUNC_0 (TYPE_2__*,int *) ;

void FUNC_1(
   SCIC_SDS_PORT_T *VAR_0,
   SCIC_SDS_PHY_T *VAR_1
)
{
   VAR_0->state_handlers->link_down_handler(VAR_0, VAR_1);
}
