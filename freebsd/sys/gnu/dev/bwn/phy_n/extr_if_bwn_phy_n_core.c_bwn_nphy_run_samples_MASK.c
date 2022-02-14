
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct bwn_phy_n {int lpf_bw_overrode_for_sample_play; int bb_mult_save; } ;
struct bwn_phy {int rev; struct bwn_phy_n* phy_n; } ;
struct bwn_mac {int mac_sc; struct bwn_phy mac_phy; } ;


 int FUNC_0 (int ,char*) ;
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
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct bwn_mac*,int ,int) ;
 int FUNC_3 (struct bwn_mac*,int ) ;
 int FUNC_4 (struct bwn_mac*,int ,int) ;
 int FUNC_5 (struct bwn_mac*,int ,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct bwn_mac*) ;
 int FUNC_8 (struct bwn_mac*,int ) ;
 int FUNC_9 (struct bwn_mac*,int,int,int ,int,int) ;
 int FUNC_10 (struct bwn_mac*,int,int,int ,int,int) ;
 int FUNC_11 (struct bwn_mac*,int) ;
 int FUNC_12 (struct bwn_mac*,int ) ;
 int FUNC_13 (struct bwn_mac*,int ,int) ;

__attribute__((used)) static void FUNC_14(struct bwn_mac *VAR_10, uint16_t VAR_11, uint16_t VAR_12,
     uint16_t VAR_13, bool VAR_14, bool VAR_15,
     bool VAR_16)
{
 struct bwn_phy *VAR_17 = &VAR_10->mac_phy;
 struct bwn_phy_n *VAR_18 = VAR_10->mac_phy.phy_n;
 int VAR_19;
 uint16_t VAR_20;
 uint32_t VAR_21;

 FUNC_11(VAR_10, 1);

 if (VAR_17->rev >= 7) {
  bool VAR_22, VAR_23;

  VAR_22 = FUNC_3(VAR_10, VAR_1) & 0x80;
  VAR_23 = FUNC_3(VAR_10, VAR_2) & 0x80;

  if (VAR_22 || VAR_23) {

  } else {
   uint16_t VAR_24 = FUNC_8(VAR_10, 0);
   if (VAR_17->rev >= 19)
    FUNC_9(VAR_10, 0x80, VAR_24,
              0, 0, 1);
   else
    FUNC_10(VAR_10, 0x80, VAR_24,
             0, 0, 1);
   VAR_18->lpf_bw_overrode_for_sample_play = 1;
  }
 }

 if ((VAR_18->bb_mult_save & 0x80000000) == 0) {
  VAR_21 = FUNC_12(VAR_10, FUNC_1(15, 87));
  VAR_18->bb_mult_save = (VAR_21 & 0xFFFF) | 0x80000000;
 }

 if (VAR_16) {
  VAR_21 = !FUNC_7(VAR_10) ? 0x6464 : 0x4747;
  FUNC_13(VAR_10, FUNC_1(15, 87), VAR_21);
 }

 FUNC_5(VAR_10, VAR_7, (VAR_11 - 1));

 if (VAR_12 != 0xFFFF)
  FUNC_5(VAR_10, VAR_8, (VAR_12 - 1));
 else
  FUNC_5(VAR_10, VAR_8, VAR_12);

 FUNC_5(VAR_10, VAR_9, VAR_13);

 VAR_20 = FUNC_3(VAR_10, VAR_3);

 FUNC_4(VAR_10, VAR_3, VAR_4);
 if (VAR_14) {
  FUNC_2(VAR_10, VAR_0, 0x7FFF);
  FUNC_4(VAR_10, VAR_0, 0x8000);
 } else {
  VAR_21 = VAR_15 ? 5 : 1;
  FUNC_5(VAR_10, VAR_6, VAR_21);
 }
 for (VAR_19 = 0; VAR_19 < 100; VAR_19++) {
  if (!(FUNC_3(VAR_10, VAR_5) & 1)) {
   VAR_19 = 0;
   break;
  }
  FUNC_6(10);
 }
 if (VAR_19)
  FUNC_0(VAR_10->mac_sc, "run samples timeout\n");

 FUNC_5(VAR_10, VAR_3, VAR_20);

 FUNC_11(VAR_10, 0);
}
