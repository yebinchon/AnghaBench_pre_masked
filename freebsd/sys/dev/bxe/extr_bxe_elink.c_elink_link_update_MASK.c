
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct elink_vars {int link_status; scalar_t__ line_speed; int phy_flags; size_t flow_ctrl; scalar_t__ duplex; scalar_t__ phy_link_up; size_t link_up; int fault_detected; size_t eee_status; int mac_type; int ieee_fc; scalar_t__ check_kr2_recovery_cnt; size_t periodic_flags; int aeu_int_mask; scalar_t__ rx_tx_asic_rst; scalar_t__ turn_to_run_wc_rt; scalar_t__ rsrv2; } ;
struct elink_phy {size_t (* read_status ) (struct elink_phy*,struct elink_params*,struct elink_vars*) ;int supported; int flags; int (* config_init ) (struct elink_phy*,struct elink_params*,struct elink_vars*) ;int (* phy_specific_func ) (struct elink_phy*,struct elink_params*,int ) ;} ;
struct elink_params {size_t port; size_t num_phys; size_t multi_phy_config; int feature_config_flags; struct elink_phy* phy; struct bxe_softc* sc; } ;
struct bxe_softc {int dummy; } ;
typedef int elink_status_t ;


 int FUNC_0 (struct bxe_softc*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct bxe_softc*,char*) ;
 int FUNC_3 (struct bxe_softc*,char*,size_t) ;
 int FUNC_4 (struct bxe_softc*,char*,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct bxe_softc*,char*,size_t,int,scalar_t__) ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_6 (struct elink_params*) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 size_t VAR_28 ;
 int VAR_29 ;



 scalar_t__ FUNC_7 (struct bxe_softc*,scalar_t__) ;
 int FUNC_8 (struct bxe_softc*,scalar_t__,int ) ;
 scalar_t__ FUNC_9 (struct bxe_softc*) ;
 int FUNC_10 (struct bxe_softc*,int ,int ) ;
 int FUNC_11 (struct elink_params*,int ) ;
 int FUNC_12 (struct elink_params*,struct elink_vars*,size_t) ;
 int FUNC_13 (struct elink_params*) ;
 int FUNC_14 (struct bxe_softc*,size_t,int) ;
 int FUNC_15 (struct elink_params*,struct elink_phy*) ;
 int FUNC_16 (struct elink_params*,struct elink_vars*) ;
 int FUNC_17 (struct elink_params*,struct elink_vars*,size_t) ;
 size_t FUNC_18 (struct elink_phy*,struct elink_params*,struct elink_vars*) ;
 size_t FUNC_19 (struct elink_phy*,struct elink_params*,struct elink_vars*) ;
 int FUNC_20 (struct elink_phy*,struct elink_params*,int ) ;
 int FUNC_21 (struct elink_phy*,struct elink_params*,struct elink_vars*) ;

elink_status_t FUNC_22(struct elink_params *VAR_30, struct elink_vars *VAR_31)
{
 struct bxe_softc *VAR_32 = VAR_30->sc;
 struct elink_vars VAR_33[VAR_11];
 uint8_t VAR_34 = VAR_30->port;
 uint8_t VAR_35, VAR_36;
 uint32_t VAR_37 = VAR_31->link_status;
 uint8_t VAR_38 = 0, VAR_39;
 elink_status_t VAR_40 = VAR_14;
 uint16_t VAR_41 = 0, VAR_42 = VAR_31->line_speed;
 uint8_t VAR_43 = VAR_9;
 VAR_31->phy_flags &= ~VAR_27;
 VAR_31->link_status &= ~VAR_10;
 for (VAR_36 = VAR_9; VAR_36 < VAR_30->num_phys;
       VAR_36++) {
  VAR_33[VAR_36].flow_ctrl = 0;
  VAR_33[VAR_36].link_status = 0;
  VAR_33[VAR_36].line_speed = 0;
  VAR_33[VAR_36].duplex = VAR_1;
  VAR_33[VAR_36].phy_link_up = 0;
  VAR_33[VAR_36].link_up = 0;
  VAR_33[VAR_36].fault_detected = 0;

  VAR_33[VAR_36].eee_status = VAR_31->eee_status;
 }

 if (FUNC_9(VAR_32))
  FUNC_15(VAR_30, &VAR_30->phy[VAR_9]);

 FUNC_5(VAR_32, "port %x, XGXS?%x, int_status 0x%x\n",
   VAR_34, (VAR_31->phy_flags & VAR_29),
   FUNC_7(VAR_32, VAR_24 + VAR_34*4));

 FUNC_5(VAR_32, "int_mask 0x%x MI_INT %x, SERDES_LINK %x\n",
   FUNC_7(VAR_32, VAR_21 + VAR_34*4),
   FUNC_7(VAR_32, VAR_20 + VAR_34*0x18) > 0,
   FUNC_7(VAR_32, VAR_23 + VAR_34*0x3c));

 FUNC_4(VAR_32, " 10G %x, XGXS_LINK %x\n",
   FUNC_7(VAR_32, VAR_25 + VAR_34*0x68),
   FUNC_7(VAR_32, VAR_26 + VAR_34*0x68));


 if (!FUNC_0(VAR_32))
  FUNC_8(VAR_32, VAR_22 + VAR_34*4, 0);
 for (VAR_36 = VAR_3; VAR_36 < VAR_30->num_phys;
       VAR_36++) {
  struct elink_phy *VAR_44 = &VAR_30->phy[VAR_36];
  if (!VAR_44->read_status)
   continue;

  VAR_39 = VAR_44->read_status(VAR_44, VAR_30,
            &VAR_33[VAR_36]);
  if (VAR_39) {
   FUNC_3(VAR_32, "phy in index %d link is up\n",
       VAR_36);
  } else {
   FUNC_3(VAR_32, "phy in index %d link is down\n",
       VAR_36);
   continue;
  }

  if (!VAR_38) {
   VAR_38 = 1;
   VAR_43 = VAR_36;
  } else {
   switch (FUNC_13(VAR_30)) {
   case 129:
   case 130:




    VAR_43 = VAR_3;
    break;
   case 128:



    VAR_43 = VAR_4;
    break;
   default:
    FUNC_3(VAR_32, "Invalid link indication"
        "mpc=0x%x. DISABLING LINK !!!\n",
        VAR_30->multi_phy_config);
    VAR_38 = 0;
    break;
   }
  }
 }
 VAR_42 = VAR_31->line_speed;






 if (VAR_30->phy[VAR_9].read_status)
  VAR_30->phy[VAR_9].read_status(
   &VAR_30->phy[VAR_9],
   VAR_30, VAR_31);







 if (VAR_43 > VAR_9) {
  VAR_31->flow_ctrl = VAR_33[VAR_43].flow_ctrl;



  VAR_31->link_status |= VAR_33[VAR_43].link_status;




  if (VAR_43 == VAR_3) {
   if (VAR_30->phy[VAR_4].phy_specific_func) {
    FUNC_2(VAR_32,
       "Disabling TX on EXT_PHY2\n");
    VAR_30->phy[VAR_4].phy_specific_func(
     &VAR_30->phy[VAR_4],
     VAR_30, VAR_2);
   }
  }

  VAR_41 = VAR_33[VAR_43].line_speed;
  VAR_31->duplex = VAR_33[VAR_43].duplex;
  if (VAR_30->phy[VAR_43].supported &
      VAR_15)
   VAR_31->link_status |= VAR_18;
  else
   VAR_31->link_status &= ~VAR_18;

  VAR_31->eee_status = VAR_33[VAR_43].eee_status;

  FUNC_3(VAR_32, "Active external phy selected: %x\n",
      VAR_43);
 }

        FUNC_5(VAR_32, "vars : phy_flags = %x, mac_type = %x, phy_link_up = %x\n",
                       VAR_31->phy_flags, VAR_31->mac_type, VAR_31->phy_link_up);
        FUNC_5(VAR_32, "vars : link_up = %x, line_speed = %x, duplex = %x\n",
                       VAR_31->link_up, VAR_31->line_speed, VAR_31->duplex);
        FUNC_5(VAR_32, "vars : flow_ctrl = %x, ieee_fc = %x, link_status = %x\n",
                       VAR_31->flow_ctrl, VAR_31->ieee_fc, VAR_31->link_status);
        FUNC_5(VAR_32, "vars : eee_status = %x, fault_detected = %x, check_kr2_recovery_cnt = %x\n",
                       VAR_31->eee_status, VAR_31->fault_detected, VAR_31->check_kr2_recovery_cnt);
        FUNC_5(VAR_32, "vars : periodic_flags = %x, aeu_int_mask = %x, rx_tx_asic_rst = %x\n",
                       VAR_31->periodic_flags, VAR_31->aeu_int_mask, VAR_31->rx_tx_asic_rst);
        FUNC_4(VAR_32, "vars : turn_to_run_wc_rt = %x, rsrv2 = %x\n",
                       VAR_31->turn_to_run_wc_rt, VAR_31->rsrv2);

 for (VAR_36 = VAR_3; VAR_36 < VAR_30->num_phys;
       VAR_36++) {
  if (VAR_30->phy[VAR_36].flags &
      VAR_8) {
   FUNC_14(VAR_32, VAR_34,
       VAR_36 ==
       VAR_43);
   break;
  }
 }
 FUNC_5(VAR_32, "vars->flow_ctrl = 0x%x, vars->link_status = 0x%x,"
     " ext_phy_line_speed = %d\n", VAR_31->flow_ctrl,
     VAR_31->link_status, VAR_41);





 if (VAR_31->phy_link_up) {
  if (!(FUNC_6(VAR_30)) && VAR_38 &&
      (VAR_41 != VAR_31->line_speed)) {
   FUNC_4(VAR_32, "Internal link speed %d is"
       " different than the external"
       " link speed %d\n", VAR_31->line_speed,
       VAR_41);
   VAR_31->phy_link_up = 0;
   FUNC_2(VAR_32, "phy_link_up set to 0\n");
  } else if (VAR_42 != VAR_31->line_speed) {
   FUNC_8(VAR_32, VAR_19 + VAR_30->port*4,
          0);
   FUNC_1(1000 * 1);
  }
 }


 VAR_35 = (VAR_31->line_speed >= VAR_13);

 FUNC_12(VAR_30, VAR_31, VAR_35);
 if (!(FUNC_6(VAR_30))) {
  FUNC_5(VAR_32, "ext_phy_link_up = %d, int_link_up = %d,"
      " init_preceding = %d\n", VAR_38,
      VAR_31->phy_link_up,
      VAR_30->phy[VAR_3].flags &
      VAR_7);
  if (!(VAR_30->phy[VAR_3].flags &
        VAR_7)
      && VAR_38 && !VAR_31->phy_link_up) {
   VAR_31->line_speed = VAR_41;
   if (VAR_31->line_speed < VAR_12)
    VAR_31->phy_flags |= VAR_28;
   else
    VAR_31->phy_flags &= ~VAR_28;

   if (VAR_30->phy[VAR_9].config_init)
    VAR_30->phy[VAR_9].config_init(
     &VAR_30->phy[VAR_9], VAR_30,
      VAR_31);
  }
 }



 VAR_31->link_up = (VAR_31->phy_link_up &&
    (VAR_38 ||
     FUNC_6(VAR_30)) &&
    (VAR_33[VAR_43].fault_detected == 0));

 if(VAR_31->link_up) {
                FUNC_2(VAR_32, "local phy and external phy are up\n");
        } else {
                FUNC_2(VAR_32, "either local phy or external phy or both are down\n");
        }


 if (VAR_30->feature_config_flags & VAR_6)
  VAR_31->link_status |= VAR_17;
 else
  VAR_31->link_status &= ~VAR_17;

 if (VAR_31->link_up)
  VAR_40 = FUNC_17(VAR_30, VAR_31, VAR_35);
 else
  VAR_40 = FUNC_16(VAR_30, VAR_31);

 if ((VAR_37 ^ VAR_31->link_status) & VAR_16)
  FUNC_11(VAR_30, 0);


 if (VAR_30->feature_config_flags & VAR_5)
  FUNC_10(VAR_32, VAR_0, 0);

 return VAR_40;
}
