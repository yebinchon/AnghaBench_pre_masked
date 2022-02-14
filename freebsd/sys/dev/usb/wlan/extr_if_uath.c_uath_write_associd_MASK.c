
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int ic_vaps; } ;
struct uath_softc {struct ieee80211com sc_ic; } ;
struct uath_cmd_set_associd {int bssid; void* timoffset; void* associd; void* defaultrateix; } ;
struct ieee80211vap {int iv_bss; } ;
struct ieee80211_node {int ni_associd; int ni_bssid; } ;
typedef int associd ;


 int FUNC_0 (int ,int ) ;
 struct ieee80211vap* FUNC_1 (int *) ;
 int VAR_0 ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct ieee80211_node*) ;
 struct ieee80211_node* FUNC_4 (int ) ;
 int FUNC_5 (struct uath_cmd_set_associd*,int ,int) ;
 int FUNC_6 (struct uath_softc*,int ,struct uath_cmd_set_associd*,int,int ) ;

__attribute__((used)) static int
FUNC_7(struct uath_softc *VAR_1)
{
 struct ieee80211com *VAR_2 = &VAR_1->sc_ic;
 struct ieee80211vap *VAR_3 = FUNC_1(&VAR_2->ic_vaps);
 struct ieee80211_node *VAR_4;
 struct uath_cmd_set_associd VAR_5;

 VAR_4 = FUNC_4(VAR_3->iv_bss);
 FUNC_5(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.defaultrateix = FUNC_2(1);
 VAR_5.associd = FUNC_2(VAR_4->ni_associd);
 VAR_5.timoffset = FUNC_2(0x3b);
 FUNC_0(VAR_5.bssid, VAR_4->ni_bssid);
 FUNC_3(VAR_4);
 return FUNC_6(VAR_1, VAR_0, &VAR_5,
     sizeof VAR_5, 0);
}
