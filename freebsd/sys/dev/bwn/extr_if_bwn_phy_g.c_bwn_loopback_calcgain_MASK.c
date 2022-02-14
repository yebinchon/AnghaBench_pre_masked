
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int board_flags; } ;
struct bwn_softc {TYPE_1__ sc_board_info; } ;
struct TYPE_4__ {int att; } ;
struct bwn_phy_g {int pg_max_lb_gain; int pg_trsw_rx_gain; TYPE_2__ pg_bbatt; } ;
struct bwn_phy {int rev; int rf_rev; struct bwn_phy_g phy_g; } ;
struct bwn_mac {struct bwn_softc* mac_sc; struct bwn_phy mac_phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct bwn_mac*,int ,int) ;
 int VAR_8 ;
 int FUNC_2 (struct bwn_mac*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct bwn_mac*,int ,int) ;
 int FUNC_4 (struct bwn_mac*,int ,int,int) ;
 int FUNC_5 (struct bwn_mac*,int ,int) ;
 int FUNC_6 (struct bwn_mac*,int,int) ;
 int FUNC_7 (struct bwn_mac*,int) ;
 int FUNC_8 (struct bwn_mac*,int,int,int) ;
 int FUNC_9 (struct bwn_mac*,int,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (struct bwn_mac*,int) ;

__attribute__((used)) static void
FUNC_12(struct bwn_mac *VAR_11)
{
 struct bwn_phy *VAR_12 = &VAR_11->mac_phy;
 struct bwn_phy_g *VAR_13 = &VAR_12->phy_g;
 struct bwn_softc *VAR_14 = VAR_11->mac_sc;
 uint16_t VAR_15[16] = { 0 };
 uint16_t VAR_16[3];
 uint16_t VAR_17;
 uint16_t VAR_18, VAR_19, VAR_20;
 uint16_t VAR_21;
 uint16_t VAR_22, VAR_23;

 VAR_15[0] = FUNC_2(VAR_11, VAR_4);
 VAR_15[1] = FUNC_2(VAR_11, VAR_3);
 VAR_15[2] = FUNC_2(VAR_11, VAR_9);
 VAR_15[3] = FUNC_2(VAR_11, VAR_10);
 if (VAR_12->rev != 1) {
  VAR_15[4] = FUNC_2(VAR_11, VAR_1);
  VAR_15[5] = FUNC_2(VAR_11, VAR_2);
 }
 VAR_15[6] = FUNC_2(VAR_11, FUNC_0(0x5a));
 VAR_15[7] = FUNC_2(VAR_11, FUNC_0(0x59));
 VAR_15[8] = FUNC_2(VAR_11, FUNC_0(0x58));
 VAR_15[9] = FUNC_2(VAR_11, FUNC_0(0x0a));
 VAR_15[10] = FUNC_2(VAR_11, FUNC_0(0x03));
 VAR_15[11] = FUNC_2(VAR_11, VAR_7);
 VAR_15[12] = FUNC_2(VAR_11, VAR_5);
 VAR_15[13] = FUNC_2(VAR_11, FUNC_0(0x2b));
 VAR_15[14] = FUNC_2(VAR_11, VAR_8);
 VAR_15[15] = FUNC_2(VAR_11, VAR_6);
 VAR_17 = VAR_13->pg_bbatt.att;
 VAR_16[0] = FUNC_7(VAR_11, 0x52);
 VAR_16[1] = FUNC_7(VAR_11, 0x43);
 VAR_16[2] = FUNC_7(VAR_11, 0x7a);

 FUNC_1(VAR_11, VAR_4, 0x3fff);
 FUNC_3(VAR_11, VAR_3, 0x8000);
 FUNC_3(VAR_11, VAR_9, 0x0002);
 FUNC_1(VAR_11, VAR_10, 0xfffd);
 FUNC_3(VAR_11, VAR_9, 0x0001);
 FUNC_1(VAR_11, VAR_10, 0xfffe);
 if (VAR_12->rev != 1) {
  FUNC_3(VAR_11, VAR_1, 0x0001);
  FUNC_1(VAR_11, VAR_2, 0xfffe);
  FUNC_3(VAR_11, VAR_1, 0x0002);
  FUNC_1(VAR_11, VAR_2, 0xfffd);
 }
 FUNC_3(VAR_11, VAR_9, 0x000c);
 FUNC_3(VAR_11, VAR_10, 0x000c);
 FUNC_3(VAR_11, VAR_9, 0x0030);
 FUNC_4(VAR_11, VAR_10, 0xffcf, 0x10);

 FUNC_5(VAR_11, FUNC_0(0x5a), 0x0780);
 FUNC_5(VAR_11, FUNC_0(0x59), 0xc810);
 FUNC_5(VAR_11, FUNC_0(0x58), 0x000d);

 FUNC_3(VAR_11, FUNC_0(0x0a), 0x2000);
 if (VAR_12->rev != 1) {
  FUNC_3(VAR_11, VAR_1, 0x0004);
  FUNC_1(VAR_11, VAR_2, 0xfffb);
 }
 FUNC_4(VAR_11, FUNC_0(0x03), 0xff9f, 0x40);

 if (VAR_12->rf_rev == 8)
  FUNC_9(VAR_11, 0x43, 0x000f);
 else {
  FUNC_9(VAR_11, 0x52, 0);
  FUNC_8(VAR_11, 0x43, 0xfff0, 0x9);
 }
 FUNC_11(VAR_11, 11);

 if (VAR_12->rev >= 3)
  FUNC_5(VAR_11, VAR_7, 0xc020);
 else
  FUNC_5(VAR_11, VAR_7, 0x8020);
 FUNC_5(VAR_11, VAR_5, 0);

 FUNC_4(VAR_11, FUNC_0(0x2b), 0xffc0, 0x01);
 FUNC_4(VAR_11, FUNC_0(0x2b), 0xc0ff, 0x800);

 FUNC_3(VAR_11, VAR_9, 0x0100);
 FUNC_1(VAR_11, VAR_10, 0xcfff);

 if (VAR_14->sc_board_info.board_flags & VAR_0) {
  if (VAR_12->rev >= 7) {
   FUNC_3(VAR_11, VAR_9, 0x0800);
   FUNC_3(VAR_11, VAR_10, 0x8000);
  }
 }
 FUNC_6(VAR_11, 0x7a, 0x00f7);

 VAR_19 = 0;
 VAR_20 = (VAR_12->rf_rev == 8) ? 15 : 9;
 for (VAR_18 = 0; VAR_18 < VAR_20; VAR_18++) {
  for (VAR_19 = 0; VAR_19 < 16; VAR_19++) {
   FUNC_9(VAR_11, 0x43, VAR_18);
   FUNC_4(VAR_11, VAR_10, 0xf0ff,
       (VAR_19 << 8));
   FUNC_4(VAR_11, VAR_8, 0x0fff, 0xa000);
   FUNC_3(VAR_11, VAR_8, 0xf000);
   FUNC_10(20);
   if (FUNC_2(VAR_11, VAR_6) >= 0xdfc)
    goto done0;
  }
 }
done0:
 VAR_22 = VAR_18;
 VAR_23 = VAR_19;
 if (VAR_19 >= 8) {
  FUNC_3(VAR_11, VAR_10, 0x30);
  VAR_21 = 0x1b;
  for (VAR_19 = VAR_19 - 8; VAR_19 < 16; VAR_19++) {
   FUNC_4(VAR_11, VAR_10, 0xf0ff, VAR_19 << 8);
   FUNC_4(VAR_11, VAR_8, 0x0fff, 0xa000);
   FUNC_3(VAR_11, VAR_8, 0xf000);
   FUNC_10(20);
   VAR_21 -= 3;
   if (FUNC_2(VAR_11, VAR_6) >= 0xdfc)
    goto done1;
  }
 } else
  VAR_21 = 0x18;
done1:

 if (VAR_12->rev != 1) {
  FUNC_5(VAR_11, VAR_1, VAR_15[4]);
  FUNC_5(VAR_11, VAR_2, VAR_15[5]);
 }
 FUNC_5(VAR_11, FUNC_0(0x5a), VAR_15[6]);
 FUNC_5(VAR_11, FUNC_0(0x59), VAR_15[7]);
 FUNC_5(VAR_11, FUNC_0(0x58), VAR_15[8]);
 FUNC_5(VAR_11, FUNC_0(0x0a), VAR_15[9]);
 FUNC_5(VAR_11, FUNC_0(0x03), VAR_15[10]);
 FUNC_5(VAR_11, VAR_7, VAR_15[11]);
 FUNC_5(VAR_11, VAR_5, VAR_15[12]);
 FUNC_5(VAR_11, FUNC_0(0x2b), VAR_15[13]);
 FUNC_5(VAR_11, VAR_8, VAR_15[14]);

 FUNC_11(VAR_11, VAR_17);

 FUNC_9(VAR_11, 0x52, VAR_16[0]);
 FUNC_9(VAR_11, 0x43, VAR_16[1]);
 FUNC_9(VAR_11, 0x7a, VAR_16[2]);

 FUNC_5(VAR_11, VAR_9, VAR_15[2] | 0x0003);
 FUNC_10(10);
 FUNC_5(VAR_11, VAR_9, VAR_15[2]);
 FUNC_5(VAR_11, VAR_10, VAR_15[3]);
 FUNC_5(VAR_11, VAR_4, VAR_15[0]);
 FUNC_5(VAR_11, VAR_3, VAR_15[1]);

 VAR_13->pg_max_lb_gain =
     ((VAR_23 * 6) - (VAR_22 * 4)) - 11;
 VAR_13->pg_trsw_rx_gain = VAR_21 * 2;
}
