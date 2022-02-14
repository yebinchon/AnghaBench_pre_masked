
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct hwrm_port_phy_qcfg_output {scalar_t__ link; int auto_pause; int force_pause; int phy_maj; int phy_min; int phy_bld; int eee_config_phy_addr; int xcvr_pkg_type; int phy_type; int media_type; int phy_vendor_partnumber; int phy_vendor_name; int preemphasis; int auto_link_speed_mask; int support_speeds; int auto_link_speed; int force_link_speed; int link_speed; int duplex_cfg; scalar_t__ auto_mode; } ;
struct hwrm_port_phy_qcfg_input {int member_0; } ;
struct TYPE_4__ {scalar_t__ idi_vaddr; } ;
struct TYPE_5__ {int autoneg; int tx; int rx; } ;
struct bnxt_link_info {scalar_t__ phy_link_status; int* phy_ver; int phy_addr; int transceiver; int phy_type; int media_type; int preemphasis; void* auto_link_speeds; void* support_speeds; void* auto_link_speed; void* force_link_speed; void* link_speed; int duplex_setting; TYPE_2__ flow_ctrl; scalar_t__ auto_mode; int duplex; } ;
struct bnxt_softc {TYPE_3__* ver_info; TYPE_1__ hwrm_cmd_resp; struct bnxt_link_info link_info; } ;
typedef int req ;
struct TYPE_6__ {int phy_partnumber; int phy_vendor; int phy_ver; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnxt_softc*) ;
 int FUNC_1 (struct bnxt_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct bnxt_softc*,struct hwrm_port_phy_qcfg_input*,int) ;
 int FUNC_3 (struct bnxt_softc*,struct hwrm_port_phy_qcfg_input*,int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int,char*,int,int,int) ;
 int FUNC_7 (int ,int ,int ) ;

int
FUNC_8(struct bnxt_softc *VAR_7)
{
 struct bnxt_link_info *VAR_8 = &VAR_7->link_info;
 struct hwrm_port_phy_qcfg_input VAR_9 = {0};
 struct hwrm_port_phy_qcfg_output *VAR_10 =
     (void *)VAR_7->hwrm_cmd_resp.idi_vaddr;
 int VAR_11 = 0;

 FUNC_0(VAR_7);
 FUNC_3(VAR_7, &VAR_9, VAR_4);

 VAR_11 = FUNC_2(VAR_7, &VAR_9, sizeof(VAR_9));
 if (VAR_11)
  goto exit;

 VAR_8->phy_link_status = VAR_10->link;
 VAR_8->duplex = VAR_10->duplex_cfg;
 VAR_8->auto_mode = VAR_10->auto_mode;
 VAR_8->flow_ctrl.autoneg = 0;
 VAR_8->flow_ctrl.tx = 0;
 VAR_8->flow_ctrl.rx = 0;

 if ((VAR_10->auto_mode) &&
            (VAR_10->auto_pause & VAR_0)) {
   VAR_8->flow_ctrl.autoneg = 1;
 }

 if (VAR_8->flow_ctrl.autoneg) {
  if (VAR_10->auto_pause & VAR_3)
   VAR_8->flow_ctrl.tx = 1;
  if (VAR_10->auto_pause & VAR_2)
   VAR_8->flow_ctrl.rx = 1;
 } else {
  if (VAR_10->force_pause & VAR_3)
   VAR_8->flow_ctrl.tx = 1;
  if (VAR_10->force_pause & VAR_2)
   VAR_8->flow_ctrl.rx = 1;
 }

 VAR_8->duplex_setting = VAR_10->duplex_cfg;
 if (VAR_8->phy_link_status == VAR_5)
  VAR_8->link_speed = FUNC_4(VAR_10->link_speed);
 else
  VAR_8->link_speed = 0;
 VAR_8->force_link_speed = FUNC_4(VAR_10->force_link_speed);
 VAR_8->auto_link_speed = FUNC_4(VAR_10->auto_link_speed);
 VAR_8->support_speeds = FUNC_4(VAR_10->support_speeds);
 VAR_8->auto_link_speeds = FUNC_4(VAR_10->auto_link_speed_mask);
 VAR_8->preemphasis = FUNC_5(VAR_10->preemphasis);
 VAR_8->phy_ver[0] = VAR_10->phy_maj;
 VAR_8->phy_ver[1] = VAR_10->phy_min;
 VAR_8->phy_ver[2] = VAR_10->phy_bld;
 FUNC_6(VAR_7->ver_info->phy_ver, sizeof(VAR_7->ver_info->phy_ver),
     "%d.%d.%d", VAR_8->phy_ver[0], VAR_8->phy_ver[1],
     VAR_8->phy_ver[2]);
 FUNC_7(VAR_7->ver_info->phy_vendor, VAR_10->phy_vendor_name,
     VAR_1);
 FUNC_7(VAR_7->ver_info->phy_partnumber, VAR_10->phy_vendor_partnumber,
     VAR_1);
 VAR_8->media_type = VAR_10->media_type;
 VAR_8->phy_type = VAR_10->phy_type;
 VAR_8->transceiver = VAR_10->xcvr_pkg_type;
 VAR_8->phy_addr = VAR_10->eee_config_phy_addr &
     VAR_6;

exit:
 FUNC_1(VAR_7);
 return VAR_11;
}
