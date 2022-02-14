
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hwrm_port_phy_cfg_input {int member_0; } ;
struct TYPE_3__ {scalar_t__ autoneg; } ;
struct TYPE_4__ {TYPE_1__ flow_ctrl; } ;
struct bnxt_softc {int flags; TYPE_2__ link_info; } ;
typedef int req ;


 int VAR_0 ;
 int FUNC_0 (struct bnxt_softc*) ;
 int FUNC_1 (struct bnxt_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct bnxt_softc*,struct hwrm_port_phy_cfg_input*,int) ;
 int FUNC_3 (struct bnxt_softc*,struct hwrm_port_phy_cfg_input*,int ) ;
 int FUNC_4 (struct bnxt_softc*,struct hwrm_port_phy_cfg_input*) ;
 int FUNC_5 (struct bnxt_softc*,struct hwrm_port_phy_cfg_input*) ;
 int FUNC_6 (struct bnxt_softc*,struct hwrm_port_phy_cfg_input*) ;
 int FUNC_7 (struct bnxt_softc*) ;

int
FUNC_8(struct bnxt_softc *VAR_3, bool VAR_4,
    bool VAR_5, bool VAR_6)
{
 struct hwrm_port_phy_cfg_input VAR_7 = {0};
 int VAR_8;

 if (VAR_3->flags & VAR_0)
  return VAR_1;

 FUNC_3(VAR_3, &VAR_7, VAR_2);

 if (VAR_4) {
  FUNC_6(VAR_3, &VAR_7);

  if (VAR_3->link_info.flow_ctrl.autoneg)
   VAR_6 = 1;
 }

 if (VAR_6)
  FUNC_5(VAR_3, &VAR_7);

 if (VAR_5)
  FUNC_4(VAR_3, &VAR_7);

 FUNC_0(VAR_3);
 VAR_8 = FUNC_2(VAR_3, &VAR_7, sizeof(VAR_7));

 if (!VAR_8) {
  if (VAR_4) {




   if (!VAR_3->link_info.flow_ctrl.autoneg)
    FUNC_7(VAR_3);
  }
 }
 FUNC_1(VAR_3);
 return VAR_8;
}
