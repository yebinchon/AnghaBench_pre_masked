
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_12__ {int board_flags; int board_flags2; scalar_t__ board_vendor; scalar_t__ board_type; } ;
struct bwn_softc {TYPE_6__ sc_board_info; int sc_chipc; int sc_dev; } ;
struct TYPE_10__ {int center_freq; } ;
struct TYPE_9__ {int center_freq; } ;
struct TYPE_8__ {int center_freq; } ;
struct TYPE_7__ {int center_freq; } ;
struct bwn_phy_n {int use_int_tx_iq_lo_cal; int crsminpwr_adjusted; int noisevars_adjusted; int* papd_epsilon_offset; int txpwrctrl; int phyrxchain; scalar_t__ mphase_cal_phase_id; int measure_hold; int antsel_type; int perical; TYPE_5__* txpwrindex; int * cal_orig_pwr_idx; scalar_t__ mute; TYPE_4__ iqcal_chanspec_5G; TYPE_3__ iqcal_chanspec_2G; TYPE_2__ rssical_chanspec_5G; TYPE_1__ rssical_chanspec_2G; int preamble_override; scalar_t__ deaf_count; scalar_t__ tsspos_2g; } ;
struct bwn_phy {int rev; struct bwn_phy_n* phy_n; } ;
struct bwn_nphy_txgains {int dummy; } ;
struct bwn_mac {struct bwn_phy mac_phy; struct bwn_softc* mac_sc; } ;
typedef scalar_t__ bwn_band_t ;
struct TYPE_11__ {int index_internal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int,int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (struct bwn_softc*,char*,int ,int) ;
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
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int FUNC_2 (struct bwn_mac*,int ,int) ;
 int FUNC_3 (struct bwn_mac*,int ) ;
 int FUNC_4 (struct bwn_mac*,int ,int) ;
 int FUNC_5 (struct bwn_mac*,int ,int,int) ;
 int FUNC_6 (struct bwn_mac*,int ,int) ;
 int VAR_42 ;
 int VAR_43 ;
 scalar_t__ VAR_44 ;
 int FUNC_7 (int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_8 (struct bwn_mac*) ;
 int FUNC_9 (struct bwn_mac*,int) ;
 int FUNC_10 (struct bwn_mac*) ;
 scalar_t__ FUNC_11 (struct bwn_mac*,struct bwn_nphy_txgains,int,int ) ;
 int FUNC_12 (struct bwn_mac*,struct bwn_nphy_txgains,int,int) ;
 int FUNC_13 (struct bwn_mac*,int ,int ) ;
 int FUNC_14 (struct bwn_mac*) ;
 int FUNC_15 (struct bwn_mac*,int ) ;
 struct bwn_nphy_txgains FUNC_16 (struct bwn_mac*) ;
 int FUNC_17 (struct bwn_mac*) ;
 scalar_t__ FUNC_18 (struct bwn_mac*) ;
 int FUNC_19 (struct bwn_mac*,int) ;
 int FUNC_20 (struct bwn_mac*,int*) ;
 int FUNC_21 (struct bwn_mac*) ;
 int FUNC_22 (struct bwn_mac*) ;
 int FUNC_23 (struct bwn_mac*) ;
 int FUNC_24 (struct bwn_mac*) ;
 int FUNC_25 (struct bwn_mac*,int) ;
 int FUNC_26 (struct bwn_mac*) ;
 int FUNC_27 (struct bwn_mac*,int) ;
 int FUNC_28 (struct bwn_mac*) ;
 int FUNC_29 (struct bwn_mac*) ;
 int FUNC_30 (struct bwn_mac*) ;
 int FUNC_31 (struct bwn_mac*) ;
 int FUNC_32 (struct bwn_mac*) ;
 int FUNC_33 (struct bwn_mac*,int) ;
 int FUNC_34 (struct bwn_mac*) ;
 int FUNC_35 (struct bwn_mac*) ;
 int FUNC_36 (struct bwn_mac*,int ) ;
 int FUNC_37 (struct bwn_mac*) ;
 int FUNC_38 (struct bwn_mac*) ;
 int FUNC_39 (struct bwn_mac*,int) ;

__attribute__((used)) static int FUNC_40(struct bwn_mac *VAR_45)
{
 struct bwn_softc *VAR_46 = VAR_45->mac_sc;
 struct bwn_phy *VAR_47 = &VAR_45->mac_phy;
 struct bwn_phy_n *VAR_48 = VAR_47->phy_n;
 uint8_t VAR_49;
 struct bwn_nphy_txgains VAR_50;
 int VAR_51;
 uint16_t VAR_52;
 bwn_band_t VAR_53;
 bool VAR_54;

 uint16_t VAR_55[2];
 bool VAR_56 = 0;

 if (VAR_45->mac_phy.rev >= 3) {
  VAR_51 = FUNC_7(VAR_46->sc_dev, VAR_4,
      &VAR_48->tsspos_2g);
  if (VAR_51) {
   FUNC_1(VAR_45->mac_sc, "Error reading %s from "
       "NVRAM: %d\n", VAR_4, VAR_51);
   return (VAR_51);
  }
 } else {
  VAR_48->tsspos_2g = 0;
 }

 if ((VAR_45->mac_phy.rev >= 3) &&
    (VAR_46->sc_board_info.board_flags & VAR_2) &&
    (FUNC_8(VAR_45) == VAR_5))
 {
  FUNC_0(VAR_46->sc_chipc, 0x40, 0x40);
 }
 VAR_48->use_int_tx_iq_lo_cal = FUNC_18(VAR_45) ||
  VAR_47->rev >= 7 ||
  (VAR_47->rev >= 5 &&
   VAR_46->sc_board_info.board_flags2 & VAR_0);
 VAR_48->deaf_count = 0;
 FUNC_28(VAR_45);
 VAR_48->crsminpwr_adjusted = 0;
 VAR_48->noisevars_adjusted = 0;


 if (VAR_45->mac_phy.rev >= 3) {
  FUNC_6(VAR_45, VAR_36, 0);
  FUNC_6(VAR_45, VAR_31, 0);
  if (VAR_47->rev >= 7) {
   FUNC_6(VAR_45, VAR_23, 0);
   FUNC_6(VAR_45, VAR_24, 0);
   FUNC_6(VAR_45, VAR_25, 0);
   FUNC_6(VAR_45, VAR_26, 0);
  }
  if (VAR_47->rev >= 19) {

  }

  FUNC_6(VAR_45, VAR_35, 0);
  FUNC_6(VAR_45, VAR_37, 0);
 } else {
  FUNC_6(VAR_45, VAR_31, 0);
 }
 FUNC_6(VAR_45, VAR_27, 0);
 FUNC_6(VAR_45, VAR_28, 0);
 if (VAR_45->mac_phy.rev < 6) {
  FUNC_6(VAR_45, VAR_29, 0);
  FUNC_6(VAR_45, VAR_30, 0);
 }
 FUNC_2(VAR_45, VAR_32,
       ~(VAR_33 |
         VAR_34));
 if (VAR_45->mac_phy.rev >= 3)
  FUNC_6(VAR_45, VAR_7, 0);
 FUNC_6(VAR_45, VAR_6, 0);

 if (VAR_45->mac_phy.rev <= 2) {
  VAR_52 = (VAR_45->mac_phy.rev == 2) ? 0x3B : 0x40;
  FUNC_5(VAR_45, VAR_12,
    ~VAR_13,
    VAR_52 << VAR_14);
 }
 FUNC_6(VAR_45, VAR_8, 0x20);
 FUNC_6(VAR_45, VAR_9, 0x20);

 if (VAR_46->sc_board_info.board_flags2 & VAR_1 ||
     (VAR_46->sc_board_info.board_vendor == VAR_44 &&
      VAR_46->sc_board_info.board_type == VAR_3))
  FUNC_6(VAR_45, VAR_40, 0xA0);
 else
  FUNC_6(VAR_45, VAR_40, 0xB8);
 FUNC_6(VAR_45, VAR_19, 0xC8);
 FUNC_6(VAR_45, VAR_22, 0x50);
 FUNC_6(VAR_45, VAR_41, 0x30);

 if (VAR_47->rev < 8)
  FUNC_36(VAR_45, VAR_48->preamble_override);

 FUNC_37(VAR_45);

 if (VAR_47->rev < 2) {
  FUNC_6(VAR_45, VAR_16, 0xAA8);
  FUNC_6(VAR_45, VAR_15, 0x9A4);
 }

 VAR_53 = FUNC_8(VAR_45);
 if (FUNC_18(VAR_45)) {
  FUNC_4(VAR_45, VAR_20, 0x1);
  FUNC_5(VAR_45, VAR_17, 0x007F,
    VAR_48->papd_epsilon_offset[0] << 7);
  FUNC_4(VAR_45, VAR_21, 0x1);
  FUNC_5(VAR_45, VAR_18, 0x007F,
    VAR_48->papd_epsilon_offset[1] << 7);
  FUNC_17(VAR_45);
 } else if (VAR_47->rev >= 5) {
  FUNC_14(VAR_45);
 }

 if ((VAR_51 = FUNC_38(VAR_45)))
  return (VAR_51);


 FUNC_39(VAR_45, 1);
 VAR_52 = FUNC_3(VAR_45, VAR_10);
 FUNC_6(VAR_45, VAR_10, VAR_52 | VAR_11);
 FUNC_6(VAR_45, VAR_10, VAR_52 & ~VAR_11);
 FUNC_39(VAR_45, 0);

 FUNC_9(VAR_45, 1);

 if (VAR_47->rev < 7) {
  FUNC_19(VAR_45, 0);
  FUNC_15(VAR_45, VAR_43);
  FUNC_15(VAR_45, VAR_42);
  FUNC_19(VAR_45, 1);
 }

 FUNC_13(VAR_45, 0, 0);
 FUNC_20(VAR_45, VAR_55);
 if (FUNC_8(VAR_45) == VAR_5)
  FUNC_10(VAR_45);

 VAR_49 = VAR_48->txpwrctrl;
 FUNC_33(VAR_45, 0);
 if ((VAR_51 = FUNC_34(VAR_45)))
  return (VAR_51);
 FUNC_31(VAR_45);
 FUNC_32(VAR_45);
 FUNC_29(VAR_45);

 if (VAR_48->phyrxchain != 3)
  FUNC_25(VAR_45, VAR_48->phyrxchain);
 if (VAR_48->mphase_cal_phase_id > 0)
  ;

 VAR_54 = 0;
 if (VAR_47->rev >= 3) {
  if (FUNC_8(VAR_45) == VAR_5)
   VAR_54 = !VAR_48->rssical_chanspec_2G.center_freq;
  else
   VAR_54 = !VAR_48->rssical_chanspec_5G.center_freq;

  if (VAR_54)
   FUNC_23(VAR_45);
  else
   FUNC_22(VAR_45);
 } else {
  FUNC_23(VAR_45);
 }

 if (!((VAR_48->measure_hold & 0x6) != 0)) {
  if (FUNC_8(VAR_45) == VAR_5)
   VAR_56 = !VAR_48->iqcal_chanspec_2G.center_freq;
  else
   VAR_56 = !VAR_48->iqcal_chanspec_5G.center_freq;

  if (VAR_48->mute)
   VAR_56 = 0;

  if (VAR_56) {
   VAR_50 = FUNC_16(VAR_45);

   if (VAR_48->antsel_type == 2) {
    VAR_51 = FUNC_27(VAR_45, 1);
    if (VAR_51)
     return (VAR_51);
   }
   if (VAR_48->perical != 2) {
    FUNC_23(VAR_45);
    if (VAR_47->rev >= 3) {
     VAR_48->cal_orig_pwr_idx[0] =
         VAR_48->txpwrindex[0].index_internal;
     VAR_48->cal_orig_pwr_idx[1] =
         VAR_48->txpwrindex[1].index_internal;

     VAR_50 = FUNC_16(VAR_45);
    }
    if (!FUNC_12(VAR_45, VAR_50, 1, 0))
     if (FUNC_11(VAR_45, VAR_50, 2, 0) == 0)
      FUNC_24(VAR_45);
   } else if (VAR_48->mphase_cal_phase_id == 0)
    ;
  } else {
   FUNC_21(VAR_45);
  }
 }

 FUNC_35(VAR_45);
 FUNC_33(VAR_45, VAR_49);
 FUNC_6(VAR_45, VAR_39, 0x0015);
 FUNC_6(VAR_45, VAR_38, 0x0320);
 if (VAR_47->rev >= 3 && VAR_47->rev <= 6)
  FUNC_6(VAR_45, VAR_22, 0x0032);
 FUNC_30(VAR_45);
 if (VAR_47->rev >= 3)
  FUNC_26(VAR_45);

 return 0;
}
