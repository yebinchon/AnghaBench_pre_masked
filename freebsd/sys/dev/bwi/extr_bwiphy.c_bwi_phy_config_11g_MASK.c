
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct bwi_softc {int sc_pci_revid; int sc_card_flags; } ;
struct bwi_phy {int phy_rev; } ;
struct bwi_mac {struct bwi_phy mac_phy; struct bwi_softc* mac_sc; } ;
typedef int int16_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bwi_softc*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct bwi_mac*,int,int,int) ;
 int FUNC_2 (struct bwi_mac*,int) ;
 int FUNC_3 (struct bwi_mac*,int,int) ;
 int FUNC_4 (struct bwi_mac*,int,int) ;
 int FUNC_5 (struct bwi_mac*,int,int ) ;
 int FUNC_6 (struct bwi_mac*) ;
 int* VAR_10 ;
 int* VAR_11 ;
 int* VAR_12 ;
 int* VAR_13 ;
 int* VAR_14 ;
 int* VAR_15 ;
 int* VAR_16 ;
 int* VAR_17 ;
 int* VAR_18 ;
 int* VAR_19 ;
 int FUNC_7 (struct bwi_mac*,int,int const) ;
 int FUNC_8 (struct bwi_mac*,scalar_t__,int) ;
 int FUNC_9 (int*) ;

__attribute__((used)) static void
FUNC_10(struct bwi_mac *VAR_20)
{
 struct bwi_softc *VAR_21 = VAR_20->mac_sc;
 struct bwi_phy *VAR_22 = &VAR_20->mac_phy;
 const uint16_t *VAR_23;
 uint16_t VAR_24, VAR_25;
 int VAR_26, VAR_27;

 if (VAR_22->phy_rev == 1) {
  FUNC_4(VAR_20, 0x406, 0x4f19);
  FUNC_1(VAR_20, 0x429, 0xfc3f, 0x340);
  FUNC_4(VAR_20, 0x42c, 0x5a);
  FUNC_4(VAR_20, 0x427, 0x1a);


  for (VAR_26 = 0; VAR_26 < FUNC_9(VAR_11); ++VAR_26) {
   FUNC_7(VAR_20, VAR_2 + VAR_26,
     VAR_11[VAR_26]);
  }


  for (VAR_26 = 0; VAR_26 < FUNC_9(VAR_13); ++VAR_26) {
   FUNC_7(VAR_20, VAR_3 + VAR_26,
     VAR_13[VAR_26]);
  }


  for (VAR_26 = 0; VAR_26 < FUNC_9(VAR_17); ++VAR_26) {

   FUNC_8(VAR_20, VAR_5 + VAR_26,
     VAR_17[VAR_26]);
  }
 } else {
  FUNC_5(VAR_20, 0xba98, (int16_t)0x7654);

  if (VAR_22->phy_rev == 2) {
   FUNC_4(VAR_20, 0x4c0, 0x1861);
   FUNC_4(VAR_20, 0x4c1, 0x271);
  } else if (VAR_22->phy_rev > 2) {
   FUNC_4(VAR_20, 0x4c0, 0x98);
   FUNC_4(VAR_20, 0x4c1, 0x70);
   FUNC_4(VAR_20, 0x4c9, 0x80);
  }
  FUNC_3(VAR_20, 0x42b, 0x800);


  for (VAR_26 = 0; VAR_26 < 64; ++VAR_26)
   FUNC_7(VAR_20, VAR_6 + VAR_26, VAR_26);


  for (VAR_26 = 0; VAR_26 < FUNC_9(VAR_12); ++VAR_26) {
   FUNC_7(VAR_20, VAR_3 + VAR_26,
     VAR_12[VAR_26]);
  }
 }




 if (VAR_22->phy_rev <= 2) {
  VAR_23 = VAR_15;
  VAR_27 = FUNC_9(VAR_15);
 } else if (VAR_22->phy_rev >= 7 && (FUNC_2(VAR_20, 0x449) & 0x200)) {
  VAR_23 = VAR_16;
  VAR_27 = FUNC_9(VAR_16);
 } else {
  VAR_23 = VAR_14;
  VAR_27 = FUNC_9(VAR_14);
 }
 for (VAR_26 = 0; VAR_26 < VAR_27; ++VAR_26)
  FUNC_7(VAR_20, VAR_4 + VAR_26, VAR_23[VAR_26]);




 if (VAR_22->phy_rev == 2) {
  VAR_23 = VAR_18;
  VAR_27 = FUNC_9(VAR_18);
 } else if (VAR_22->phy_rev > 2 && VAR_22->phy_rev <= 8) {
  VAR_23 = VAR_19;
  VAR_27 = FUNC_9(VAR_19);
 } else {
  VAR_23 = ((void*)0);
  VAR_27 = 0;
 }
 for (VAR_26 = 0; VAR_26 < VAR_27; ++VAR_26)
  FUNC_7(VAR_20, VAR_7 + VAR_26, VAR_23[VAR_26]);

 if (VAR_22->phy_rev == 1) {

  for (VAR_26 = 0; VAR_26 < FUNC_9(VAR_10); ++VAR_26) {
   FUNC_8(VAR_20, VAR_1 + VAR_26,
     VAR_10[VAR_26]);
  }


  for (VAR_26 = 4; VAR_26 < 20; ++VAR_26)
   FUNC_7(VAR_20, VAR_9 + VAR_26, 0x20);

  FUNC_6(VAR_20);

  VAR_24 = 0x5001;
  VAR_25 = 0x5002;
 } else {

  for (VAR_26 = 0; VAR_26 < 0x20; ++VAR_26)
   FUNC_7(VAR_20, VAR_8 + VAR_26, 0x820);

  FUNC_6(VAR_20);

  FUNC_2(VAR_20, 0x400);
  FUNC_4(VAR_20, 0x403, 0x1000);
  FUNC_7(VAR_20, 0x3c02, 0xf);
  FUNC_7(VAR_20, 0x3c03, 0x14);

  VAR_24 = 0x401;
  VAR_25 = 0x402;
 }

 if (!(FUNC_0(VAR_21) && VAR_21->sc_pci_revid == 0x17)) {
  FUNC_7(VAR_20, VAR_24, 0x2);
  FUNC_7(VAR_20, VAR_25, 0x1);
 }


 if (VAR_21->sc_card_flags & VAR_0)
  FUNC_4(VAR_20, 0x46e, 0x3cf);
}
