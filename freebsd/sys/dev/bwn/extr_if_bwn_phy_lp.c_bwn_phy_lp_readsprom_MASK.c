
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211com {int ic_curchan; } ;
struct bwn_softc {int sc_dev; struct ieee80211com sc_ic; } ;
struct bwn_phy_lp {int plp_rssigs; int plp_rssivc; int plp_rssivf; int plp_rxpwroffset; int plp_bxarch; int plp_txisoband_h; int plp_txisoband_m; int plp_txisoband_l; } ;
struct TYPE_2__ {struct bwn_phy_lp phy_lp; } ;
struct bwn_mac {struct bwn_softc* mac_sc; TYPE_1__ mac_phy; } ;


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
 int FUNC_0 (int ,int ,int ,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static int
FUNC_2(struct bwn_mac *VAR_16)
{
 struct bwn_phy_lp *VAR_17 = &VAR_16->mac_phy.phy_lp;
 struct bwn_softc *VAR_18 = VAR_16->mac_sc;
 struct ieee80211com *VAR_19 = &VAR_18->sc_ic;
 if (FUNC_1(VAR_19->ic_curchan)) {
  do { int VAR_20; VAR_20 = FUNC_0((VAR_18->sc_dev), (VAR_10), (&VAR_17->plp_txisoband_m)); if (VAR_20) { FUNC_0((VAR_18->sc_dev), "NVRAM variable %s unreadable: " "%d\n", (VAR_10), VAR_20); return (VAR_20); } } while(0);

  do { int VAR_21; VAR_21 = FUNC_0((VAR_18->sc_dev), (VAR_0), (&VAR_17->plp_bxarch)); if (VAR_21) { FUNC_0((VAR_18->sc_dev), "NVRAM variable %s unreadable: " "%d\n", (VAR_0), VAR_21); return (VAR_21); } } while(0);

  do { int VAR_22; VAR_22 = FUNC_0((VAR_18->sc_dev), (VAR_8), (&VAR_17->plp_rxpwroffset)); if (VAR_22) { FUNC_0((VAR_18->sc_dev), "NVRAM variable %s unreadable: " "%d\n", (VAR_8), VAR_22); return (VAR_22); } } while(0);

  do { int VAR_23; VAR_23 = FUNC_0((VAR_18->sc_dev), (VAR_6), (&VAR_17->plp_rssivf)); if (VAR_23) { FUNC_0((VAR_18->sc_dev), "NVRAM variable %s unreadable: " "%d\n", (VAR_6), VAR_23); return (VAR_23); } } while(0);

  do { int VAR_24; VAR_24 = FUNC_0((VAR_18->sc_dev), (VAR_4), (&VAR_17->plp_rssivc)); if (VAR_24) { FUNC_0((VAR_18->sc_dev), "NVRAM variable %s unreadable: " "%d\n", (VAR_4), VAR_24); return (VAR_24); } } while(0);

  do { int VAR_25; VAR_25 = FUNC_0((VAR_18->sc_dev), (VAR_2), (&VAR_17->plp_rssigs)); if (VAR_25) { FUNC_0((VAR_18->sc_dev), "NVRAM variable %s unreadable: " "%d\n", (VAR_2), VAR_25); return (VAR_25); } } while(0);


  return (0);
 }

 do { int VAR_26; VAR_26 = FUNC_0((VAR_18->sc_dev), (VAR_13), (&VAR_17->plp_txisoband_l)); if (VAR_26) { FUNC_0((VAR_18->sc_dev), "NVRAM variable %s unreadable: " "%d\n", (VAR_13), VAR_26); return (VAR_26); } } while(0);

 do { int VAR_27; VAR_27 = FUNC_0((VAR_18->sc_dev), (VAR_11), (&VAR_17->plp_txisoband_m)); if (VAR_27) { FUNC_0((VAR_18->sc_dev), "NVRAM variable %s unreadable: " "%d\n", (VAR_11), VAR_27); return (VAR_27); } } while(0);

 do { int VAR_28; VAR_28 = FUNC_0((VAR_18->sc_dev), (VAR_12), (&VAR_17->plp_txisoband_h)); if (VAR_28) { FUNC_0((VAR_18->sc_dev), "NVRAM variable %s unreadable: " "%d\n", (VAR_12), VAR_28); return (VAR_28); } } while(0);

 do { int VAR_29; VAR_29 = FUNC_0((VAR_18->sc_dev), (VAR_1), (&VAR_17->plp_bxarch)); if (VAR_29) { FUNC_0((VAR_18->sc_dev), "NVRAM variable %s unreadable: " "%d\n", (VAR_1), VAR_29); return (VAR_29); } } while(0);

 do { int VAR_30; VAR_30 = FUNC_0((VAR_18->sc_dev), (VAR_9), (&VAR_17->plp_rxpwroffset)); if (VAR_30) { FUNC_0((VAR_18->sc_dev), "NVRAM variable %s unreadable: " "%d\n", (VAR_9), VAR_30); return (VAR_30); } } while(0);

 do { int VAR_31; VAR_31 = FUNC_0((VAR_18->sc_dev), (VAR_7), (&VAR_17->plp_rssivf)); if (VAR_31) { FUNC_0((VAR_18->sc_dev), "NVRAM variable %s unreadable: " "%d\n", (VAR_7), VAR_31); return (VAR_31); } } while(0);

 do { int VAR_32; VAR_32 = FUNC_0((VAR_18->sc_dev), (VAR_5), (&VAR_17->plp_rssivc)); if (VAR_32) { FUNC_0((VAR_18->sc_dev), "NVRAM variable %s unreadable: " "%d\n", (VAR_5), VAR_32); return (VAR_32); } } while(0);

 do { int VAR_33; VAR_33 = FUNC_0((VAR_18->sc_dev), (VAR_3), (&VAR_17->plp_rssigs)); if (VAR_33) { FUNC_0((VAR_18->sc_dev), "NVRAM variable %s unreadable: " "%d\n", (VAR_3), VAR_33); return (VAR_33); } } while(0);




 return (0);
}
