
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int dummy; } ;
struct bwn_softc {int sc_dev; struct ieee80211com sc_ic; } ;
struct bwn_mac {scalar_t__ mac_status; int mac_hwreset; struct bwn_softc* mac_sc; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (struct ieee80211com*,int *) ;

__attribute__((used)) static void
FUNC_2(struct bwn_mac *VAR_1, const char *VAR_2)
{
 struct bwn_softc *VAR_3 = VAR_1->mac_sc;
 struct ieee80211com *VAR_4 = &VAR_3->sc_ic;

 if (VAR_1->mac_status < VAR_0)
  return;

 FUNC_0(VAR_3->sc_dev, "HW reset: %s\n", VAR_2);
 FUNC_1(VAR_4, &VAR_1->mac_hwreset);
}
