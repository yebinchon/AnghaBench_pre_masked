
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct bwn_phy_n {int rxcalparams; } ;
struct bwn_nphy_txgains {int dummy; } ;
struct bwn_nphy_iqcal_params {int cal_gain; } ;
struct bwn_nphy_iq_est {int i0_pwr; int q0_pwr; int i1_pwr; int q1_pwr; } ;
struct TYPE_2__ {int rev; struct bwn_phy_n* phy_n; } ;
struct bwn_mac {TYPE_1__ mac_phy; } ;
typedef scalar_t__ bwn_band_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct bwn_mac*,int) ;
 int FUNC_2 (struct bwn_mac*,int,int) ;
 int FUNC_3 (struct bwn_mac*,int,int,int) ;
 int FUNC_4 (struct bwn_mac*,int,int) ;
 int VAR_12 ;
 int FUNC_5 (struct bwn_mac*,int ,int) ;
 int FUNC_6 (struct bwn_mac*,int ,int,int) ;
 int FUNC_7 (int,int ,int) ;
 scalar_t__ FUNC_8 (struct bwn_mac*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct bwn_mac*,int) ;
 int FUNC_11 (struct bwn_mac*,int ) ;
 int FUNC_12 (struct bwn_mac*,int,struct bwn_nphy_txgains,struct bwn_nphy_iqcal_params*) ;
 int FUNC_13 (struct bwn_mac*) ;
 int FUNC_14 (struct bwn_mac*,int,int,int,int) ;
 int FUNC_15 (struct bwn_mac*,int,int,int ,int,int,int) ;
 int FUNC_16 (struct bwn_mac*,struct bwn_nphy_iq_est*,int,int,int) ;
 int FUNC_17 (struct bwn_mac*,int) ;
 int FUNC_18 (struct bwn_mac*) ;
 int FUNC_19 (struct bwn_mac*,int,int,int,int,int) ;
 int FUNC_20 (struct bwn_mac*,int ,int,int*) ;
 int FUNC_21 (struct bwn_mac*,int ,int,int*) ;

__attribute__((used)) static int FUNC_22(struct bwn_mac *VAR_13,
   struct bwn_nphy_txgains VAR_14, uint8_t VAR_15, bool VAR_16)
{
 struct bwn_phy_n *VAR_17 = VAR_13->mac_phy.phy_n;
 int VAR_18, VAR_19, VAR_20;
 uint8_t VAR_21[2];
 uint8_t VAR_22;
 uint16_t VAR_23[6];
 uint16_t VAR_24, VAR_25, VAR_26;
 uint32_t VAR_27, VAR_28;
 bwn_band_t VAR_29;

 uint8_t VAR_30;
 uint16_t VAR_31;
 uint16_t VAR_32[3] = { 3, 3, 1 };
 uint16_t VAR_33[3] = { 7, 2, 0 };
 uint16_t VAR_34[3] = { 2, 0, 0 };
 uint32_t VAR_35[3] = { };
 uint16_t VAR_36[2];
 uint16_t VAR_37[2];
 struct bwn_nphy_iqcal_params VAR_38[2];
 struct bwn_nphy_iq_est VAR_39;
 int VAR_40 = 0;
 bool VAR_41 = 1;
 int VAR_42 = 13;

 FUNC_17(VAR_13, 1);

 if (VAR_13->mac_phy.rev < 2)
  FUNC_13(VAR_13);
 FUNC_20(VAR_13, FUNC_0(7, 0x110), 2, VAR_36);
 for (VAR_18 = 0; VAR_18 < 2; VAR_18++) {
  FUNC_12(VAR_13, VAR_18, VAR_14, &VAR_38[VAR_18]);
  VAR_37[VAR_18] = VAR_38[VAR_18].cal_gain;
 }
 FUNC_21(VAR_13, FUNC_0(7, 0x110), 2, VAR_37);

 for (VAR_18 = 0; VAR_18 < 2; VAR_18++) {
  if (VAR_18 == 0) {
   VAR_21[0] = VAR_6;
   VAR_21[1] = VAR_7;
   VAR_22 = VAR_3;
  } else {
   VAR_21[0] = VAR_7;
   VAR_21[1] = VAR_6;
   VAR_22 = VAR_4;
  }

  VAR_23[1] = FUNC_1(VAR_13, VAR_8);
  VAR_23[2] = FUNC_1(VAR_13, VAR_22);
  VAR_23[3] = FUNC_1(VAR_13, VAR_5);
  VAR_23[4] = FUNC_1(VAR_13, VAR_21[0]);
  VAR_23[5] = FUNC_1(VAR_13, VAR_21[1]);

  FUNC_3(VAR_13, VAR_8,
    ~VAR_9 & 0xFFFF,
    ((1 - VAR_18) << VAR_10));
  FUNC_3(VAR_13, VAR_8, ~VAR_11,
    (1 - VAR_18));
  FUNC_2(VAR_13, VAR_22, 0x0006);
  FUNC_2(VAR_13, VAR_5, 0x0006);

  VAR_29 = FUNC_8(VAR_13);

  if (VAR_17->rxcalparams & 0xFF000000) {
   if (VAR_29 == VAR_2)
    FUNC_4(VAR_13, VAR_21[0], 0x140);
   else
    FUNC_4(VAR_13, VAR_21[0], 0x110);
  } else {
   if (VAR_29 == VAR_2)
    FUNC_4(VAR_13, VAR_21[0], 0x180);
   else
    FUNC_4(VAR_13, VAR_21[0], 0x120);
  }

  if (VAR_29 == VAR_2)
   FUNC_4(VAR_13, VAR_21[1], 0x148);
  else
   FUNC_4(VAR_13, VAR_21[1], 0x114);

  if (VAR_17->rxcalparams & 0x10000) {
   FUNC_6(VAR_13, VAR_0, 0xFC,
     (VAR_18 + 1));
   FUNC_6(VAR_13, VAR_1, 0xFC,
     (2 - VAR_18));
  }

  for (VAR_19 = 0; VAR_19 < 4; VAR_19++) {
   if (VAR_19 < 3) {
    VAR_26 = VAR_32[VAR_19];
    VAR_24 = VAR_33[VAR_19];
    VAR_25 = VAR_34[VAR_19];
   } else {
    if (VAR_35[1] > 10000) {
     VAR_30 = 1;
     VAR_31 = VAR_24;
     VAR_20 = 2;
    } else {
     if (VAR_35[0] > 10000) {
      VAR_30 = 1;
      VAR_31 = VAR_24;
      VAR_20 = 1;
     } else {
      VAR_20 = 0;
      VAR_30 = 2;
      VAR_31 = VAR_25;
     }
    }
    VAR_26 = VAR_32[VAR_20];
    VAR_24 = VAR_33[VAR_20];
    VAR_25 = VAR_34[VAR_20];
    VAR_31 += VAR_42 - FUNC_9(VAR_35[VAR_20]);
    VAR_31 = FUNC_7(VAR_31, 0, 10);
    if (VAR_30 == 1)
     VAR_24 = VAR_31;
    else
     VAR_25 = VAR_31;
   }

   VAR_23[0] = ((VAR_25 << 8) | (VAR_24 << 4) |
     (VAR_26 << 2));
   FUNC_14(VAR_13, 0x400, VAR_23[0], 3,
         0);
   FUNC_11(VAR_13, VAR_12);
   FUNC_18(VAR_13);

   if (VAR_41) {
    VAR_40 = FUNC_19(VAR_13, 4000,
      (VAR_17->rxcalparams & 0xFFFF),
      0, 0, 1);
    VAR_41 = 0;
   } else {
    FUNC_15(VAR_13, 160, 0xFFFF, 0, 0,
           0, 1);
   }

   if (VAR_40 == 0) {
    if (VAR_19 < 3) {
     FUNC_16(VAR_13, &VAR_39, 1024, 32,
         0);
     if (VAR_18 == 0) {
      VAR_27 = VAR_39.i0_pwr;
      VAR_28 = VAR_39.q0_pwr;
     } else {
      VAR_27 = VAR_39.i1_pwr;
      VAR_28 = VAR_39.q1_pwr;
     }
     VAR_35[VAR_18] = ((VAR_27 + VAR_28) / 1024) + 1;
    } else {
     FUNC_10(VAR_13, 1 << VAR_18);
    }
    FUNC_18(VAR_13);
   }

   if (VAR_40 != 0)
    break;
  }

  FUNC_5(VAR_13, VAR_0, 0xFC);
  FUNC_5(VAR_13, VAR_1, 0xFC);
  FUNC_4(VAR_13, VAR_21[1], VAR_23[5]);
  FUNC_4(VAR_13, VAR_21[0], VAR_23[4]);
  FUNC_4(VAR_13, VAR_5, VAR_23[3]);
  FUNC_4(VAR_13, VAR_22, VAR_23[2]);
  FUNC_4(VAR_13, VAR_8, VAR_23[1]);

  if (VAR_40 != 0)
   break;
 }

 FUNC_14(VAR_13, 0x400, 0, 3, 1);
 FUNC_11(VAR_13, VAR_12);
 FUNC_21(VAR_13, FUNC_0(7, 0x110), 2, VAR_36);

 FUNC_17(VAR_13, 0);

 return VAR_40;
}
