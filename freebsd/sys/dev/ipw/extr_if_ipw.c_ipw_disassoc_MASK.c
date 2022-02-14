
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_softc {int flags; } ;
struct ieee80211vap {struct ieee80211_node* iv_bss; } ;
struct ieee80211com {struct ipw_softc* ic_softc; } ;
struct ieee80211_node {int ni_bssid; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ipw_softc*) ;
 int FUNC_2 (struct ipw_softc*) ;
 int FUNC_3 (struct ipw_softc*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct ieee80211com *VAR_4, struct ieee80211vap *VAR_5)
{
 struct ieee80211_node *VAR_6 = VAR_5->iv_bss;
 struct ipw_softc *VAR_7 = VAR_4->ic_softc;

 FUNC_1(VAR_7);
 FUNC_0(("Disassociate from %6D\n", VAR_6->ni_bssid, ":"));




 if (VAR_7->flags & VAR_3) {
  VAR_7->flags &= ~VAR_2;




  (void) FUNC_3(VAR_7, VAR_1,
   VAR_6->ni_bssid, VAR_0);
 }
 FUNC_2(VAR_7);
}
