
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_21__ {int phy_index; } ;
struct TYPE_20__ {int active_phy_mask; int owning_controller; } ;
struct TYPE_17__ {int stp_target; } ;
struct TYPE_18__ {TYPE_1__ bits; } ;
struct TYPE_19__ {TYPE_2__ u; } ;
typedef TYPE_3__ SCI_SAS_IDENTIFY_ADDRESS_FRAME_PROTOCOLS_T ;
typedef TYPE_4__ SCIC_SDS_PORT_T ;
typedef TYPE_5__ SCIC_SDS_PHY_T ;
typedef int SCIC_SDS_CONTROLLER_T ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,TYPE_4__*,TYPE_5__*) ;
 int FUNC_3 (int *,TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*,TYPE_3__*) ;
 int * FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*,TYPE_5__*) ;

void FUNC_7(
   SCIC_SDS_PORT_T * VAR_2,
   SCIC_SDS_PHY_T * VAR_3,
   BOOL VAR_4,
   BOOL VAR_5
)
{
   SCIC_SDS_CONTROLLER_T * VAR_6;
   SCI_SAS_IDENTIFY_ADDRESS_FRAME_PROTOCOLS_T VAR_7;

   FUNC_0((
      FUNC_1(VAR_2),
      VAR_0,
      "scic_sds_port_activate_phy(0x%x,0x%x,0x%x) enter\n",
      VAR_2, VAR_3, VAR_4
   ));

   VAR_6 = FUNC_5(VAR_2);
   FUNC_4(VAR_3, &VAR_7);


   if (!VAR_7.u.bits.stp_target)
   {
      if (VAR_5 == VAR_1)
      {
         FUNC_6(VAR_2, VAR_3);
      }
   }

   VAR_2->active_phy_mask |= 1 << VAR_3->phy_index;

   FUNC_3(VAR_6, VAR_3);

   if (VAR_4 == VAR_1)
      FUNC_2(VAR_2->owning_controller, VAR_2, VAR_3);
}
