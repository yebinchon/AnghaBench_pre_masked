
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct bwi_softc {int dummy; } ;
struct bwi_rf {int rf_nrssi_slope; int* rf_nrssi; int rf_curchan; } ;
struct bwi_phy {int phy_rev; int phy_version; } ;
struct bwi_mac {struct bwi_phy mac_phy; struct bwi_rf mac_rf; struct bwi_softc* mac_sc; } ;
typedef int int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bwi_softc*,int ,int) ;
 int FUNC_1 (struct bwi_softc*,int ) ;
 int FUNC_2 (struct bwi_softc*,int ,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct bwi_mac*,int const) ;
 int FUNC_5 (struct bwi_mac*,int,int) ;
 int FUNC_6 (struct bwi_mac*,int const,int) ;
 int FUNC_7 (struct bwi_mac*,int,int) ;
 int FUNC_8 (struct bwi_mac*,int const) ;
 int FUNC_9 (struct bwi_mac*,int,int) ;
 int FUNC_10 (struct bwi_mac*,int const,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_11 (struct bwi_mac*,int ) ;

__attribute__((used)) static void
FUNC_12(struct bwi_mac *VAR_6)
{



 static const uint16_t VAR_7[3] =
 { 0x7a, 0x52, 0x43 };
 static const uint16_t VAR_8[8] =
 { 0x30, 0x26, 0x15, 0x2a, 0x20, 0x5a, 0x59, 0x58 };

 struct bwi_softc *VAR_9 = VAR_6->mac_sc;
 struct bwi_rf *VAR_10 = &VAR_6->mac_rf;
 struct bwi_phy *VAR_11 = &VAR_6->mac_phy;
 uint16_t VAR_12[3];
 uint16_t VAR_13[8];
 uint16_t VAR_14, VAR_15, VAR_16;
 int16_t VAR_17[2];
 int VAR_18;




 for (VAR_18 = 0; VAR_18 < 3; ++VAR_18)
  VAR_12[VAR_18] = FUNC_8(VAR_6, VAR_7[VAR_18]);
 for (VAR_18 = 0; VAR_18 < 8; ++VAR_18)
  VAR_13[VAR_18] = FUNC_4(VAR_6, VAR_8[VAR_18]);

 VAR_14 = FUNC_1(VAR_9, VAR_2);
 VAR_15 = FUNC_1(VAR_9, VAR_0);
 VAR_16 = FUNC_1(VAR_9, VAR_3);




 if (VAR_11->phy_rev >= 5)
  FUNC_7(VAR_6, 0x7a, 0xff80);
 else
  FUNC_7(VAR_6, 0x7a, 0xfff0);
 FUNC_6(VAR_6, 0x30, 0xff);

 FUNC_2(VAR_9, VAR_1, 0x7f7f);

 FUNC_6(VAR_6, 0x26, 0);
 FUNC_5(VAR_6, 0x15, 0x20);
 FUNC_6(VAR_6, 0x2a, 0x8a3);
 FUNC_9(VAR_6, 0x7a, 0x80);

 VAR_17[0] = (int16_t)FUNC_4(VAR_6, 0x27);




 FUNC_7(VAR_6, 0x7a, 0xff80);
 if (VAR_11->phy_version >= 2)
  FUNC_2(VAR_9, VAR_0, 0x40);
 else if (VAR_11->phy_version == 0)
  FUNC_2(VAR_9, VAR_0, 0x122);
 else
  FUNC_0(VAR_9, VAR_3, 0xdfff);

 FUNC_6(VAR_6, 0x20, 0x3f3f);
 FUNC_6(VAR_6, 0x15, 0xf330);

 FUNC_10(VAR_6, 0x5a, 0x60);
 FUNC_7(VAR_6, 0x43, 0xff0f);

 FUNC_6(VAR_6, 0x5a, 0x480);
 FUNC_6(VAR_6, 0x59, 0x810);
 FUNC_6(VAR_6, 0x58, 0xd);

 FUNC_3(20);

 VAR_17[1] = (int16_t)FUNC_4(VAR_6, 0x27);




 FUNC_6(VAR_6, VAR_8[0], VAR_13[0]);
 FUNC_10(VAR_6, VAR_7[0], VAR_12[0]);

 FUNC_2(VAR_9, VAR_2, VAR_14);

 for (VAR_18 = 1; VAR_18 < 4; ++VAR_18)
  FUNC_6(VAR_6, VAR_8[VAR_18], VAR_13[VAR_18]);

 FUNC_11(VAR_6, VAR_10->rf_curchan);

 if (VAR_11->phy_version != 0)
  FUNC_2(VAR_9, VAR_3, VAR_16);

 for (; VAR_18 < 8; ++VAR_18)
  FUNC_6(VAR_6, VAR_8[VAR_18], VAR_13[VAR_18]);

 for (VAR_18 = 1; VAR_18 < 3; ++VAR_18)
  FUNC_10(VAR_6, VAR_7[VAR_18], VAR_12[VAR_18]);




 if (VAR_17[0] == VAR_17[1])
  VAR_10->rf_nrssi_slope = 0x10000;
 else
  VAR_10->rf_nrssi_slope = 0x400000 / (VAR_17[0] - VAR_17[1]);
 if (VAR_17[0] <= -4) {
  VAR_10->rf_nrssi[0] = VAR_17[0];
  VAR_10->rf_nrssi[1] = VAR_17[1];
 }



}
