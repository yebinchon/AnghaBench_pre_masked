
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u_int ;
struct bwi_softc {scalar_t__ sc_pci_subvid; scalar_t__ sc_pci_subdid; } ;
struct bwi_rf {scalar_t__ rf_type; int rf_curchan; } ;
struct bwi_phy {int phy_version; int phy_flags; int phy_rev; } ;
struct bwi_mac {struct bwi_phy mac_phy; struct bwi_rf mac_rf; struct bwi_softc* mac_sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct bwi_softc*,int ,int,int) ;
 int FUNC_1 (struct bwi_softc*,int ,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (struct bwi_mac*,int,int,int) ;
 int FUNC_3 (struct bwi_mac*,int,int) ;
 int FUNC_4 (struct bwi_mac*,int,int) ;
 int FUNC_5 (struct bwi_mac*,int,int) ;
 int FUNC_6 (struct bwi_mac*,int,int) ;
 int FUNC_7 (struct bwi_mac*,int *) ;
 int FUNC_8 (struct bwi_mac*,int,int ) ;

__attribute__((used)) static void
FUNC_9(struct bwi_mac *VAR_9)
{
 struct bwi_softc *VAR_10 = VAR_9->mac_sc;
 struct bwi_rf *VAR_11 = &VAR_9->mac_rf;
 struct bwi_phy *VAR_12 = &VAR_9->mac_phy;
 u_int VAR_13;

 if (VAR_12->phy_version == 1)
  FUNC_5(VAR_9, 0x7a, 0x50);

 if (VAR_10->sc_pci_subvid != VAR_8 &&
     VAR_10->sc_pci_subdid != VAR_2) {
  uint16_t VAR_14, VAR_15;

  VAR_15 = 0x2120;
  for (VAR_14 = 0xa8; VAR_14 < 0xc7; ++VAR_14) {
   FUNC_4(VAR_9, VAR_14, VAR_15);
   VAR_15 += 0x202;
  }
 }

 FUNC_2(VAR_9, 0x35, 0xf0ff, 0x700);

 if (VAR_11->rf_type == VAR_7)
  FUNC_4(VAR_9, 0x38, 0x667);

 if ((VAR_12->phy_flags & VAR_3) || VAR_12->phy_rev >= 2) {
  if (VAR_11->rf_type == VAR_7) {
   FUNC_5(VAR_9, 0x7a, 0x20);
   FUNC_5(VAR_9, 0x51, 0x4);
  }

  FUNC_1(VAR_10, VAR_6, 0);

  FUNC_3(VAR_9, 0x802, 0x100);
  FUNC_3(VAR_9, 0x42b, 0x2000);
  FUNC_4(VAR_9, 0x1c, 0x186a);

  FUNC_2(VAR_9, 0x13, 0xff, 0x1900);
  FUNC_2(VAR_9, 0x35, 0xffc0, 0x64);
  FUNC_2(VAR_9, 0x5d, 0xff80, 0xa);
 }



 if (VAR_12->phy_version == 1) {
      FUNC_4(VAR_9, 0x26, 0xce00);
  FUNC_4(VAR_9, 0x21, 0x3763);
  FUNC_4(VAR_9, 0x22, 0x1bc3);
  FUNC_4(VAR_9, 0x23, 0x6f9);
  FUNC_4(VAR_9, 0x24, 0x37e);
 } else {
  FUNC_4(VAR_9, 0x26, 0xcc00);
 }
 FUNC_4(VAR_9, 0x30, 0xc6);

 FUNC_1(VAR_10, VAR_0, VAR_1);

 if (VAR_12->phy_version == 1)
  FUNC_4(VAR_9, 0x20, 0x3e1c);
 else
  FUNC_4(VAR_9, 0x20, 0x301c);

 if (VAR_12->phy_version == 0)
  FUNC_1(VAR_10, VAR_4, VAR_5);


 VAR_13 = VAR_11->rf_curchan;
 FUNC_8(VAR_9, 7, 0);

 if (VAR_11->rf_type != VAR_7) {
  FUNC_6(VAR_9, 0x75, 0x80);
  FUNC_6(VAR_9, 0x79, 0x81);
 }

 FUNC_6(VAR_9, 0x50, 0x20);
 FUNC_6(VAR_9, 0x50, 0x23);

 if (VAR_11->rf_type == VAR_7) {
  FUNC_6(VAR_9, 0x50, 0x20);
  FUNC_6(VAR_9, 0x5a, 0x70);
 }

 FUNC_6(VAR_9, 0x5b, 0x7b);
 FUNC_6(VAR_9, 0x5c, 0xb0);
 FUNC_5(VAR_9, 0x7a, 0x7);

 FUNC_8(VAR_9, VAR_13, 0);

 FUNC_4(VAR_9, 0x14, 0x80);
 FUNC_4(VAR_9, 0x32, 0xca);
 FUNC_4(VAR_9, 0x2a, 0x88a3);

 FUNC_7(VAR_9, ((void*)0));

 if (VAR_11->rf_type == VAR_7)
  FUNC_6(VAR_9, 0x5d, 0xd);

 FUNC_0(VAR_10, VAR_4, 0xffc0, 0x4);
}
