
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elink_vars {int eee_status; int link_status; scalar_t__ check_kr2_recovery_cnt; scalar_t__ phy_flags; int mac_type; int flow_ctrl; int duplex; scalar_t__ line_speed; scalar_t__ link_up; scalar_t__ phy_link_up; } ;
struct elink_params {int req_fc_auto_adv; int link_flags; int port; int loopback_mode; int* req_duplex; int switch_cfg; int lane_config; int chip_id; int feature_config_flags; int num_phys; int rsrv; int eee_mode; int hw_led_mode; int multi_phy_config; int link_attr_sync; int lfa_base; int * req_flow_ctrl; int * req_line_speed; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;
typedef int elink_status_t ;


 int FUNC_0 (struct bxe_softc*) ;
 scalar_t__ FUNC_1 (struct bxe_softc*) ;
 scalar_t__ FUNC_2 (struct bxe_softc*) ;
 int FUNC_3 (struct bxe_softc*) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int FUNC_5 (struct bxe_softc*,char*) ;
 int FUNC_6 (struct bxe_softc*,char*,int) ;
 int FUNC_7 (struct bxe_softc*,char*,int ,int ) ;
 int FUNC_8 (struct bxe_softc*,char*,int,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_9 (struct elink_params*,struct elink_vars*) ;
 int FUNC_10 (struct bxe_softc*,scalar_t__,int) ;
 int FUNC_11 (struct elink_params*,struct elink_vars*,int) ;
 int FUNC_12 (struct elink_params*) ;
 int FUNC_13 (struct elink_params*,int) ;
 int FUNC_14 (struct elink_params*,struct elink_vars*) ;
 int FUNC_15 (struct elink_params*,struct elink_vars*) ;
 int FUNC_16 (struct elink_params*,struct elink_vars*) ;
 int FUNC_17 (struct elink_params*,struct elink_vars*) ;
 int FUNC_18 (struct elink_params*,struct elink_vars*) ;
 int FUNC_19 (struct elink_params*,struct elink_vars*) ;
 int FUNC_20 (struct elink_params*,struct elink_vars*) ;
 int FUNC_21 (struct elink_params*,struct elink_vars*) ;
 int FUNC_22 (struct elink_params*,struct elink_vars*) ;
 int FUNC_23 (struct elink_params*) ;
 int FUNC_24 (struct bxe_softc*,int) ;
 int FUNC_25 (struct elink_params*,int) ;
 int FUNC_26 (struct elink_params*,int ) ;
 int FUNC_27 (struct elink_params*,int ) ;
 int FUNC_28 (struct elink_params*) ;
 int FUNC_29 (struct elink_params*,struct elink_vars*) ;

elink_status_t FUNC_30(struct elink_params *VAR_15, struct elink_vars *VAR_16)
{
 int VAR_17;
 struct bxe_softc *VAR_18 = VAR_15->sc;
 FUNC_5(VAR_18, "Phy Initialization started\n");
 FUNC_7(VAR_18, "(1) req_speed %d, req_flowctrl %d\n",
     VAR_15->req_line_speed[0], VAR_15->req_flow_ctrl[0]);
 FUNC_7(VAR_18, "(2) req_speed %d, req_flowctrl %d\n",
     VAR_15->req_line_speed[1], VAR_15->req_flow_ctrl[1]);
 FUNC_6(VAR_18, "req_adv_flow_ctrl 0x%x\n", VAR_15->req_fc_auto_adv);
 VAR_16->link_status = 0;
 VAR_16->phy_link_up = 0;
 VAR_16->link_up = 0;
 VAR_16->line_speed = 0;
 VAR_16->duplex = VAR_0;
 VAR_16->flow_ctrl = VAR_3;
 VAR_16->mac_type = VAR_4;
 VAR_16->phy_flags = 0;
 VAR_16->check_kr2_recovery_cnt = 0;
 VAR_15->link_flags = VAR_9;

 FUNC_25(VAR_15, 1);
 FUNC_13(VAR_15, 1);

 VAR_17 = FUNC_12(VAR_15);

 FUNC_8(VAR_18, " params : port = %x, loopback_mode = %x req_duplex = %x\n",
                        VAR_15->port, VAR_15->loopback_mode, VAR_15->req_duplex[0]);
        FUNC_8(VAR_18, " params : switch_cfg = %x, lane_config = %x req_duplex[1] = %x\n",
                        VAR_15->switch_cfg, VAR_15->lane_config, VAR_15->req_duplex[1]);
        FUNC_8(VAR_18, " params : chip_id = %x, feature_config_flags = %x, num_phys = %x\n",
                       VAR_15->chip_id, VAR_15->feature_config_flags, VAR_15->num_phys);
        FUNC_8(VAR_18, " params : rsrv = %x, eee_mode = %x, hw_led_mode = x\n",
                        VAR_15->rsrv, VAR_15->eee_mode, VAR_15->hw_led_mode);
        FUNC_8(VAR_18, " params : multi_phy = %x, req_fc_auto_adv = %x, link_flags = %x\n",
                        VAR_15->multi_phy_config, VAR_15->req_fc_auto_adv, VAR_15->link_flags);
        FUNC_7(VAR_18, " params : lfa_base = %x, link_attr = %x\n",
                        VAR_15->lfa_base, VAR_15->link_attr_sync);
 if (VAR_17 == 0) {
  FUNC_5(VAR_18, "Link Flap Avoidance in progress\n");
  return FUNC_9(VAR_15, VAR_16);
 }

 FUNC_6(VAR_18, "Cannot avoid link flap lfa_sta=0x%x\n",
         VAR_17);
 FUNC_11(VAR_15, VAR_16, VAR_17);


 FUNC_10(VAR_18, VAR_14 + VAR_15->port*4,
         (VAR_8 |
   VAR_7 |
   VAR_6 |
   VAR_5));





 FUNC_14(VAR_15, VAR_16);

 if (VAR_15->feature_config_flags & VAR_2)
  VAR_16->link_status |= VAR_13;

 if ((VAR_15->num_phys == 0) &&
     !FUNC_3(VAR_18)) {
  FUNC_5(VAR_18, "No phy found for initialization !!\n");
  return VAR_10;
 }
 FUNC_29(VAR_15, VAR_16);

 FUNC_6(VAR_18, "Num of phys on board: %d\n", VAR_15->num_phys);
 switch (VAR_15->loopback_mode) {
 case 133:
  FUNC_15(VAR_15, VAR_16);
  break;
 case 132:
  FUNC_16(VAR_15, VAR_16);
  break;
 case 128:
  FUNC_21(VAR_15, VAR_16);
  break;
 case 130:
  FUNC_19(VAR_15, VAR_16);
  break;
 case 129:
 case 131:
  FUNC_20(VAR_15, VAR_16);
  break;
 default:
  if (!FUNC_0(VAR_18)) {
   if (VAR_15->switch_cfg == VAR_12)
    FUNC_28(VAR_15);
   else
    FUNC_24(VAR_18, VAR_15->port);
  }
  FUNC_22(VAR_15, VAR_16);
  FUNC_4(1000 * 30);
  FUNC_23(VAR_15);
  break;
 }
 FUNC_26(VAR_15, VAR_16->link_status);

 FUNC_27(VAR_15, VAR_16->eee_status);
 return VAR_11;
}
