
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hwrm_port_phy_cfg_input {int enables; int force_pause; int auto_pause; } ;
struct TYPE_2__ {scalar_t__ tx; scalar_t__ rx; scalar_t__ autoneg; } ;
struct bnxt_link_info {TYPE_1__ flow_ctrl; } ;
struct bnxt_softc {struct bnxt_link_info link_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct bnxt_softc *VAR_7,
    struct hwrm_port_phy_cfg_input *VAR_8)
{
 struct bnxt_link_info *VAR_9 = &VAR_7->link_info;

 if (VAR_9->flow_ctrl.autoneg) {
  VAR_8->auto_pause =
      VAR_0;
  if (VAR_9->flow_ctrl.rx)
   VAR_8->auto_pause |=
       VAR_1;
  if (VAR_9->flow_ctrl.tx)
   VAR_8->auto_pause |=
       VAR_2;
  VAR_8->enables |=
      FUNC_0(VAR_3);
 } else {
  if (VAR_9->flow_ctrl.rx)
   VAR_8->force_pause |=
       VAR_5;
  if (VAR_9->flow_ctrl.tx)
   VAR_8->force_pause |=
       VAR_6;
  VAR_8->enables |=
   FUNC_0(VAR_4);
 }
}
