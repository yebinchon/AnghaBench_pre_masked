
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct bwi_softc {int sc_card_flags; } ;
struct bwi_rf {int rf_rev; int rf_lo_gain; int rf_rx_gain; } ;
struct bwi_phy {int phy_rev; } ;
struct TYPE_2__ {int bbp_atten; } ;
struct bwi_mac {struct bwi_softc* mac_sc; TYPE_1__ mac_tpctl; struct bwi_rf mac_rf; struct bwi_phy mac_phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct bwi_softc*,int,char*,int,int) ;
 int FUNC_2 (struct bwi_mac*,int,int) ;
 int FUNC_3 (struct bwi_mac*,int,int,int) ;
 int FUNC_4 (struct bwi_mac*,int const) ;
 int FUNC_5 (struct bwi_mac*,int,int) ;
 int FUNC_6 (struct bwi_mac*,int const,int) ;
 int FUNC_7 (struct bwi_mac*,int,int) ;
 int FUNC_8 (struct bwi_mac*,int,int,int) ;
 int FUNC_9 (struct bwi_mac*,int const) ;
 int FUNC_10 (struct bwi_mac*,int const,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_11 (struct bwi_mac*,int) ;
 scalar_t__ FUNC_12 (struct bwi_mac*,int) ;

void
FUNC_13(struct bwi_mac *VAR_5)
{



 static const uint16_t VAR_6[3] =
 { 0x52, 0x43, 0x7a };
 static const uint16_t VAR_7[15] = {
  0x0429, 0x0001, 0x0811, 0x0812,
  0x0814, 0x0815, 0x005a, 0x0059,
  0x0058, 0x000a, 0x0003, 0x080f,
  0x0810, 0x002b, 0x0015
 };

 struct bwi_softc *VAR_8 = VAR_5->mac_sc;
 struct bwi_phy *VAR_9 = &VAR_5->mac_phy;
 struct bwi_rf *VAR_10 = &VAR_5->mac_rf;
 uint16_t VAR_11[15];
 uint16_t VAR_12[3];
 uint16_t VAR_13;
 int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;




 for (VAR_14 = 0; VAR_14 < 15; ++VAR_14)
  VAR_11[VAR_14] = FUNC_4(VAR_5, VAR_7[VAR_14]);
 FUNC_4(VAR_5, 0x2d);

 for (VAR_14 = 0; VAR_14 < 3; ++VAR_14)
  VAR_12[VAR_14] = FUNC_9(VAR_5, VAR_6[VAR_14]);

 FUNC_2(VAR_5, 0x429, 0xc000);
 FUNC_5(VAR_5, 0x1, 0x8000);

 FUNC_5(VAR_5, 0x811, 0x2);
 FUNC_2(VAR_5, 0x812, 0x2);
 FUNC_5(VAR_5, 0x811, 0x1);
 FUNC_2(VAR_5, 0x812, 0x1);

 FUNC_5(VAR_5, 0x814, 0x1);
 FUNC_2(VAR_5, 0x815, 0x1);
 FUNC_5(VAR_5, 0x814, 0x2);
 FUNC_2(VAR_5, 0x815, 0x2);

 FUNC_5(VAR_5, 0x811, 0xc);
 FUNC_5(VAR_5, 0x812, 0xc);
 FUNC_5(VAR_5, 0x811, 0x30);
 FUNC_3(VAR_5, 0x812, 0xffcf, 0x10);

 FUNC_6(VAR_5, 0x5a, 0x780);
 FUNC_6(VAR_5, 0x59, 0xc810);
 FUNC_6(VAR_5, 0x58, 0xd);
 FUNC_5(VAR_5, 0xa, 0x2000);

 FUNC_5(VAR_5, 0x814, 0x4);
 FUNC_2(VAR_5, 0x815, 0x4);

 FUNC_3(VAR_5, 0x3, 0xff9f, 0x40);

 if (VAR_10->rf_rev == 8) {
  VAR_16 = 15;
  FUNC_10(VAR_5, 0x43, VAR_16);
 } else {
  VAR_16 = 9;
      FUNC_10(VAR_5, 0x52, 0x0);
  FUNC_8(VAR_5, 0x43, 0xfff0, VAR_16);
 }

 FUNC_11(VAR_5, 11);

 if (VAR_9->phy_rev >= 3)
  FUNC_6(VAR_5, 0x80f, 0xc020);
 else
  FUNC_6(VAR_5, 0x80f, 0x8020);
 FUNC_6(VAR_5, 0x810, 0);

 FUNC_3(VAR_5, 0x2b, 0xffc0, 0x1);
 FUNC_3(VAR_5, 0x2b, 0xc0ff, 0x800);
 FUNC_5(VAR_5, 0x811, 0x100);
 FUNC_2(VAR_5, 0x812, 0x3000);

 if ((VAR_8->sc_card_flags & VAR_0) &&
     VAR_9->phy_rev >= 7) {
  FUNC_5(VAR_5, 0x811, 0x800);
  FUNC_5(VAR_5, 0x812, 0x8000);
 }
 FUNC_7(VAR_5, 0x7a, 0xff08);





 VAR_15 = 0;
 for (VAR_14 = 0; VAR_14 < VAR_16; ++VAR_14) {
  for (VAR_15 = 0; VAR_15 < 16; ++VAR_15) {
   FUNC_10(VAR_5, 0x43, VAR_14);

   if (FUNC_12(VAR_5, VAR_15))
    goto loop1_exit;
  }
 }
loop1_exit:
 VAR_17 = VAR_14;
 VAR_18 = VAR_15;





 if (VAR_18 >= 8) {
  FUNC_5(VAR_5, 0x812, 0x30);
  VAR_13 = 0x1b;
  for (VAR_14 = VAR_18 - 8; VAR_14 < 16; ++VAR_14) {
   VAR_13 -= 3;
   if (FUNC_12(VAR_5, VAR_14))
    break;
  }
 } else {
  VAR_13 = 0x18;
 }





 for (VAR_14 = 4; VAR_14 < 15; ++VAR_14)
  FUNC_6(VAR_5, VAR_7[VAR_14], VAR_11[VAR_14]);

 FUNC_11(VAR_5, VAR_5->mac_tpctl.bbp_atten);

 for (VAR_14 = 0; VAR_14 < 3; ++VAR_14)
  FUNC_10(VAR_5, VAR_6[VAR_14], VAR_12[VAR_14]);

 FUNC_6(VAR_5, VAR_7[2], VAR_11[2] | 0x3);
 FUNC_0(10);
 FUNC_6(VAR_5, VAR_7[2], VAR_11[2]);
 FUNC_6(VAR_5, VAR_7[3], VAR_11[3]);
 FUNC_6(VAR_5, VAR_7[0], VAR_11[0]);
 FUNC_6(VAR_5, VAR_7[1], VAR_11[1]);




 VAR_10->rf_lo_gain = (VAR_18 * 6) - (VAR_17 * 4) - 11;
 VAR_10->rf_rx_gain = VAR_13 * 2;
 FUNC_1(VAR_5->mac_sc, VAR_2 | VAR_1,
  "lo gain: %u, rx gain: %u\n",
  VAR_10->rf_lo_gain, VAR_10->rf_rx_gain);



}
