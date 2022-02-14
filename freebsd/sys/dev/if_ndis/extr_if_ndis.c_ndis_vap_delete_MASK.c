
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ndis_vap {int dummy; } ;
struct ndis_softc {int ndis_scan_callout; } ;
struct ieee80211vap {struct ieee80211com* iv_ic; } ;
struct ieee80211com {struct ndis_softc* ic_softc; } ;


 int VAR_0 ;
 struct ndis_vap* FUNC_0 (struct ieee80211vap*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ndis_vap*,int ) ;
 int FUNC_3 (struct ieee80211vap*) ;
 int FUNC_4 (struct ndis_softc*) ;

__attribute__((used)) static void
FUNC_5(struct ieee80211vap *VAR_1)
{
 struct ndis_vap *VAR_2 = FUNC_0(VAR_1);
 struct ieee80211com *VAR_3 = VAR_1->iv_ic;
 struct ndis_softc *VAR_4 = VAR_3->ic_softc;

 FUNC_4(VAR_4);
 FUNC_1(&VAR_4->ndis_scan_callout);
 FUNC_3(VAR_1);
 FUNC_2(VAR_2, VAR_0);
}
