
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {TYPE_1__* state_handlers; } ;
struct TYPE_11__ {int phy_index; } ;
struct TYPE_10__ {int (* link_down_handler ) (TYPE_3__*,int *,TYPE_2__*) ;} ;
typedef int SCIC_SDS_PORT_T ;
typedef TYPE_2__ SCIC_SDS_PHY_T ;
typedef TYPE_3__ SCIC_SDS_CONTROLLER_T ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int *,TYPE_2__*) ;

void FUNC_5(
   SCIC_SDS_CONTROLLER_T *VAR_1,
   SCIC_SDS_PORT_T *VAR_2,
   SCIC_SDS_PHY_T *VAR_3
)
{
   if (VAR_1->state_handlers->link_down_handler != ((void*)0))
   {
      VAR_1->state_handlers->link_down_handler(
         VAR_1, VAR_2, VAR_3);
   }
   else
   {
      FUNC_0((
         FUNC_1(VAR_1),
         VAR_0,
         "SCIC Controller linkdown event from phy %d in unexpected state %d\n",
         VAR_3->phy_index,
         FUNC_2(
            FUNC_3(VAR_1))
      ));
   }
}
