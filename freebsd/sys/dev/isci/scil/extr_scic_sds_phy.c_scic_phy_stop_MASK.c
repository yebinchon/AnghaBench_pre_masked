
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int parent; TYPE_2__* state_handlers; } ;
struct TYPE_5__ {int (* stop_handler ) (int *) ;} ;
struct TYPE_6__ {TYPE_1__ parent; } ;
typedef int SCI_STATUS ;
typedef scalar_t__ SCI_PHY_HANDLE_T ;
typedef TYPE_3__ SCIC_SDS_PHY_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *) ;

SCI_STATUS FUNC_3(
   SCI_PHY_HANDLE_T VAR_1
)
{
   SCIC_SDS_PHY_T *VAR_2;
   VAR_2 = (SCIC_SDS_PHY_T *)VAR_1;

   FUNC_0((
      FUNC_1(VAR_2),
      VAR_0,
      "scic_phy_stop(this_phy:0x%x)\n",
      VAR_2
   ));

   return VAR_2->state_handlers->parent.stop_handler(&VAR_2->parent);
}
