
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_3__ {int board_flags2; } ;
struct bwn_softc {TYPE_1__ sc_board_info; int sc_dev; } ;
struct bwn_phy_n {int hw_phyrxchain; int hw_phytxchain; } ;
struct TYPE_4__ {int rev; struct bwn_phy_n* phy_n; } ;
struct bwn_mac {TYPE_2__ mac_phy; struct bwn_softc* mac_sc; } ;


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
 char* VAR_14 ;
 char* VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_0 (struct bwn_softc*,char*,char const*,int) ;
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
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct bwn_mac*,int ,int,int) ;
 int FUNC_4 (struct bwn_mac*,int ,int) ;
 int FUNC_5 (struct bwn_mac*,int,int) ;
 int FUNC_6 (int ,char const*,int*) ;
 scalar_t__ FUNC_7 (struct bwn_mac*) ;
 int FUNC_8 (struct bwn_mac*) ;
 int FUNC_9 (struct bwn_mac*) ;
 scalar_t__ FUNC_10 (struct bwn_mac*) ;
 int FUNC_11 (struct bwn_mac*,int,int*,int*,int ) ;
 int FUNC_12 (struct bwn_mac*,int ) ;
 int FUNC_13 (struct bwn_mac*,int ,int) ;
 int FUNC_14 (struct bwn_mac*,int ,int,int*) ;
 size_t FUNC_15 (int,int) ;
 int FUNC_16 (int*) ;

__attribute__((used)) static int FUNC_17(struct bwn_mac *VAR_42)
{
 struct bwn_softc *VAR_43 = VAR_42->mac_sc;
 struct bwn_phy_n *VAR_44 = VAR_42->mac_phy.phy_n;


 uint8_t VAR_45[7] = { 0x4, 0x3, 0x5, 0x2, 0x1, 0x8, 0x1F };
 uint8_t VAR_46[7] = { 8, 4, 4, 4, 4, 6, 1 };

 uint8_t VAR_47[9] = { 0x0, 0x1, 0x2, 0x8, 0x5, 0x6, 0xF, 0x3,
     0x1F };
 uint8_t VAR_48[9] = { 8, 6, 6, 4, 4, 16, 43, 1, 1 };
 uint8_t VAR_49[9] = { 0x0, 0x1, 0x2, 0x8, 0x5, 0x6, 0x3, 0x4, 0x1F };
 uint8_t VAR_50[9] = { 8, 6, 6, 4, 4, 18, 42, 1, 1 };

 uint16_t VAR_51[5][4] = {
  { 0xa2, 0xb4, 0xb4, 0x89, },
  { 0xb4, 0xb4, 0xb4, 0x24, },
  { 0xa2, 0xb4, 0xb4, 0x74, },
  { 0xa2, 0xb4, 0xb4, 0x270, },
  { 0xa2, 0xb4, 0xb4, 0x00, },
 };
 uint16_t VAR_52[5][4] = {
  { 0x02, 0x02, 0x02, 0x00, },
  { 0x02, 0x02, 0x02, 0x02, },
  { 0x02, 0x02, 0x02, 0x04, },
  { 0x02, 0x02, 0x02, 0x00, },
  { 0x02, 0x02, 0x02, 0x00, },
 };
 uint16_t *VAR_53, *VAR_54;

 const char *VAR_55;
 uint8_t VAR_56;
 uint16_t VAR_57;
 uint32_t VAR_58;
 int VAR_59;

 FUNC_4(VAR_42, VAR_31, 0x1f8);
 FUNC_4(VAR_42, VAR_32, 0x1f8);

 VAR_58 = FUNC_12(VAR_42, FUNC_2(30, 0));
 VAR_58 &= 0xffffff;
 FUNC_13(VAR_42, FUNC_2(30, 0), VAR_58);

 FUNC_4(VAR_42, VAR_33, 0x0125);
 FUNC_4(VAR_42, VAR_34, 0x01B3);
 FUNC_4(VAR_42, VAR_35, 0x0105);
 FUNC_4(VAR_42, VAR_36, 0x016E);
 FUNC_4(VAR_42, VAR_37, 0x00CD);
 FUNC_4(VAR_42, VAR_38, 0x0020);

 FUNC_4(VAR_42, VAR_39, 0x000C);
 FUNC_4(VAR_42, VAR_40, 0x000C);


 FUNC_11(VAR_42, 1, VAR_45, VAR_46,
     FUNC_16(VAR_45));


 if (FUNC_10(VAR_42))
  FUNC_11(VAR_42, 0, VAR_47,
    VAR_48, FUNC_16(VAR_47));
 if (VAR_44->hw_phyrxchain != 3 &&
     VAR_44->hw_phyrxchain != VAR_44->hw_phytxchain) {
  if (FUNC_10(VAR_42)) {
   VAR_50[5] = 59;
   VAR_50[6] = 1;
   VAR_49[7] = 0x1F;
  }
  FUNC_11(VAR_42, 0, VAR_49, VAR_50,
      FUNC_16(VAR_49));
 }

 VAR_57 = (FUNC_7(VAR_42) == VAR_16) ?
  0x2 : 0x9C40;
 FUNC_4(VAR_42, VAR_30, VAR_57);

 FUNC_3(VAR_42, VAR_41, 0xF0FF, 0x0700);

 if (!FUNC_8(VAR_42)) {
  FUNC_13(VAR_42, FUNC_2(16, 3), 0x18D);
  FUNC_13(VAR_42, FUNC_2(16, 127), 0x18D);
 } else {
  FUNC_13(VAR_42, FUNC_2(16, 3), 0x14D);
  FUNC_13(VAR_42, FUNC_2(16, 127), 0x14D);
 }

 FUNC_9(VAR_42);

 FUNC_13(VAR_42, FUNC_1(8, 0), 2);
 FUNC_13(VAR_42, FUNC_1(8, 16), 2);

 if (FUNC_7(VAR_42) == VAR_16)
  VAR_55 = VAR_14;
 else
  VAR_55 = VAR_15;

 VAR_59 = FUNC_6(VAR_43->sc_dev, VAR_55,
     &VAR_56);
 if (VAR_59) {
  FUNC_0(VAR_42->mac_sc, "Error reading PDet range %s from "
      "NVRAM: %d\n", VAR_55, VAR_59);
  return (VAR_59);
 }


 VAR_53 = VAR_51[FUNC_15(VAR_56, 4)];
 VAR_54 = VAR_52[FUNC_15(VAR_56, 4)];
 switch (VAR_56) {
 case 3:
  if (!(VAR_42->mac_phy.rev >= 4 &&
        FUNC_7(VAR_42) == VAR_16))
   break;

 case 0:
 case 1:
  FUNC_14(VAR_42, FUNC_1(8, 0x08), 4, VAR_53);
  FUNC_14(VAR_42, FUNC_1(8, 0x18), 4, VAR_53);
  FUNC_14(VAR_42, FUNC_1(8, 0x0c), 4, VAR_54);
  FUNC_14(VAR_42, FUNC_1(8, 0x1c), 4, VAR_54);
  break;
 case 2:
  if (VAR_42->mac_phy.rev >= 6) {
   if (FUNC_7(VAR_42) == VAR_16)
    VAR_53[3] = 0x94;
   else
    VAR_53[3] = 0x8e;
   VAR_54[3] = 3;
  } else if (VAR_42->mac_phy.rev == 5) {
   VAR_53[3] = 0x84;
   VAR_54[3] = 2;
  }
  FUNC_14(VAR_42, FUNC_1(8, 0x08), 4, VAR_53);
  FUNC_14(VAR_42, FUNC_1(8, 0x18), 4, VAR_53);
  FUNC_14(VAR_42, FUNC_1(8, 0x0c), 4, VAR_54);
  FUNC_14(VAR_42, FUNC_1(8, 0x1c), 4, VAR_54);
  break;
 case 4:
 case 5:
  if (FUNC_7(VAR_42) != VAR_16) {
   if (VAR_56 == 4) {
    VAR_53[3] = 0x8e;
    VAR_57 = 0x96;
    VAR_54[3] = 0x2;
   } else {
    VAR_53[3] = 0x89;
    VAR_57 = 0x89;
    VAR_54[3] = 0;
   }
  } else {
   if (VAR_56 == 4) {
    VAR_53[3] = 0x89;
    VAR_57 = 0x8b;
    VAR_54[3] = 0x2;
   } else {
    VAR_53[3] = 0x74;
    VAR_57 = 0x70;
    VAR_54[3] = 0;
   }
  }
  FUNC_14(VAR_42, FUNC_1(8, 0x08), 4, VAR_53);
  FUNC_14(VAR_42, FUNC_1(8, 0x0c), 4, VAR_54);
  VAR_53[3] = VAR_57;
  FUNC_14(VAR_42, FUNC_1(8, 0x18), 4, VAR_53);
  FUNC_14(VAR_42, FUNC_1(8, 0x1c), 4, VAR_54);
  break;
 }

 FUNC_5(VAR_42, VAR_0 | VAR_6, 0x00);
 FUNC_5(VAR_42, VAR_1 | VAR_6, 0x00);
 FUNC_5(VAR_42, VAR_0 | VAR_3, 0x06);
 FUNC_5(VAR_42, VAR_1 | VAR_3, 0x06);
 FUNC_5(VAR_42, VAR_0 | VAR_2, 0x07);
 FUNC_5(VAR_42, VAR_1 | VAR_2, 0x07);
 FUNC_5(VAR_42, VAR_0 | VAR_5, 0x88);
 FUNC_5(VAR_42, VAR_1 | VAR_5, 0x88);
 FUNC_5(VAR_42, VAR_0 | VAR_4, 0x00);
 FUNC_5(VAR_42, VAR_1 | VAR_4, 0x00);
 FUNC_5(VAR_42, VAR_0 | VAR_7, 0x00);
 FUNC_5(VAR_42, VAR_1 | VAR_7, 0x00);



 if ((VAR_43->sc_board_info.board_flags2 & VAR_11 &&
      FUNC_7(VAR_42) == VAR_17) ||
     (VAR_43->sc_board_info.board_flags2 & VAR_12 &&
      FUNC_7(VAR_42) == VAR_16))
  VAR_58 = 0x00088888;
 else
  VAR_58 = 0x88888888;
 FUNC_13(VAR_42, FUNC_2(30, 1), VAR_58);
 FUNC_13(VAR_42, FUNC_2(30, 2), VAR_58);
 FUNC_13(VAR_42, FUNC_2(30, 3), VAR_58);

 if (VAR_42->mac_phy.rev == 4 &&
     FUNC_7(VAR_42) == VAR_17) {
  FUNC_5(VAR_42, VAR_8 | VAR_10,
    0x70);
  FUNC_5(VAR_42, VAR_9 | VAR_10,
    0x70);
 }


 FUNC_4(VAR_42, VAR_26, 0x03eb);
 FUNC_4(VAR_42, VAR_27, 0x03eb);
 FUNC_4(VAR_42, VAR_28, 0x0341);
 FUNC_4(VAR_42, VAR_29, 0x0341);
 FUNC_4(VAR_42, VAR_18, 0x042b);
 FUNC_4(VAR_42, VAR_19, 0x042b);
 FUNC_4(VAR_42, VAR_20, 0x0381);
 FUNC_4(VAR_42, VAR_21, 0x0381);
 FUNC_4(VAR_42, VAR_22, 0x042b);
 FUNC_4(VAR_42, VAR_23, 0x042b);
 FUNC_4(VAR_42, VAR_24, 0x0381);
 FUNC_4(VAR_42, VAR_25, 0x0381);

 if (VAR_42->mac_phy.rev >= 6 && VAR_43->sc_board_info.board_flags2 & VAR_13)
  ;

 return (0);
}
