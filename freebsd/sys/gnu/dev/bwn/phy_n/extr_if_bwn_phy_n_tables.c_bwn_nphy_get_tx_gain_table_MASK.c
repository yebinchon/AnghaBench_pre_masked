
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct ieee80211com {int ic_curchan; } ;
struct bwn_softc {int sc_dev; struct ieee80211com sc_ic; } ;
struct bwn_phy {int rev; TYPE_1__* phy_n; } ;
struct bwn_mac {struct bwn_softc* mac_sc; struct bwn_phy mac_phy; } ;
struct TYPE_2__ {scalar_t__ ipa5g_on; scalar_t__ ipa2g_on; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bwn_softc*,char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int*) ;
 int const* FUNC_3 (struct bwn_mac*) ;
 int const* VAR_2 ;
 int const* VAR_3 ;
 int const* VAR_4 ;
 int const* VAR_5 ;
 int const* VAR_6 ;
 int const* VAR_7 ;
 int const* VAR_8 ;

const uint32_t *FUNC_4(struct bwn_mac *VAR_9)
{
 struct ieee80211com *VAR_10 = &VAR_9->mac_sc->sc_ic;
 struct bwn_softc *VAR_11 = VAR_9->mac_sc;
 struct bwn_phy *VAR_12 = &VAR_9->mac_phy;
 int VAR_13, VAR_14;
 uint8_t VAR_15;


 VAR_14 = !! FUNC_1(VAR_10->ic_curchan);

 if (VAR_9->mac_phy.rev < 3)
  return VAR_8;


 if ((VAR_9->mac_phy.phy_n->ipa2g_on && VAR_14 == 0) ||
     (VAR_9->mac_phy.phy_n->ipa5g_on && VAR_14 == 1)) {
  return FUNC_3(VAR_9);
 } else if (VAR_14 == 1) {
  switch (VAR_12->rev) {
  case 6:
  case 5:
   return VAR_7;
  case 4:
   VAR_13 = FUNC_2(VAR_11->sc_dev,
       VAR_1, &VAR_15);
   if (VAR_13) {
    FUNC_0(VAR_9->mac_sc, "Error reading EPA "
        "gain configuration (%s) from NVRAM: %d\n",
        VAR_1, VAR_13);
    return (((void*)0));
   }

   return (VAR_15 == 3) ?
    VAR_5 :
    VAR_6;
  case 3:
   return VAR_3;
  default:
   FUNC_0(VAR_9->mac_sc,
          "No 5GHz EPA gain table available for this device\n");
   return ((void*)0);
  }
 } else {
  switch (VAR_12->rev) {
  case 6:
  case 5:
   VAR_13 = FUNC_2(VAR_11->sc_dev,
       VAR_0, &VAR_15);
   if (VAR_13) {
    FUNC_0(VAR_9->mac_sc, "Error reading EPA "
        "gain configuration (%s) from NVRAM: %d\n",
        VAR_0, VAR_13);
    return (((void*)0));
   }

   if (VAR_15 == 3)
    return VAR_4;

  case 4:
  case 3:
   return VAR_2;
  default:
   FUNC_0(VAR_9->mac_sc,
          "No 2GHz EPA gain table available for this device\n");
   return ((void*)0);
  }
 }
}
