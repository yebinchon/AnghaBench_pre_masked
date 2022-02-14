
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int board_flags2; scalar_t__ board_type; } ;
struct bwn_softc {TYPE_1__ sc_board_info; } ;
struct bwn_phy_n {scalar_t__ band5g_pwrgain; } ;
struct bwn_phy {int rev; struct bwn_phy_n* phy_n; } ;
struct bwn_mac {struct bwn_phy mac_phy; struct bwn_softc* mac_sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
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
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct bwn_mac*,int ,int) ;
 int FUNC_2 (struct bwn_mac*,int ) ;
 int FUNC_3 (struct bwn_mac*,int ,int ) ;
 int FUNC_4 (struct bwn_mac*,int ,int) ;
 int FUNC_5 (struct bwn_mac*,int ,int) ;
 int FUNC_6 (struct bwn_mac*,int ,int) ;
 scalar_t__ FUNC_7 (struct bwn_mac*) ;
 int FUNC_8 (struct bwn_mac*) ;
 int FUNC_9 (struct bwn_mac*,int) ;
 int FUNC_10 (struct bwn_mac*) ;
 int FUNC_11 (struct bwn_mac*,int,int*,int*,int) ;
 int FUNC_12 (struct bwn_mac*,int ,int) ;

__attribute__((used)) static int FUNC_13(struct bwn_mac *VAR_28)
{
 struct bwn_softc *VAR_29 = VAR_28->mac_sc;
 struct bwn_phy *VAR_30 = &VAR_28->mac_phy;
 struct bwn_phy_n *VAR_31 = VAR_30->phy_n;

 uint8_t VAR_32[7] = { 0x0, 0x1, 0x2, 0x8, 0x4, 0x5, 0x3 };
 uint8_t VAR_33[7] = { 0x8, 0x6, 0x6, 0x2, 0x4, 0x3C, 0x1 };

 uint8_t VAR_34[7] = { 0x0, 0x3, 0x5, 0x4, 0x2, 0x1, 0x8 };
 uint8_t VAR_35[7] = { 0x8, 0x6, 0x2, 0x4, 0x4, 0x6, 0x1 };

 if (VAR_29->sc_board_info.board_flags2 & VAR_2 ||
     VAR_29->sc_board_info.board_type == VAR_3) {
  VAR_33[0] = 0x1;
  VAR_33[5] = 0x14;
 }

 if (FUNC_7(VAR_28) == VAR_4 &&
     VAR_31->band5g_pwrgain) {
  FUNC_5(VAR_28, VAR_0, ~0x8);
  FUNC_5(VAR_28, VAR_1, ~0x8);
 } else {
  FUNC_6(VAR_28, VAR_0, 0x8);
  FUNC_6(VAR_28, VAR_1, 0x8);
 }

 FUNC_12(VAR_28, FUNC_0(8, 0x00), 0x000A);
 FUNC_12(VAR_28, FUNC_0(8, 0x10), 0x000A);
 if (VAR_28->mac_phy.rev < 3) {
  FUNC_12(VAR_28, FUNC_0(8, 0x02), 0xCDAA);
  FUNC_12(VAR_28, FUNC_0(8, 0x12), 0xCDAA);
 }

 if (VAR_28->mac_phy.rev < 2) {
  FUNC_12(VAR_28, FUNC_0(8, 0x08), 0x0000);
  FUNC_12(VAR_28, FUNC_0(8, 0x18), 0x0000);
  FUNC_12(VAR_28, FUNC_0(8, 0x07), 0x7AAB);
  FUNC_12(VAR_28, FUNC_0(8, 0x17), 0x7AAB);
  FUNC_12(VAR_28, FUNC_0(8, 0x06), 0x0800);
  FUNC_12(VAR_28, FUNC_0(8, 0x16), 0x0800);
 }

 FUNC_4(VAR_28, VAR_18, 0x2D8);
 FUNC_4(VAR_28, VAR_20, 0x301);
 FUNC_4(VAR_28, VAR_19, 0x2D8);
 FUNC_4(VAR_28, VAR_21, 0x301);

 FUNC_11(VAR_28, 0, VAR_32, VAR_33, 7);
 FUNC_11(VAR_28, 1, VAR_34, VAR_35, 7);

 FUNC_10(VAR_28);

 if (VAR_28->mac_phy.rev < 2) {
  if (FUNC_2(VAR_28, VAR_22) & 0x2)
   FUNC_9(VAR_28, FUNC_8(VAR_28) |
     VAR_5);
 } else if (VAR_28->mac_phy.rev == 2) {
  FUNC_4(VAR_28, VAR_6, 0);
  FUNC_4(VAR_28, VAR_7, 0);
 }

 if (VAR_28->mac_phy.rev < 2)
  FUNC_1(VAR_28, VAR_23,
    ~VAR_24);


 FUNC_4(VAR_28, VAR_10, 0x125);
 FUNC_4(VAR_28, VAR_11, 0x1B3);
 FUNC_4(VAR_28, VAR_12, 0x105);
 FUNC_4(VAR_28, VAR_13, 0x16E);
 FUNC_4(VAR_28, VAR_14, 0xCD);
 FUNC_4(VAR_28, VAR_15, 0x20);

 if (VAR_28->mac_phy.rev < 3) {
  FUNC_1(VAR_28, VAR_16,
        ~VAR_17 & 0xFFFF);
  FUNC_4(VAR_28, VAR_25, 0xB5);
  FUNC_4(VAR_28, VAR_26, 0xA4);
  FUNC_4(VAR_28, VAR_27, 0x00);
 }

 if (VAR_28->mac_phy.rev == 2)
  FUNC_3(VAR_28, VAR_8,
    VAR_9);

 return (0);
}
