
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct timespec {int tv_nsec; int tv_sec; } ;
struct bwn_txpwr_loctl {int txctl_measured_time; } ;
struct TYPE_2__ {int board_flags; } ;
struct bwn_softc {TYPE_1__ sc_board_info; } ;
struct bwn_phy_g {struct bwn_txpwr_loctl pg_loctl; } ;
struct bwn_phy {scalar_t__ type; int rf_ver; int rf_rev; int rev; struct bwn_phy_g phy_g; } ;
struct bwn_mac {struct bwn_softc* mac_sc; struct bwn_phy mac_phy; } ;
struct bwn_lo_g_value {int reg0; int reg1; int rf1; int phy_syncctl; int rf2; void* phy_cck1; void* phy_cck0; void* phy_dacctl; void* phy_cck2; void* phy_pgactl; void* rf0; void* phy_crs0; void* phy_cck3; void* phy_classctl; void* phy_rfoverval; void* phy_rfover; void* phy_analogoverval; void* phy_analogover; void* phy_hpwr_tssictl; void* phy_cck4; void* phy_dacctl_hwpctl; void* phy_extg; void* phy_lomask; } ;


 int VAR_0 ;
 int FUNC_0 (struct bwn_phy*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct bwn_mac*,int,int) ;
 int VAR_11 ;
 void* FUNC_4 (struct bwn_mac*,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (struct bwn_mac*,int,int) ;
 int VAR_14 ;
 int FUNC_6 (struct bwn_mac*,int,int) ;
 int FUNC_7 (struct bwn_mac*,int) ;
 void* FUNC_8 (struct bwn_mac*,int) ;
 int FUNC_9 (struct bwn_mac*,int,int) ;
 int FUNC_10 (struct bwn_mac*,int,int) ;
 int FUNC_11 (struct bwn_mac*,int ,int) ;
 scalar_t__ FUNC_12 (struct bwn_mac*) ;
 int FUNC_13 (struct bwn_mac*) ;
 int FUNC_14 (struct bwn_mac*,int,int ) ;
 scalar_t__ FUNC_15 (int ,scalar_t__) ;
 int FUNC_16 (struct timespec*) ;

__attribute__((used)) static void
FUNC_17(struct bwn_mac *VAR_15, struct bwn_lo_g_value *VAR_16)
{
 struct bwn_phy *VAR_17 = &VAR_15->mac_phy;
 struct bwn_phy_g *VAR_18 = &VAR_17->phy_g;
 struct bwn_softc *VAR_19 = VAR_15->mac_sc;
 struct bwn_txpwr_loctl *VAR_20 = &VAR_18->pg_loctl;
 struct timespec VAR_21;
 uint16_t VAR_22;

 if (FUNC_12(VAR_15)) {
  VAR_16->phy_lomask = FUNC_4(VAR_15, VAR_10);
  VAR_16->phy_extg = FUNC_4(VAR_15, FUNC_2(0x01));
  VAR_16->phy_dacctl_hwpctl = FUNC_4(VAR_15, VAR_8);
  VAR_16->phy_cck4 = FUNC_4(VAR_15, FUNC_1(0x14));
  VAR_16->phy_hpwr_tssictl = FUNC_4(VAR_15, VAR_9);

  FUNC_5(VAR_15, VAR_9, 0x100);
  FUNC_5(VAR_15, FUNC_2(0x01), 0x40);
  FUNC_5(VAR_15, VAR_8, 0x40);
  FUNC_5(VAR_15, FUNC_1(0x14), 0x200);
 }
 if (VAR_17->type == VAR_2 &&
     VAR_17->rf_ver == 0x2050 && VAR_17->rf_rev < 6) {
  FUNC_6(VAR_15, FUNC_1(0x16), 0x410);
  FUNC_6(VAR_15, FUNC_1(0x17), 0x820);
 }
 if (VAR_17->rev >= 2) {
  VAR_16->phy_analogover = FUNC_4(VAR_15, VAR_4);
  VAR_16->phy_analogoverval =
      FUNC_4(VAR_15, VAR_5);
  VAR_16->phy_rfover = FUNC_4(VAR_15, VAR_12);
  VAR_16->phy_rfoverval = FUNC_4(VAR_15, VAR_13);
  VAR_16->phy_classctl = FUNC_4(VAR_15, VAR_6);
  VAR_16->phy_cck3 = FUNC_4(VAR_15, FUNC_1(0x3e));
  VAR_16->phy_crs0 = FUNC_4(VAR_15, VAR_7);

  FUNC_3(VAR_15, VAR_6, 0xfffc);
  FUNC_3(VAR_15, VAR_7, 0x7fff);
  FUNC_5(VAR_15, VAR_4, 0x0003);
  FUNC_3(VAR_15, VAR_5, 0xfffc);
  if (VAR_17->type == VAR_3) {
   if ((VAR_17->rev >= 7) &&
       (VAR_19->sc_board_info.board_flags &
        VAR_0)) {
    FUNC_6(VAR_15, VAR_12, 0x933);
   } else {
    FUNC_6(VAR_15, VAR_12, 0x133);
   }
  } else {
   FUNC_6(VAR_15, VAR_12, 0);
  }
  FUNC_6(VAR_15, FUNC_1(0x3e), 0);
 }
 VAR_16->reg0 = FUNC_7(VAR_15, 0x3f4);
 VAR_16->reg1 = FUNC_7(VAR_15, 0x3e2);
 VAR_16->rf0 = FUNC_8(VAR_15, 0x43);
 VAR_16->rf1 = FUNC_8(VAR_15, 0x7a);
 VAR_16->phy_pgactl = FUNC_4(VAR_15, VAR_11);
 VAR_16->phy_cck2 = FUNC_4(VAR_15, FUNC_1(0x2a));
 VAR_16->phy_syncctl = FUNC_4(VAR_15, VAR_14);
 VAR_16->phy_dacctl = FUNC_4(VAR_15, VAR_8);

 if (!FUNC_0(VAR_17)) {
  VAR_16->rf2 = FUNC_8(VAR_15, 0x52);
  VAR_16->rf2 &= 0x00f0;
 }
 if (VAR_17->type == VAR_2) {
  VAR_16->phy_cck0 = FUNC_4(VAR_15, FUNC_1(0x30));
  VAR_16->phy_cck1 = FUNC_4(VAR_15, FUNC_1(0x06));
  FUNC_6(VAR_15, FUNC_1(0x30), 0x00ff);
  FUNC_6(VAR_15, FUNC_1(0x06), 0x3f3f);
 } else {
  FUNC_10(VAR_15, 0x3e2, FUNC_7(VAR_15, 0x3e2)
       | 0x8000);
 }
 FUNC_10(VAR_15, 0x3f4, FUNC_7(VAR_15, 0x3f4)
      & 0xf000);

 VAR_22 =
     (VAR_17->type == VAR_3) ? VAR_10 : FUNC_1(0x2e);
 FUNC_6(VAR_15, VAR_22, 0x007f);

 VAR_22 = VAR_16->phy_syncctl;
 FUNC_6(VAR_15, VAR_14, VAR_22 & 0xff7f);
 VAR_22 = VAR_16->rf1;
 FUNC_9(VAR_15, 0x007a, VAR_22 & 0xfff0);

 FUNC_6(VAR_15, FUNC_1(0x2a), 0x8a3);
 if (VAR_17->type == VAR_3 ||
     (VAR_17->type == VAR_2 &&
      VAR_17->rf_ver == 0x2050 && VAR_17->rf_rev >= 6)) {
  FUNC_6(VAR_15, FUNC_1(0x2b), 0x1003);
 } else
  FUNC_6(VAR_15, FUNC_1(0x2b), 0x0802);
 if (VAR_17->rev >= 2)
  FUNC_11(VAR_15, 0, 1);
 FUNC_14(VAR_15, 6, 0);
 FUNC_8(VAR_15, 0x51);
 if (VAR_17->type == VAR_3)
  FUNC_6(VAR_15, FUNC_1(0x2f), 0);

 FUNC_16(&VAR_21);
 if (FUNC_15(VAR_20->txctl_measured_time,
     (VAR_21.tv_nsec / 1000000 + VAR_21.tv_sec * 1000) - VAR_1))
  FUNC_13(VAR_15);

 if (VAR_17->type == VAR_3 && VAR_17->rev >= 3)
  FUNC_6(VAR_15, VAR_10, 0xc078);
 else {
  if (VAR_17->type == VAR_2)
   FUNC_6(VAR_15, FUNC_1(0x2e), 0x8078);
  else
   FUNC_6(VAR_15, VAR_10, 0x8078);
 }
}
