
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_6__ {int wme_update; } ;
struct ieee80211com {int ic_caps; int ic_headroom; int ic_parent; int ic_transmit; int ic_vap_delete; int ic_vap_create; int ic_set_channel; int ic_scan_end; int ic_scan_start; TYPE_2__ ic_wme; int ic_update_promisc; int ic_updateslot; int ic_raw_xmit; int ic_macaddr; int ic_flags_ext; int ic_opmode; int ic_phytype; int ic_name; struct bwn_softc* ic_softc; } ;
struct bwn_txhdr {int dummy; } ;
struct TYPE_8__ {int wr_ihdr; } ;
struct TYPE_7__ {int wt_ihdr; } ;
struct TYPE_5__ {int board_srom_rev; } ;
struct bwn_softc {TYPE_4__ sc_rx_th; TYPE_3__ sc_tx_th; int sc_dev; TYPE_1__ sc_board_info; struct ieee80211com sc_ic; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char const*,int ,int,int ) ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_2 (struct bwn_softc*) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct ieee80211com*) ;
 int FUNC_6 (struct ieee80211com*) ;
 int FUNC_7 (struct ieee80211com*,int *,int,int ,int *,int,int ) ;

__attribute__((used)) static int
FUNC_8(struct bwn_softc *VAR_31)
{
 struct ieee80211com *VAR_32;
 const char *VAR_33;
 u_int VAR_34;
 int VAR_35;

 VAR_32 = &VAR_31->sc_ic;

 VAR_32->ic_softc = VAR_31;
 VAR_32->ic_name = FUNC_3(VAR_31->sc_dev);

 VAR_32->ic_phytype = VAR_18;
 VAR_32->ic_opmode = VAR_17;
 VAR_32->ic_caps =
    VAR_12
  | VAR_9
  | VAR_7
  | VAR_10
  | VAR_11
  | VAR_14
  | VAR_15



  | VAR_13
  ;

 VAR_32->ic_flags_ext |= VAR_16;


 VAR_34 = FUNC_0(VAR_31->sc_dev);
 VAR_33 = ((void*)0);
 if (VAR_31->sc_board_info.board_srom_rev <= 2) {
  if (VAR_34 == 0) {
   VAR_33 = VAR_1;
  } else if (VAR_34 == 1) {
   VAR_33 = VAR_0;
  }
 } else {
  if (VAR_34 == 0) {
   VAR_33 = VAR_2;
  }
 }

 if (VAR_33 == ((void*)0)) {
  FUNC_4(VAR_31->sc_dev, "missing MAC address variable for "
      "D11 core %u", VAR_34);
  return (VAR_6);
 }


 VAR_35 = FUNC_1(VAR_31->sc_dev, VAR_33, VAR_32->ic_macaddr,
     sizeof(VAR_32->ic_macaddr), VAR_3);
 if (VAR_35) {
  FUNC_4(VAR_31->sc_dev, "error reading %s: %d\n", VAR_33,
      VAR_35);
  return (VAR_35);
 }


 FUNC_6(VAR_32);

 VAR_32->ic_headroom = sizeof(struct bwn_txhdr);


 VAR_32->ic_raw_xmit = VAR_21;
 VAR_32->ic_updateslot = VAR_27;
 VAR_32->ic_update_promisc = VAR_26;
 VAR_32->ic_wme.wme_update = VAR_30;
 VAR_32->ic_scan_start = VAR_23;
 VAR_32->ic_scan_end = VAR_22;
 VAR_32->ic_set_channel = VAR_24;
 VAR_32->ic_vap_create = VAR_28;
 VAR_32->ic_vap_delete = VAR_29;
 VAR_32->ic_transmit = VAR_25;
 VAR_32->ic_parent = VAR_20;

 FUNC_7(VAR_32,
     &VAR_31->sc_tx_th.wt_ihdr, sizeof(VAR_31->sc_tx_th),
     VAR_5,
     &VAR_31->sc_rx_th.wr_ihdr, sizeof(VAR_31->sc_rx_th),
     VAR_4);

 FUNC_2(VAR_31);

 if (VAR_19)
  FUNC_5(VAR_32);
 return (0);
}
