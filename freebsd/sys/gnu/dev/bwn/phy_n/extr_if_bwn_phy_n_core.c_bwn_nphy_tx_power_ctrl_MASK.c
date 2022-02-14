
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct bwn_phy_n {int txpwrctrl; int* tx_pwr_idx; scalar_t__ hang_avoid; int adj_pwr_tbl; } ;
struct bwn_phy {int rev; struct bwn_phy_n* phy_n; } ;
struct bwn_mac {struct bwn_phy mac_phy; } ;
typedef scalar_t__ bwn_band_t ;


 scalar_t__ VAR_0 ;
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
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct bwn_mac*,int ,int) ;
 int FUNC_2 (struct bwn_mac*,int ) ;
 int FUNC_3 (struct bwn_mac*,int ,int) ;
 int FUNC_4 (struct bwn_mac*,int ,int,int) ;
 int FUNC_5 (struct bwn_mac*,int ,int) ;
 scalar_t__ FUNC_6 (struct bwn_mac*) ;
 int FUNC_7 (struct bwn_mac*) ;
 int FUNC_8 (struct bwn_mac*,int) ;
 scalar_t__ FUNC_9 (struct bwn_mac*) ;
 scalar_t__ FUNC_10 (struct bwn_mac*) ;
 int FUNC_11 (struct bwn_mac*,int) ;
 int FUNC_12 (struct bwn_mac*,int ,int,int ) ;

__attribute__((used)) static void FUNC_13(struct bwn_mac *VAR_19, bool VAR_20)
{
 struct bwn_phy *VAR_21 = &VAR_19->mac_phy;
 struct bwn_phy_n *VAR_22 = VAR_19->mac_phy.phy_n;
 uint8_t VAR_23;
 uint16_t VAR_24, VAR_25, VAR_26;
 bwn_band_t VAR_27 = FUNC_6(VAR_19);

 if (VAR_22->hang_avoid)
  FUNC_11(VAR_19, 1);

 VAR_22->txpwrctrl = VAR_20;
 if (!VAR_20) {
  if (VAR_19->mac_phy.rev >= 3 &&
      (FUNC_2(VAR_19, VAR_12) &
       (VAR_13 |
        VAR_14 |
        VAR_16))) {

   VAR_22->tx_pwr_idx[0] = FUNC_2(VAR_19,
      VAR_6) & 0x7f;
   VAR_22->tx_pwr_idx[1] = FUNC_2(VAR_19,
      VAR_7) & 0x7f;
  }

  FUNC_5(VAR_19, VAR_10, 0x6840);
  for (VAR_23 = 0; VAR_23 < 84; VAR_23++)
   FUNC_5(VAR_19, VAR_11, 0);

  FUNC_5(VAR_19, VAR_10, 0x6C40);
  for (VAR_23 = 0; VAR_23 < 84; VAR_23++)
   FUNC_5(VAR_19, VAR_11, 0);

  VAR_26 = VAR_13 | VAR_14;
  if (VAR_19->mac_phy.rev >= 3)
   VAR_26 |= VAR_16;
  FUNC_1(VAR_19, VAR_12, ~VAR_26);

  if (VAR_19->mac_phy.rev >= 3) {
   FUNC_3(VAR_19, VAR_3, 0x0100);
   FUNC_3(VAR_19, VAR_2, 0x0100);
  } else {
   FUNC_3(VAR_19, VAR_2, 0x4000);
  }

  if (VAR_19->mac_phy.rev == 2)
   FUNC_4(VAR_19, VAR_4,
    ~VAR_5, 0x53);
  else if (VAR_19->mac_phy.rev < 2)
   FUNC_4(VAR_19, VAR_4,
    ~VAR_5, 0x5A);

  if (VAR_19->mac_phy.rev < 2 && FUNC_9(VAR_19))
   FUNC_8(VAR_19, FUNC_7(VAR_19) | VAR_1);
 } else {
  FUNC_12(VAR_19, FUNC_0(26, 64), 84,
        VAR_22->adj_pwr_tbl);
  FUNC_12(VAR_19, FUNC_0(27, 64), 84,
        VAR_22->adj_pwr_tbl);

  VAR_24 = VAR_13 |
   VAR_14;

  VAR_25 = VAR_13 | VAR_14;
  if (VAR_19->mac_phy.rev >= 3) {
   VAR_24 |= VAR_16;
   if (VAR_25)
    VAR_25 |= VAR_16;
  }
  FUNC_4(VAR_19, VAR_12, ~(VAR_24), VAR_25);

  if (VAR_27 == VAR_0) {
   if (VAR_21->rev >= 19) {

   } else if (VAR_21->rev >= 7) {
    FUNC_4(VAR_19, VAR_12,
      ~VAR_15,
      0x32);
    FUNC_4(VAR_19, VAR_17,
      ~VAR_18,
      0x32);
   } else {
    FUNC_4(VAR_19, VAR_12,
      ~VAR_15,
      0x64);
    if (VAR_21->rev > 1)
     FUNC_4(VAR_19,
       VAR_17,
       ~VAR_18,
       0x64);
   }
  }

  if (VAR_19->mac_phy.rev >= 3) {
   if (VAR_22->tx_pwr_idx[0] != 128 &&
       VAR_22->tx_pwr_idx[1] != 128) {

    FUNC_4(VAR_19, VAR_12,
      ~VAR_15,
      VAR_22->tx_pwr_idx[0]);
    if (VAR_19->mac_phy.rev > 1)
     FUNC_4(VAR_19,
      VAR_17,
      ~0xff, VAR_22->tx_pwr_idx[1]);
   }
  }

  if (VAR_21->rev >= 7) {

  }

  if (VAR_19->mac_phy.rev >= 3) {
   FUNC_1(VAR_19, VAR_3, ~0x100);
   FUNC_1(VAR_19, VAR_2, ~0x100);
  } else {
   FUNC_1(VAR_19, VAR_2, ~0x4000);
  }

  if (VAR_19->mac_phy.rev == 2)
   FUNC_4(VAR_19, VAR_4, ~0xFF, 0x3b);
  else if (VAR_19->mac_phy.rev < 2)
   FUNC_4(VAR_19, VAR_4, ~0xFF, 0x40);

  if (VAR_19->mac_phy.rev < 2 && FUNC_9(VAR_19))
   FUNC_8(VAR_19, FUNC_7(VAR_19) & ~VAR_1);

  if (FUNC_10(VAR_19)) {
   FUNC_1(VAR_19, VAR_8, ~0x4);
   FUNC_1(VAR_19, VAR_9, ~0x4);
  }
 }

 if (VAR_22->hang_avoid)
  FUNC_11(VAR_19, 0);
}
