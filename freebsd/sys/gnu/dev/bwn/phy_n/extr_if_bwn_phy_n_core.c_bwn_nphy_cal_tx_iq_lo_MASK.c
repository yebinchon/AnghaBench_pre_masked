
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint16_t ;
struct TYPE_2__ {int channel_type; int center_freq; } ;
struct bwn_phy_n {int hang_avoid; int mphase_cal_phase_id; size_t* mphase_txcal_bestcoeffs; int txiqlocal_coeffsvalid; size_t* txiqlocal_bestc; size_t mphase_txcal_cmdidx; TYPE_1__ txiqlocal_chanspec; scalar_t__ mphase_txcal_numcmds; scalar_t__ ipa2g_on; } ;
struct bwn_phy {int rev; struct bwn_phy_n* phy_n; } ;
struct bwn_nphy_txgains {int dummy; } ;
struct bwn_nphy_iqcal_params {size_t cal_gain; int* ncorr; } ;
struct bwn_mac {struct bwn_phy mac_phy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t FUNC_1 (struct bwn_mac*,int ) ;
 int FUNC_2 (struct bwn_mac*,int ,size_t) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (struct bwn_mac*) ;
 int FUNC_5 (struct bwn_mac*) ;
 int FUNC_6 (struct bwn_mac*,int *) ;
 scalar_t__ FUNC_7 (struct bwn_mac*) ;
 int FUNC_8 (struct bwn_mac*,int,struct bwn_nphy_txgains,struct bwn_nphy_iqcal_params*) ;
 int FUNC_9 (struct bwn_mac*,int,int,int ,int,int,int) ;
 int FUNC_10 (struct bwn_mac*,int) ;
 int FUNC_11 (struct bwn_mac*) ;
 int FUNC_12 (struct bwn_mac*) ;
 int FUNC_13 (struct bwn_mac*) ;
 int FUNC_14 (struct bwn_mac*) ;
 int FUNC_15 (struct bwn_mac*) ;
 int FUNC_16 (struct bwn_mac*,int,int,int,int,int) ;
 int FUNC_17 (struct bwn_mac*,size_t) ;
 size_t FUNC_18 (struct bwn_mac*,int ) ;
 int FUNC_19 (struct bwn_mac*,int ,int,size_t*) ;
 int FUNC_20 (struct bwn_mac*,int ,int ) ;
 int FUNC_21 (struct bwn_mac*,int ,int,size_t const*) ;
 size_t FUNC_22 (size_t,size_t) ;
 size_t* VAR_10 ;
 size_t* VAR_11 ;
 size_t* VAR_12 ;
 size_t* VAR_13 ;
 size_t* VAR_14 ;
 size_t* VAR_15 ;
 size_t* VAR_16 ;
 size_t* VAR_17 ;
 size_t* VAR_18 ;
 size_t* VAR_19 ;

__attribute__((used)) static int FUNC_23(struct bwn_mac *VAR_20,
    struct bwn_nphy_txgains VAR_21,
    bool VAR_22, bool VAR_23)
{
 struct bwn_phy *VAR_24 = &VAR_20->mac_phy;
 struct bwn_phy_n *VAR_25 = VAR_20->mac_phy.phy_n;
 int VAR_26;
 int VAR_27 = 0;
 int VAR_28;
 bool VAR_29 = 0;
 uint8_t VAR_30;
 uint16_t VAR_31, VAR_32, VAR_33, VAR_34, VAR_35, VAR_36, VAR_37 = 0, VAR_38;
 const uint16_t *VAR_39;
 bool VAR_40;

 uint16_t VAR_41[11];
 uint16_t VAR_42 = 0;
 uint16_t VAR_43[2];
 uint16_t VAR_44[2];
 struct bwn_nphy_iqcal_params VAR_45[2];
 bool VAR_46[2] = { };

 FUNC_10(VAR_20, 1);

 if (VAR_20->mac_phy.rev >= 4) {
  VAR_29 = VAR_25->hang_avoid;
  VAR_25->hang_avoid = 0;
 }

 FUNC_19(VAR_20, FUNC_0(7, 0x110), 2, VAR_43);

 for (VAR_26 = 0; VAR_26 < 2; VAR_26++) {
  FUNC_8(VAR_20, VAR_26, VAR_21, &VAR_45[VAR_26]);
  VAR_44[VAR_26] = VAR_45[VAR_26].cal_gain;
 }

 FUNC_21(VAR_20, FUNC_0(7, 0x110), 2, VAR_44);

 FUNC_14(VAR_20);
 FUNC_13(VAR_20);

 VAR_40 = VAR_20->mac_phy.rev >= 6 ||
  (VAR_20->mac_phy.rev == 5 && VAR_25->ipa2g_on &&
  FUNC_4(VAR_20) == VAR_0);
 if (VAR_40) {
  if (FUNC_7(VAR_20)) {
   FUNC_21(VAR_20, FUNC_0(15, 0), 18,
     VAR_17);
   FUNC_21(VAR_20, FUNC_0(15, 32), 18,
     VAR_15);
  } else {
   FUNC_21(VAR_20, FUNC_0(15, 0), 18,
     VAR_16);
   FUNC_21(VAR_20, FUNC_0(15, 32), 18,
     VAR_14);
  }
 }

 if (VAR_24->rev >= 19) {

 } else if (VAR_24->rev >= 7) {
  FUNC_2(VAR_20, VAR_2, 0x8AD9);
 } else {
  FUNC_2(VAR_20, VAR_2, 0x8AA9);
 }

 if (!FUNC_7(VAR_20))
  VAR_28 = 2500;
 else
  VAR_28 = 5000;

 if (VAR_25->mphase_cal_phase_id > 2)
  FUNC_9(VAR_20, (FUNC_7(VAR_20) ? 40 : 20) * 8,
         0xFFFF, 0, 1, 0, 0);
 else
  VAR_27 = FUNC_16(VAR_20, VAR_28, 250, 1, 0, 0);

 if (VAR_27 == 0) {
  if (VAR_25->mphase_cal_phase_id > 2) {
   VAR_39 = VAR_25->mphase_txcal_bestcoeffs;
   VAR_30 = 11;
   if (VAR_20->mac_phy.rev < 3)
    VAR_30 -= 2;
  } else {
   if (!VAR_22 && VAR_25->txiqlocal_coeffsvalid) {
    VAR_39 = VAR_25->txiqlocal_bestc;
    VAR_30 = 11;
    if (VAR_20->mac_phy.rev < 3)
     VAR_30 -= 2;
   } else {
    VAR_22 = 1;
    if (VAR_20->mac_phy.rev >= 3) {
     VAR_39 = VAR_19;
     VAR_30 = VAR_9;
    } else {
     VAR_39 = VAR_18;
     VAR_30 = VAR_8;
    }
   }
  }

  FUNC_21(VAR_20, FUNC_0(15, 64), VAR_30, VAR_39);

  if (VAR_22) {
   if (VAR_20->mac_phy.rev >= 3)
    VAR_35 = VAR_5;
   else
    VAR_35 = VAR_4;
  } else {
   if (VAR_20->mac_phy.rev >= 3)
    VAR_35 = VAR_7;
   else
    VAR_35 = VAR_6;
  }

  if (VAR_23) {
   VAR_34 = VAR_25->mphase_txcal_cmdidx;
   VAR_36 = FUNC_22(VAR_35,
    (uint16_t)(VAR_34 + VAR_25->mphase_txcal_numcmds));
  } else {
   VAR_34 = 0;
   VAR_36 = VAR_35;
  }

  for (; VAR_34 < VAR_36; VAR_34++) {
   if (VAR_22) {
    if (VAR_20->mac_phy.rev >= 3)
     VAR_38 = VAR_11[VAR_34];
    else
     VAR_38 = VAR_10[VAR_34];
   } else {
    if (VAR_20->mac_phy.rev >= 3)
     VAR_38 = VAR_13[VAR_34];
    else
     VAR_38 = VAR_12[VAR_34];
   }

   VAR_32 = (VAR_38 & 0x3000) >> 12;
   VAR_33 = (VAR_38 & 0x0F00) >> 8;

   if (VAR_40 && VAR_46[VAR_32] == 0) {
    FUNC_17(VAR_20, VAR_32);
    VAR_46[VAR_32] = 1;
   }

   VAR_31 = (VAR_45[VAR_32].ncorr[VAR_33] << 8) | 0x66;
   FUNC_2(VAR_20, VAR_3, VAR_31);

   if (VAR_33 == 1 || VAR_33 == 3 || VAR_33 == 4) {
    VAR_41[0] = FUNC_18(VAR_20,
      FUNC_0(15, 69 + VAR_32));
    VAR_42 = VAR_41[0];
    VAR_41[0] = 0;
    FUNC_20(VAR_20, FUNC_0(15, 69 + VAR_32),
      0);
   }

   FUNC_2(VAR_20, VAR_1, VAR_38);
   for (VAR_26 = 0; VAR_26 < 2000; VAR_26++) {
    VAR_31 = FUNC_1(VAR_20, VAR_1);
    if (VAR_31 & 0xC000)
     break;
    FUNC_3(10);
   }

   FUNC_19(VAR_20, FUNC_0(15, 96), VAR_30,
      VAR_41);
   FUNC_21(VAR_20, FUNC_0(15, 64), VAR_30,
      VAR_41);

   if (VAR_33 == 1 || VAR_33 == 3 || VAR_33 == 4)
    VAR_41[0] = VAR_42;
  }

  if (VAR_23)
   VAR_25->mphase_txcal_cmdidx = (VAR_36 >= VAR_35) ? 0 : VAR_36;

  VAR_37 = (VAR_20->mac_phy.rev < 3) ? 6 : 7;

  if (!VAR_23 || VAR_25->mphase_cal_phase_id == VAR_37) {
   FUNC_21(VAR_20, FUNC_0(15, 96), 4, VAR_41);
   FUNC_19(VAR_20, FUNC_0(15, 80), 4, VAR_41);
   if (VAR_20->mac_phy.rev < 3) {
    VAR_41[0] = 0;
    VAR_41[1] = 0;
    VAR_41[2] = 0;
    VAR_41[3] = 0;
   }
   FUNC_21(VAR_20, FUNC_0(15, 88), 4,
      VAR_41);
   FUNC_19(VAR_20, FUNC_0(15, 101), 2,
      VAR_41);
   FUNC_21(VAR_20, FUNC_0(15, 85), 2,
      VAR_41);
   FUNC_21(VAR_20, FUNC_0(15, 93), 2,
      VAR_41);
   VAR_30 = 11;
   if (VAR_20->mac_phy.rev < 3)
    VAR_30 -= 2;
   FUNC_19(VAR_20, FUNC_0(15, 96), VAR_30,
      VAR_25->txiqlocal_bestc);
   VAR_25->txiqlocal_coeffsvalid = 1;
   VAR_25->txiqlocal_chanspec.center_freq =
      FUNC_5(VAR_20);
   VAR_25->txiqlocal_chanspec.channel_type = FUNC_6(VAR_20, ((void*)0));
  } else {
   VAR_30 = 11;
   if (VAR_20->mac_phy.rev < 3)
    VAR_30 -= 2;
   FUNC_19(VAR_20, FUNC_0(15, 96), VAR_30,
      VAR_25->mphase_txcal_bestcoeffs);
  }

  FUNC_11(VAR_20);
  FUNC_2(VAR_20, VAR_2, 0);
 }

 FUNC_12(VAR_20);
 FUNC_21(VAR_20, FUNC_0(7, 0x110), 2, VAR_43);

 if (VAR_20->mac_phy.rev < 2 && (!VAR_23 || VAR_25->mphase_cal_phase_id == VAR_37))
  FUNC_15(VAR_20);

 if (VAR_20->mac_phy.rev >= 4)
  VAR_25->hang_avoid = VAR_29;

 FUNC_10(VAR_20, 0);

 return VAR_27;
}
