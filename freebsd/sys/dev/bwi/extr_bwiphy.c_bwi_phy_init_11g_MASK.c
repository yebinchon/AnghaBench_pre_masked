
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct bwi_tpctl {int tp_ctrl2; int tp_ctrl1; } ;
struct bwi_softc {int sc_card_flags; scalar_t__ sc_bbp_id; int sc_bbp_pkg; } ;
struct bwi_rf {int rf_rev; scalar_t__ rf_type; scalar_t__* rf_nrssi; } ;
struct bwi_phy {int phy_rev; int phy_flags; } ;
struct bwi_mac {struct bwi_tpctl mac_tpctl; struct bwi_rf mac_rf; struct bwi_phy mac_phy; struct bwi_softc* mac_sc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct bwi_mac*,int,int) ;
 int FUNC_2 (struct bwi_mac*,int,int,int) ;
 int FUNC_3 (struct bwi_mac*,int) ;
 int FUNC_4 (struct bwi_mac*,int,int) ;
 int FUNC_5 (struct bwi_mac*,int,int) ;
 int FUNC_6 (struct bwi_mac*,int,int,int) ;
 int FUNC_7 (struct bwi_mac*,int,int) ;
 int FUNC_8 (struct bwi_mac*) ;
 int FUNC_9 (struct bwi_mac*) ;
 int FUNC_10 (struct bwi_mac*) ;
 int FUNC_11 (struct bwi_mac*) ;
 int FUNC_12 (struct bwi_mac*) ;
 int FUNC_13 (struct bwi_mac*) ;
 int FUNC_14 (struct bwi_mac*) ;
 int FUNC_15 (struct bwi_mac*,int) ;
 int FUNC_16 (struct bwi_mac*,struct bwi_tpctl const*) ;
 int FUNC_17 (struct bwi_mac*) ;
 int FUNC_18 (struct bwi_mac*) ;

__attribute__((used)) static void
FUNC_19(struct bwi_mac *VAR_6)
{
 struct bwi_softc *VAR_7 = VAR_6->mac_sc;
 struct bwi_phy *VAR_8 = &VAR_6->mac_phy;
 struct bwi_rf *VAR_9 = &VAR_6->mac_rf;
 const struct bwi_tpctl *VAR_10 = &VAR_6->mac_tpctl;

 if (VAR_8->phy_rev == 1)
  FUNC_10(VAR_6);
 else
  FUNC_11(VAR_6);

 if (VAR_8->phy_rev >= 2 || (VAR_8->phy_flags & VAR_4))
  FUNC_9(VAR_6);

 if (VAR_8->phy_rev >= 2) {
  FUNC_5(VAR_6, 0x814, 0);
  FUNC_5(VAR_6, 0x815, 0);

  if (VAR_8->phy_rev == 2) {
   FUNC_5(VAR_6, 0x811, 0);
   FUNC_5(VAR_6, 0x15, 0xc0);
  } else if (VAR_8->phy_rev > 5) {
   FUNC_5(VAR_6, 0x811, 0x400);
   FUNC_5(VAR_6, 0x15, 0xc0);
  }
 }

 if (VAR_8->phy_rev >= 2 || (VAR_8->phy_flags & VAR_4)) {
  uint16_t VAR_11;

  VAR_11 = FUNC_3(VAR_6, 0x400) & 0xff;
  if (VAR_11 == 3 || VAR_11 == 5) {
   FUNC_5(VAR_6, 0x4c2, 0x1816);
   FUNC_5(VAR_6, 0x4c3, 0x8006);
   if (VAR_11 == 5) {
    FUNC_2(VAR_6, 0x4cc,
       0xff, 0x1f00);
   }
  }
 }

 if ((VAR_8->phy_rev <= 2 && (VAR_8->phy_flags & VAR_4)) ||
     VAR_8->phy_rev >= 2)
  FUNC_5(VAR_6, 0x47e, 0x78);

 if (VAR_9->rf_rev == 8) {
  FUNC_4(VAR_6, 0x801, 0x80);
  FUNC_4(VAR_6, 0x43e, 0x4);
 }

 if (VAR_8->phy_rev >= 2 && (VAR_8->phy_flags & VAR_4))
  FUNC_13(VAR_6);

 if (VAR_9->rf_rev != 8)
  FUNC_14(VAR_6);

 if (VAR_10->tp_ctrl2 == 0xffff) {
  FUNC_17(VAR_6);
 } else {
  if (VAR_9->rf_type == VAR_5 && VAR_9->rf_rev == 8) {
   FUNC_7(VAR_6, 0x52,
     (VAR_10->tp_ctrl1 << 4) | VAR_10->tp_ctrl2);
  } else {
   FUNC_6(VAR_6, 0x52, 0xfff0, VAR_10->tp_ctrl2);
  }

  if (VAR_8->phy_rev >= 6) {
   FUNC_2(VAR_6, 0x36, 0xfff,
      VAR_10->tp_ctrl2 << 12);
  }

  if (VAR_7->sc_card_flags & VAR_1)
   FUNC_5(VAR_6, 0x2e, 0x8075);
  else
   FUNC_5(VAR_6, 0x2e, 0x807f);

  if (VAR_8->phy_rev < 2)
   FUNC_5(VAR_6, 0x2f, 0x101);
  else
   FUNC_5(VAR_6, 0x2f, 0x202);
 }

 if ((VAR_8->phy_flags & VAR_4) || VAR_8->phy_rev >= 2) {
  FUNC_16(VAR_6, VAR_10);
  FUNC_5(VAR_6, 0x80f, 0x8078);
 }

 if ((VAR_7->sc_card_flags & VAR_2) == 0) {
  FUNC_15(VAR_6, 0xffff );
  FUNC_18(VAR_6);
 } else if ((VAR_8->phy_flags & VAR_4) || VAR_8->phy_rev >= 2) {
  if (VAR_9->rf_nrssi[0] == VAR_3) {
   FUNC_0(VAR_9->rf_nrssi[1] == VAR_3,
       ("rf_nrssi[1] %d", VAR_9->rf_nrssi[1]));
   FUNC_12(VAR_6);
  } else {
   FUNC_0(VAR_9->rf_nrssi[1] != VAR_3,
       ("rf_nrssi[1] %d", VAR_9->rf_nrssi[1]));
   FUNC_18(VAR_6);
  }
 }

 if (VAR_9->rf_rev == 8)
  FUNC_5(VAR_6, 0x805, 0x3230);

 FUNC_8(VAR_6);

 if (VAR_7->sc_bbp_id == VAR_0 && VAR_7->sc_bbp_pkg == 2) {
  FUNC_1(VAR_6, 0x429, 0x4000);
  FUNC_1(VAR_6, 0x4c3, 0x8000);
 }
}
