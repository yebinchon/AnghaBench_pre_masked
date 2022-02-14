
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ board_vendor; scalar_t__ board_type; int board_rev; int board_flags2; } ;
struct bwn_softc {TYPE_2__ sc_board_info; int sc_dev; } ;
struct bwn_phy_n {int gain_boost; } ;
struct TYPE_3__ {struct bwn_phy_n* phy_n; } ;
struct bwn_mac {struct bwn_softc* mac_sc; TYPE_1__ mac_phy; } ;


 int VAR_0 ;
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
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_0 (struct bwn_softc*,char*) ;
 int FUNC_1 (struct bwn_mac*,int ,int) ;
 int FUNC_2 (struct bwn_mac*,int ,int) ;
 int FUNC_3 (struct bwn_mac*,int ,int,int) ;
 int FUNC_4 (struct bwn_mac*,int ,int) ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_17 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct bwn_mac*) ;
 int FUNC_8 (struct bwn_mac*,int ,int,int,int,int) ;
 int FUNC_9 (struct bwn_mac*,int ) ;

__attribute__((used)) static void FUNC_10(struct bwn_mac *VAR_18)
{
 struct bwn_softc *VAR_19 = VAR_18->mac_sc;
 struct bwn_phy_n *VAR_20 = VAR_18->mac_phy.phy_n;
 bool VAR_21 = 0;

 if (FUNC_6(VAR_19->sc_dev) < 4)
  VAR_21 =
      (VAR_19->sc_board_info.board_vendor != VAR_17)
      && (VAR_19->sc_board_info.board_type == VAR_16)
        && (VAR_19->sc_board_info.board_rev >= 0x41);
 else
  VAR_21 =
   !(VAR_19->sc_board_info.board_flags2 & VAR_15);

 FUNC_1(VAR_18, VAR_13, 0xFFF3);
 if (VAR_21) {
  FUNC_1(VAR_18, VAR_3, 0x7F);
  FUNC_1(VAR_18, VAR_8, 0x7F);
 }
 FUNC_3(VAR_18, VAR_14, 0xFFC0, 0x2C);
 FUNC_4(VAR_18, VAR_12, 0x3C);
 FUNC_1(VAR_18, VAR_12, 0xFFBE);
 FUNC_2(VAR_18, VAR_11, 0x80);
 FUNC_2(VAR_18, VAR_12, 0x1);
 FUNC_5(1000);
 FUNC_2(VAR_18, VAR_12, 0x40);
 if (!FUNC_8(VAR_18, VAR_10, 0x80, 0x80, 10, 2000))
  FUNC_0(VAR_18->mac_sc, "radio post init timeout\n");
 FUNC_1(VAR_18, VAR_11, 0xFF7F);
 FUNC_9(VAR_18, FUNC_7(VAR_18));
 FUNC_4(VAR_18, VAR_1, 0x9);
 FUNC_4(VAR_18, VAR_6, 0x9);
 FUNC_4(VAR_18, VAR_2, 0x83);
 FUNC_4(VAR_18, VAR_7, 0x83);
 FUNC_3(VAR_18, VAR_0, 0xFFF8, 0x6);
 FUNC_3(VAR_18, VAR_5, 0xFFF8, 0x6);
 if (!VAR_20->gain_boost) {
  FUNC_2(VAR_18, VAR_4, 0x2);
  FUNC_2(VAR_18, VAR_9, 0x2);
 } else {
  FUNC_1(VAR_18, VAR_4, 0xFFFD);
  FUNC_1(VAR_18, VAR_9, 0xFFFD);
 }
 FUNC_5(2);
}
