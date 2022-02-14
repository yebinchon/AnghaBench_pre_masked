
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct ieee80211com {int ic_curchan; } ;
struct bwn_txgain {int dummy; } ;
struct TYPE_3__ {scalar_t__ chip_id; } ;
struct bwn_softc {TYPE_1__ sc_cid; struct ieee80211com sc_ic; } ;
struct bwn_rxcompco {scalar_t__ rc_chan; int rc_c1; int rc_c0; } ;
struct bwn_phy_lp {scalar_t__ plp_chanfullcal; scalar_t__ plp_chan; int plp_txpctlmode; } ;
struct TYPE_4__ {int rev; struct bwn_phy_lp phy_lp; } ;
struct bwn_mac {TYPE_2__ mac_phy; struct bwn_softc* mac_sc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct bwn_mac*,int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct bwn_mac*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct bwn_mac*,int ,int) ;
 int FUNC_4 (struct bwn_mac*,int ,int,int) ;
 int FUNC_5 (struct bwn_mac*,int ,int) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct bwn_rxcompco*) ;
 int FUNC_8 (struct bwn_mac*) ;
 int FUNC_9 (struct bwn_mac*) ;
 int FUNC_10 (struct bwn_mac*) ;
 int FUNC_11 (struct bwn_mac*,int) ;
 int FUNC_12 (struct bwn_mac*,int ) ;
 int FUNC_13 (struct bwn_mac*) ;
 int FUNC_14 (struct bwn_mac*) ;
 int FUNC_15 (struct bwn_mac*) ;
 struct bwn_txgain FUNC_16 (struct bwn_mac*) ;
 int FUNC_17 (struct bwn_mac*) ;
 int FUNC_18 (struct bwn_mac*,int) ;
 int FUNC_19 (struct bwn_mac*,int ) ;
 int FUNC_20 (struct bwn_mac*,int) ;
 int FUNC_21 (struct bwn_mac*,int,int ) ;
 int FUNC_22 (struct bwn_mac*,struct bwn_txgain*) ;
 int FUNC_23 (struct bwn_mac*,int) ;
 struct bwn_rxcompco* VAR_11 ;
 struct bwn_rxcompco* VAR_12 ;
 struct bwn_rxcompco VAR_13 ;

__attribute__((used)) static void
FUNC_24(struct bwn_mac *VAR_14)
{
 struct bwn_phy_lp *VAR_15 = &VAR_14->mac_phy.phy_lp;
 struct bwn_softc *VAR_16 = VAR_14->mac_sc;
 struct ieee80211com *VAR_17 = &VAR_16->sc_ic;
 const struct bwn_rxcompco *VAR_18 = ((void*)0);
 struct bwn_txgain VAR_19;
 int VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;
 uint8_t VAR_25, VAR_26 = 0;

 if (VAR_15->plp_chanfullcal != VAR_15->plp_chan) {
  VAR_15->plp_chanfullcal = VAR_15->plp_chan;
  VAR_26 = 1;
 }

 FUNC_9(VAR_14);


 FUNC_5(VAR_14, VAR_1, 0x3);
 FUNC_5(VAR_14, VAR_2, 0xff);

 if (VAR_14->mac_phy.rev >= 2)
  FUNC_14(VAR_14);
 FUNC_17(VAR_14);
 VAR_25 = VAR_15->plp_txpctlmode;
 FUNC_23(VAR_14, VAR_3);
 if (VAR_14->mac_phy.rev == 0 && VAR_25 != VAR_3)
  FUNC_10(VAR_14);
 if (VAR_14->mac_phy.rev >= 2 && VAR_26 == 1) {
  FUNC_17(VAR_14);
  VAR_21 = VAR_15->plp_txpctlmode;
  VAR_22 = FUNC_2(VAR_14, VAR_4) & 0x40;
  if (VAR_22)
   VAR_19 = FUNC_16(VAR_14);
  VAR_23 = FUNC_2(VAR_14, VAR_9) & 0xff;
  VAR_24 = FUNC_15(VAR_14);
  FUNC_23(VAR_14, VAR_3);
  if (VAR_22)
   FUNC_22(VAR_14, &VAR_19);
  FUNC_18(VAR_14, VAR_24);
  FUNC_23(VAR_14, VAR_21);
  FUNC_4(VAR_14, VAR_9, 0xff00, VAR_23);
 }
 FUNC_23(VAR_14, VAR_25);
 if (VAR_14->mac_phy.rev >= 2)
  FUNC_13(VAR_14);


 if (VAR_16->sc_cid.chip_id == VAR_0) {
  for (VAR_20 = 0; VAR_20 < FUNC_7(VAR_11); VAR_20++) {
   if (VAR_11[VAR_20].rc_chan == VAR_15->plp_chan)
    VAR_18 = &VAR_11[VAR_20];
  }
 } else if (VAR_14->mac_phy.rev >= 2)
  VAR_18 = &VAR_13;
 else {
  for (VAR_20 = 0; VAR_20 < FUNC_7(VAR_12); VAR_20++) {
   if (VAR_12[VAR_20].rc_chan == VAR_15->plp_chan)
    VAR_18 = &VAR_12[VAR_20];
  }
 }
 if (VAR_18 == ((void*)0))
  goto fail;

 FUNC_4(VAR_14, VAR_10, 0xff00, VAR_18->rc_c1);
 FUNC_4(VAR_14, VAR_10, 0x00ff, VAR_18->rc_c0 << 8);

 FUNC_21(VAR_14, 1 , 0 );

 if (FUNC_6(VAR_17->ic_curchan)) {
  FUNC_3(VAR_14, VAR_6, 0x8);
  FUNC_4(VAR_14, VAR_8, 0xfff7, 0);
 } else {
  FUNC_3(VAR_14, VAR_6, 0x20);
  FUNC_4(VAR_14, VAR_8, 0xffdf, 0);
 }

 FUNC_20(VAR_14, 0x2d5d);
 FUNC_0(VAR_14, VAR_4, 0xfffe);
 FUNC_0(VAR_14, VAR_5, 0xfffe);
 FUNC_3(VAR_14, VAR_6, 0x800);
 FUNC_3(VAR_14, VAR_8, 0x800);
 FUNC_19(VAR_14, 0);

 (void)FUNC_11(VAR_14, 0xfff0);
 FUNC_12(VAR_14, 0);
 FUNC_0(VAR_14, VAR_6, 0xfffc);
 FUNC_0(VAR_14, VAR_6, 0xfff7);
 FUNC_0(VAR_14, VAR_6, 0xffdf);


 FUNC_0(VAR_14, VAR_6, 0xfffe);
 FUNC_0(VAR_14, VAR_6, 0xffef);
 FUNC_0(VAR_14, VAR_6, 0xffbf);
 if (VAR_14->mac_phy.rev >= 2) {
  FUNC_0(VAR_14, VAR_7, 0xfeff);
  if (FUNC_6(VAR_17->ic_curchan)) {
   FUNC_0(VAR_14, VAR_7, 0xfbff);
   FUNC_0(VAR_14, FUNC_1(0xe5), 0xfff7);
  }
 } else {
  FUNC_0(VAR_14, VAR_7, 0xfdff);
 }

 FUNC_0(VAR_14, VAR_4, 0xfffe);
 FUNC_0(VAR_14, VAR_5, 0xf7ff);
fail:
 FUNC_8(VAR_14);
}
