
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bwi_softc {int sc_txpwr_calib; } ;
struct bwi_rf {int rf_txpower_max; } ;
struct TYPE_2__ {scalar_t__ phy_mode; } ;
struct bwi_mac {int mac_flags; TYPE_1__ mac_phy; struct bwi_rf mac_rf; struct bwi_softc* mac_sc; } ;
typedef int int8_t ;
typedef enum bwi_txpwrcb_type { ____Placeholder_bwi_txpwrcb_type } bwi_txpwrcb_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct bwi_softc*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct bwi_softc*,int,char*,...) ;
 int FUNC_2 (struct bwi_mac*) ;
 scalar_t__ VAR_9 ;
 int FUNC_3 (struct bwi_mac*,int,int) ;
 int FUNC_4 (struct bwi_mac*) ;
 int FUNC_5 (struct bwi_mac*,int*,int ) ;
 int FUNC_6 (struct bwi_mac*,int,int*) ;
 int FUNC_7 (int,int) ;

void
FUNC_8(struct bwi_mac *VAR_10, enum bwi_txpwrcb_type VAR_11)
{
 struct bwi_softc *VAR_12 = VAR_10->mac_sc;
 struct bwi_rf *VAR_13 = &VAR_10->mac_rf;
 int8_t VAR_14[4], VAR_15, VAR_16;
 int VAR_17, VAR_18, VAR_19;
 int VAR_20, VAR_21, VAR_22;

 if (!VAR_12->sc_txpwr_calib)
  return;

 if (VAR_10->mac_flags & VAR_5) {
  FUNC_1(VAR_12, VAR_2 | VAR_3, "%s\n",
   "tpctl error happened, can't set txpower");
  return;
 }

 if (FUNC_0(VAR_12)) {
  FUNC_1(VAR_12, VAR_2 | VAR_3, "%s\n",
   "BU4306, can't set txpower");
  return;
 }




 VAR_19 = 0;
 VAR_17 = FUNC_5(VAR_10, VAR_14, VAR_0);
 if (VAR_17) {
  FUNC_1(VAR_12, VAR_2 | VAR_3, "%s\n",
   "no DS tssi");

  if (VAR_10->mac_phy.phy_mode == VAR_9) {
   if (VAR_11 == VAR_7) {
    VAR_21 = 0;
    VAR_22 = 1;
    goto calib;
   } else {
    return;
   }
  }

  VAR_17 = FUNC_5(VAR_10, VAR_14,
    VAR_1);
  if (VAR_17) {
   FUNC_1(VAR_12, VAR_2 | VAR_3, "%s\n",
    "no OFDM tssi");
   if (VAR_11 == VAR_7) {
    VAR_21 = 0;
    VAR_22 = 1;
    goto calib;
   } else {
    return;
   }
  }

  for (VAR_18 = 0; VAR_18 < 4; ++VAR_18) {
   VAR_14[VAR_18] += 0x20;
   VAR_14[VAR_18] &= 0x3f;
  }
  VAR_19 = 1;
 }
 FUNC_4(VAR_10);

 FUNC_1(VAR_12, VAR_2 | VAR_3,
  "tssi0 %d, tssi1 %d, tssi2 %d, tssi3 %d\n",
  VAR_14[0], VAR_14[1], VAR_14[2], VAR_14[3]);







 VAR_15 = (VAR_14[0] + VAR_14[1] + VAR_14[2] + VAR_14[3] + 8) / 4;
 if (VAR_19 && (FUNC_2(VAR_10) & VAR_4))
  VAR_15 -= 13;

 FUNC_1(VAR_12, VAR_2 | VAR_3, "tssi avg %d\n", VAR_15);

 VAR_17 = FUNC_6(VAR_10, VAR_15, &VAR_16);
 if (VAR_17)
  return;
 FUNC_1(VAR_12, VAR_2 | VAR_3, "current txpower %d\n",
  VAR_16);

 VAR_20 = VAR_13->rf_txpower_max - VAR_16;

 VAR_21 = -FUNC_7(VAR_20, 8);
 if (VAR_11 == VAR_8) {



  VAR_22 = -VAR_20;
 } else {
  VAR_22 = -(VAR_20 / 2);
 }
 VAR_22 -= (VAR_6 * VAR_21);

 if (VAR_21 == 0 && VAR_22 == 0) {
  FUNC_1(VAR_12, VAR_2 | VAR_3, "%s\n",
   "no need to adjust RF/BBP attenuation");

  return;
 }

calib:
 FUNC_1(VAR_12, VAR_2 | VAR_3,
  "rf atten adjust %d, bbp atten adjust %d\n",
  VAR_21, VAR_22);
 FUNC_3(VAR_10, VAR_21, VAR_22);

}
