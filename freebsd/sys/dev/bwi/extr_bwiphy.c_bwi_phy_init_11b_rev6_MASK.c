
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_int ;
struct bwi_softc {int sc_card_flags; } ;
struct bwi_rf {int rf_rev; int rf_curchan; } ;
struct bwi_phy {scalar_t__ phy_mode; int phy_version; } ;
struct bwi_mac {struct bwi_phy mac_phy; struct bwi_rf mac_rf; struct bwi_softc* mac_sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct bwi_softc*,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct bwi_mac*,int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (struct bwi_mac*,int,int) ;
 int FUNC_4 (struct bwi_mac*,int,int,int) ;
 int FUNC_5 (struct bwi_mac*,int,int) ;
 int FUNC_6 (struct bwi_mac*,int,int) ;
 int FUNC_7 (struct bwi_mac*,int,int,int) ;
 int FUNC_8 (struct bwi_mac*,int,int) ;
 int FUNC_9 (struct bwi_mac*,int,int) ;
 int FUNC_10 (struct bwi_mac*) ;
 int FUNC_11 (struct bwi_mac*,int *) ;
 int FUNC_12 (struct bwi_mac*) ;
 int FUNC_13 (struct bwi_mac*) ;
 int FUNC_14 (struct bwi_mac*) ;
 int FUNC_15 (struct bwi_mac*,int,int ) ;
 int FUNC_16 (struct bwi_mac*) ;

__attribute__((used)) static void
FUNC_17(struct bwi_mac *VAR_9)
{
 struct bwi_softc *VAR_10 = VAR_9->mac_sc;
 struct bwi_rf *VAR_11 = &VAR_9->mac_rf;
 struct bwi_phy *VAR_12 = &VAR_9->mac_phy;
 uint16_t VAR_13, VAR_14;
 u_int VAR_15;

 FUNC_6(VAR_9, 0x3e, 0x817a);
 FUNC_8(VAR_9, 0x7a, 0x58);

 if (VAR_11->rf_rev == 4 || VAR_11->rf_rev == 5) {
  FUNC_9(VAR_9, 0x51, 0x37);
  FUNC_9(VAR_9, 0x52, 0x70);
  FUNC_9(VAR_9, 0x53, 0xb3);
  FUNC_9(VAR_9, 0x54, 0x9b);
  FUNC_9(VAR_9, 0x5a, 0x88);
  FUNC_9(VAR_9, 0x5b, 0x88);
  FUNC_9(VAR_9, 0x5d, 0x88);
  FUNC_9(VAR_9, 0x5e, 0x88);
  FUNC_9(VAR_9, 0x7d, 0x88);
  FUNC_2(VAR_9, VAR_4);
 } else if (VAR_11->rf_rev == 8) {
  FUNC_9(VAR_9, 0x51, 0);
  FUNC_9(VAR_9, 0x52, 0x40);
  FUNC_9(VAR_9, 0x53, 0xb7);
  FUNC_9(VAR_9, 0x54, 0x98);
  FUNC_9(VAR_9, 0x5a, 0x88);
  FUNC_9(VAR_9, 0x5b, 0x6b);
  FUNC_9(VAR_9, 0x5c, 0xf);
  if (VAR_10->sc_card_flags & VAR_2) {
   FUNC_9(VAR_9, 0x5d, 0xfa);
   FUNC_9(VAR_9, 0x5e, 0xd8);
  } else {
   FUNC_9(VAR_9, 0x5d, 0xf5);
   FUNC_9(VAR_9, 0x5e, 0xb8);
  }
  FUNC_9(VAR_9, 0x73, 0x3);
  FUNC_9(VAR_9, 0x7d, 0xa8);
  FUNC_9(VAR_9, 0x7c, 0x1);
  FUNC_9(VAR_9, 0x7e, 0x8);
 }

 VAR_13 = 0x1e1f;
 for (VAR_14 = 0x88; VAR_14 < 0x98; ++VAR_14) {
  FUNC_6(VAR_9, VAR_14, VAR_13);
  VAR_13 -= 0x202;
 }

 VAR_13 = 0x3e3f;
 for (VAR_14 = 0x98; VAR_14 < 0xa8; ++VAR_14) {
  FUNC_6(VAR_9, VAR_14, VAR_13);
  VAR_13 -= 0x202;
 }

 VAR_13 = 0x2120;
 for (VAR_14 = 0xa8; VAR_14 < 0xc8; ++VAR_14) {
  FUNC_6(VAR_9, VAR_14, (VAR_13 & 0x3f3f));
  VAR_13 += 0x202;


  FUNC_1(10);
 }

 if (VAR_12->phy_mode == VAR_8) {
  FUNC_8(VAR_9, 0x7a, 0x20);
  FUNC_8(VAR_9, 0x51, 0x4);
  FUNC_5(VAR_9, 0x802, 0x100);
  FUNC_5(VAR_9, 0x42b, 0x2000);
  FUNC_6(VAR_9, 0x5b, 0);
  FUNC_6(VAR_9, 0x5c, 0);
 }


 VAR_15 = VAR_11->rf_curchan;
 if (VAR_15 >= 8)
  FUNC_15(VAR_9, 1, 0);
 else
  FUNC_15(VAR_9, 13, 0);

 FUNC_9(VAR_9, 0x50, 0x20);
 FUNC_9(VAR_9, 0x50, 0x23);

 FUNC_1(40);

 if (VAR_11->rf_rev < 6 || VAR_11->rf_rev == 8) {
  FUNC_8(VAR_9, 0x7c, 0x2);
  FUNC_9(VAR_9, 0x50, 0x20);
 }
 if (VAR_11->rf_rev <= 2) {
  FUNC_9(VAR_9, 0x7c, 0x20);
  FUNC_9(VAR_9, 0x5a, 0x70);
  FUNC_9(VAR_9, 0x5b, 0x7b);
  FUNC_9(VAR_9, 0x5c, 0xb0);
 }

 FUNC_7(VAR_9, 0x7a, 0xf8, 0x7);

 FUNC_15(VAR_9, VAR_15, 0);

 FUNC_6(VAR_9, 0x14, 0x200);
 if (VAR_11->rf_rev >= 6)
  FUNC_6(VAR_9, 0x2a, 0x88c2);
 else
  FUNC_6(VAR_9, 0x2a, 0x8ac0);
 FUNC_6(VAR_9, 0x38, 0x668);

 FUNC_11(VAR_9, ((void*)0));

 if (VAR_11->rf_rev <= 5) {
  FUNC_4(VAR_9, 0x5d, 0xff80, 0x3);
  if (VAR_11->rf_rev <= 2)
   FUNC_9(VAR_9, 0x5d, 0xd);
 }

 if (VAR_12->phy_version == 4) {
  FUNC_0(VAR_10, VAR_5, VAR_6);
  FUNC_3(VAR_9, 0x61, 0xf000);
 } else {
  FUNC_4(VAR_9, 0x2, 0xffc0, 0x4);
 }

 if (VAR_12->phy_mode == VAR_7) {
  FUNC_0(VAR_10, VAR_0, VAR_1);
  FUNC_6(VAR_9, 0x16, 0x410);
  FUNC_6(VAR_9, 0x17, 0x820);
  FUNC_6(VAR_9, 0x62, 0x7);

  FUNC_13(VAR_9);
  FUNC_14(VAR_9);
  if (VAR_10->sc_card_flags & VAR_3) {
   FUNC_12(VAR_9);
   FUNC_16(VAR_9);
  }
  FUNC_10(VAR_9);
 } else {
  FUNC_0(VAR_10, VAR_0, 0);
 }
}
