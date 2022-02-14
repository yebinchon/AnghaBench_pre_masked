
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int parent; TYPE_2__* state_handlers; } ;
struct TYPE_6__ {int (* reset_handler ) (int *) ;} ;
struct TYPE_7__ {TYPE_1__ parent; } ;
typedef int SCI_STATUS ;
typedef TYPE_3__ SCIC_SDS_PHY_T ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *) ;

SCI_STATUS FUNC_3(
   SCIC_SDS_PHY_T * VAR_1
)
{
   FUNC_0((
      FUNC_1(VAR_1),
      VAR_0,
      "scic_sds_phy_reset(this_phy:0x%08x)\n",
      VAR_1
   ));

   return VAR_1->state_handlers->parent.reset_handler(
                                             &VAR_1->parent
                                           );
}
