
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct bwn_phy_n {int* tx_rx_cal_radio_saveregs; scalar_t__ ipa2g_on; scalar_t__ ipa5g_on; } ;
struct bwn_phy {int rev; struct bwn_phy_n* phy_n; } ;
struct bwn_mac {struct bwn_phy mac_phy; } ;


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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (struct bwn_mac*,int ) ;
 int FUNC_1 (struct bwn_mac*,int ,int) ;
 int FUNC_2 (struct bwn_mac*,int) ;
 int FUNC_3 (struct bwn_mac*,int ,int) ;
 int FUNC_4 (struct bwn_mac*,int,int) ;
 scalar_t__ FUNC_5 (struct bwn_mac*) ;
 int FUNC_6 (struct bwn_mac*) ;
 int FUNC_7 (struct bwn_mac*) ;

__attribute__((used)) static void FUNC_8(struct bwn_mac *VAR_22)
{
 struct bwn_phy *VAR_23 = &VAR_22->mac_phy;
 struct bwn_phy_n *VAR_24 = VAR_22->mac_phy.phy_n;
 uint16_t *VAR_25 = VAR_24->tx_rx_cal_radio_saveregs;
 uint16_t VAR_26;
 uint8_t VAR_27, VAR_28;

 if (VAR_23->rev >= 19) {
  FUNC_6(VAR_22);
 } else if (VAR_23->rev >= 7) {
  FUNC_7(VAR_22);
 } else if (VAR_23->rev >= 3) {
     for (VAR_28 = 0; VAR_28 < 2; VAR_28++) {
  VAR_26 = (VAR_28 == 0) ? 0x2000 : 0x3000;
  VAR_27 = VAR_28 * 11;

  VAR_25[VAR_27 + 0] = FUNC_2(VAR_22, VAR_11);
  VAR_25[VAR_27 + 1] = FUNC_2(VAR_22, VAR_8);
  VAR_25[VAR_27 + 2] = FUNC_2(VAR_22, VAR_12);
  VAR_25[VAR_27 + 3] = FUNC_2(VAR_22, VAR_10);
  VAR_25[VAR_27 + 4] = FUNC_2(VAR_22, VAR_9);
  VAR_25[VAR_27 + 5] = FUNC_2(VAR_22, VAR_13);
  VAR_25[VAR_27 + 6] = FUNC_2(VAR_22, VAR_15);
  VAR_25[VAR_27 + 7] = FUNC_2(VAR_22, VAR_16);
  VAR_25[VAR_27 + 8] = FUNC_2(VAR_22, VAR_18);
  VAR_25[VAR_27 + 9] = FUNC_2(VAR_22, VAR_17);
  VAR_25[VAR_27 + 10] = FUNC_2(VAR_22, VAR_14);

  if (FUNC_5(VAR_22) == VAR_19) {
   FUNC_4(VAR_22, VAR_26 | VAR_11, 0x0A);
   FUNC_4(VAR_22, VAR_26 | VAR_8, 0x40);
   FUNC_4(VAR_22, VAR_26 | VAR_12, 0x55);
   FUNC_4(VAR_22, VAR_26 | VAR_10, 0);
   FUNC_4(VAR_22, VAR_26 | VAR_9, 0);
   if (VAR_24->ipa5g_on) {
    FUNC_4(VAR_22, VAR_26 | VAR_13, 4);
    FUNC_4(VAR_22, VAR_26 | VAR_15, 1);
   } else {
    FUNC_4(VAR_22, VAR_26 | VAR_13, 0);
    FUNC_4(VAR_22, VAR_26 | VAR_15, 0x2F);
   }
   FUNC_4(VAR_22, VAR_26 | VAR_16, 0);
  } else {
   FUNC_4(VAR_22, VAR_26 | VAR_11, 0x06);
   FUNC_4(VAR_22, VAR_26 | VAR_8, 0x40);
   FUNC_4(VAR_22, VAR_26 | VAR_12, 0x55);
   FUNC_4(VAR_22, VAR_26 | VAR_10, 0);
   FUNC_4(VAR_22, VAR_26 | VAR_9, 0);
   FUNC_4(VAR_22, VAR_26 | VAR_15, 0);
   if (VAR_24->ipa2g_on) {
    FUNC_4(VAR_22, VAR_26 | VAR_13, 6);
    FUNC_4(VAR_22, VAR_26 | VAR_16,
     (VAR_22->mac_phy.rev < 5) ? 0x11 : 0x01);
   } else {
    FUNC_4(VAR_22, VAR_26 | VAR_13, 0);
    FUNC_4(VAR_22, VAR_26 | VAR_16, 0);
   }
  }
  FUNC_4(VAR_22, VAR_26 | VAR_18, 0);
  FUNC_4(VAR_22, VAR_26 | VAR_17, 0);
  FUNC_4(VAR_22, VAR_26 | VAR_14, 0);
     }
 } else {
  VAR_25[0] = FUNC_2(VAR_22, VAR_2);
  FUNC_4(VAR_22, VAR_2, 0x29);

  VAR_25[1] = FUNC_2(VAR_22, VAR_3);
  FUNC_4(VAR_22, VAR_3, 0x54);

  VAR_25[2] = FUNC_2(VAR_22, VAR_6);
  FUNC_4(VAR_22, VAR_6, 0x29);

  VAR_25[3] = FUNC_2(VAR_22, VAR_7);
  FUNC_4(VAR_22, VAR_7, 0x54);

  VAR_25[3] = FUNC_2(VAR_22, VAR_0);
  VAR_25[4] = FUNC_2(VAR_22, VAR_4);

  if (!(FUNC_0(VAR_22, VAR_20) &
      VAR_21)) {
   FUNC_4(VAR_22, VAR_0, 0x04);
   FUNC_4(VAR_22, VAR_4, 0x04);
  } else {
   FUNC_4(VAR_22, VAR_0, 0x20);
   FUNC_4(VAR_22, VAR_4, 0x20);
  }

  if (VAR_22->mac_phy.rev < 2) {
   FUNC_3(VAR_22, VAR_1, 0x20);
   FUNC_3(VAR_22, VAR_5, 0x20);
  } else {
   FUNC_1(VAR_22, VAR_1, ~0x20);
   FUNC_1(VAR_22, VAR_5, ~0x20);
  }
 }
}
