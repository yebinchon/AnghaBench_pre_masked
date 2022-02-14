
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ieee80211vap {int iv_bss; TYPE_1__* iv_ic; } ;
struct TYPE_5__ {int wk_macaddr; int wk_flags; void* wk_rxkeyix; void* wk_keyix; } ;
struct ieee80211_node {TYPE_2__ ni_ucastkey; int ni_macaddr; struct ieee80211vap* ni_vap; } ;
struct ath_softc {int dummy; } ;
typedef void* ieee80211_keyix ;
struct TYPE_4__ {struct ath_softc* ic_softc; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct ieee80211vap*,TYPE_2__*,void**,void**) ;
 int FUNC_2 (struct ath_softc*,struct ieee80211vap*,TYPE_2__*,int ) ;

__attribute__((used)) static void
FUNC_3(struct ieee80211_node *VAR_1)
{
 struct ieee80211vap *VAR_2 = VAR_1->ni_vap;
 struct ath_softc *VAR_3 = VAR_2->iv_ic->ic_softc;
 ieee80211_keyix VAR_4, VAR_5;


 if (!FUNC_1(VAR_2, &VAR_1->ni_ucastkey, &VAR_4, &VAR_5)) {






 } else {

  VAR_1->ni_ucastkey.wk_keyix = VAR_4;
  VAR_1->ni_ucastkey.wk_rxkeyix = VAR_5;

  VAR_1->ni_ucastkey.wk_flags |= VAR_0;
  FUNC_0(VAR_1->ni_ucastkey.wk_macaddr, VAR_1->ni_macaddr);

  FUNC_2(VAR_3, VAR_2, &VAR_1->ni_ucastkey, VAR_2->iv_bss);
 }
}
