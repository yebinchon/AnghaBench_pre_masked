
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct ieee80211com {int ic_curchan; } ;
struct bwn_stxtable {int member_0; int member_1; int member_2; int member_3; int member_4; int st_rfshift; int st_physhift; int st_phyoffset; int st_mask; int st_rfaddr; } ;
struct bwn_softc {int sc_dev; int * sc_pmu; struct ieee80211com sc_ic; } ;
struct bwn_phy_lp {int plp_rccap; } ;
struct TYPE_2__ {int rf_ver; int rev; struct bwn_phy_lp phy_lp; } ;
struct bwn_mac {TYPE_1__ mac_phy; struct bwn_softc* mac_sc; } ;


 int VAR_0 ;
 int FUNC_0 (struct bwn_mac*,int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct bwn_mac*,int ,int) ;
 int FUNC_3 (struct bwn_mac*,int ,int,int) ;
 int FUNC_4 (struct bwn_mac*,int ,int) ;
 int FUNC_5 (struct bwn_mac*,int ) ;
 int FUNC_6 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct bwn_stxtable const*) ;
 int FUNC_9 (struct bwn_mac*) ;
 int FUNC_10 (struct bwn_mac*) ;
 int FUNC_11 (struct bwn_mac*) ;
 int FUNC_12 (struct bwn_mac*) ;
 int FUNC_13 (struct bwn_mac*) ;
 int FUNC_14 (struct bwn_mac*) ;
 int FUNC_15 (struct bwn_mac*) ;
 int FUNC_16 (struct bwn_mac*) ;
 int FUNC_17 (struct bwn_mac*,int) ;
 int FUNC_18 (struct bwn_mac*) ;
 int FUNC_19 (int ,char*,...) ;

int
FUNC_20(struct bwn_mac *VAR_2)
{
 static const struct bwn_stxtable VAR_3[] = {
  { 2, 6, 0x3d, 3, 0x01 }, { 1, 12, 0x4c, 1, 0x01 },
  { 1, 8, 0x50, 0, 0x7f }, { 0, 8, 0x44, 0, 0xff },
  { 1, 0, 0x4a, 0, 0xff }, { 0, 4, 0x4d, 0, 0xff },
  { 1, 4, 0x4e, 0, 0xff }, { 0, 12, 0x4f, 0, 0x0f },
  { 1, 0, 0x4f, 4, 0x0f }, { 3, 0, 0x49, 0, 0x0f },
  { 4, 3, 0x46, 4, 0x07 }, { 3, 15, 0x46, 0, 0x01 },
  { 4, 0, 0x46, 1, 0x07 }, { 3, 8, 0x48, 4, 0x07 },
  { 3, 11, 0x48, 0, 0x0f }, { 3, 4, 0x49, 4, 0x0f },
  { 2, 15, 0x45, 0, 0x01 }, { 5, 13, 0x52, 4, 0x07 },
  { 6, 0, 0x52, 7, 0x01 }, { 5, 3, 0x41, 5, 0x07 },
  { 5, 6, 0x41, 0, 0x0f }, { 5, 10, 0x42, 5, 0x07 },
  { 4, 15, 0x42, 0, 0x01 }, { 5, 0, 0x42, 1, 0x07 },
  { 4, 11, 0x43, 4, 0x0f }, { 4, 7, 0x43, 0, 0x0f },
  { 4, 6, 0x45, 1, 0x01 }, { 2, 7, 0x40, 4, 0x0f },
  { 2, 11, 0x40, 0, 0x0f }
 };
 struct bwn_phy_lp *VAR_4 = &VAR_2->mac_phy.phy_lp;
 struct bwn_softc *VAR_5 = VAR_2->mac_sc;
 const struct bwn_stxtable *VAR_6;
 struct ieee80211com *VAR_7 = &VAR_5->sc_ic;
 int VAR_8, VAR_9;
 uint16_t VAR_10;


 if (VAR_5->sc_pmu == ((void*)0)) {
  FUNC_19(VAR_5->sc_dev, "no PMU; cannot configure PAREF "
      "LDO\n");
  return (VAR_1);
 }

 if ((VAR_9 = FUNC_14(VAR_2)))
  return (VAR_9);

 FUNC_11(VAR_2);


 FUNC_2(VAR_2, VAR_0, 0x2);
 FUNC_6(1);
 FUNC_0(VAR_2, VAR_0, 0xfffd);
 FUNC_6(1);

 if (VAR_2->mac_phy.rf_ver == 0x2062) {
  if ((VAR_9 = FUNC_9(VAR_2)))
   return (VAR_9);
 } else {
  if ((VAR_9 = FUNC_10(VAR_2)))
   return (VAR_9);


  for (VAR_8 = 0; VAR_8 < FUNC_8(VAR_3); VAR_8++) {
   VAR_6 = &VAR_3[VAR_8];
   VAR_10 = FUNC_5(VAR_2, VAR_6->st_rfaddr);
   VAR_10 >>= VAR_6->st_rfshift;
   VAR_10 <<= VAR_6->st_physhift;
   FUNC_3(VAR_2,
       FUNC_1(0xf2 + VAR_6->st_phyoffset),
       ~(VAR_6->st_mask << VAR_6->st_physhift), VAR_10);
  }

  FUNC_4(VAR_2, FUNC_1(0xf0), 0x5f80);
  FUNC_4(VAR_2, FUNC_1(0xf1), 0);
 }


 if (VAR_2->mac_phy.rev >= 2) {
  if ((VAR_9 = FUNC_15(VAR_2)))
   return (VAR_9);
 } else if (!VAR_4->plp_rccap) {
  if (FUNC_7(VAR_7->ic_curchan)) {
   if ((VAR_9 = FUNC_13(VAR_2)))
    return (VAR_9);
  }
 } else
  FUNC_16(VAR_2);

 VAR_9 = FUNC_17(VAR_2, 7);
 if (VAR_9)
  FUNC_19(VAR_5->sc_dev,
      "failed to change channel 7 (%d)\n", VAR_9);
 FUNC_18(VAR_2);
 FUNC_12(VAR_2);
 return (0);
}
