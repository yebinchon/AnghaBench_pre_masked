
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ieee80211com {struct bwi_softc* ic_softc; } ;
struct ieee80211_channel {int dummy; } ;
struct bwi_softc {int sc_dev; struct bwi_mac* sc_mac; } ;
struct bwi_phy {int phy_mode; } ;
struct bwi_mac {struct bwi_phy mac_phy; } ;
typedef int bands ;





 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct ieee80211_channel*,int,int*,int *,int ) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (int *,int const) ;

__attribute__((used)) static void
FUNC_5(struct ieee80211com *VAR_1,
    int VAR_2, int *VAR_3, struct ieee80211_channel VAR_4[])
{
 struct bwi_softc *VAR_5 = VAR_1->ic_softc;
 struct bwi_mac *VAR_6;
 struct bwi_phy *VAR_7;
 uint8_t VAR_8[VAR_0];





 VAR_6 = &VAR_5->sc_mac[0];
 VAR_7 = &VAR_6->mac_phy;

 FUNC_2(VAR_8, 0, sizeof(VAR_8));
 switch (VAR_7->phy_mode) {
 case 128:
  FUNC_4(VAR_8, 128);

 case 129:
  FUNC_4(VAR_8, 129);
  break;
 case 130:

  FUNC_4(VAR_8, 130);
  FUNC_0(VAR_5->sc_dev, "no 11a support\n");
  return;
 default:
  FUNC_3("unknown phymode %d\n", VAR_7->phy_mode);
 }

 FUNC_1(VAR_4, VAR_2, VAR_3, VAR_8, 0);
}
