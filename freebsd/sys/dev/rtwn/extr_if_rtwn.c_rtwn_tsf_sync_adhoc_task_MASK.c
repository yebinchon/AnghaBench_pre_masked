
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtwn_vap {int tsf_sync_adhoc; int id; } ;
struct rtwn_softc {int sc_flags; } ;
struct ieee80211vap {int iv_bss; TYPE_1__* iv_ic; } ;
struct ieee80211_node {int ni_intval; } ;
struct TYPE_2__ {struct rtwn_softc* ic_softc; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct rtwn_softc*) ;
 int VAR_1 ;
 int FUNC_2 (struct rtwn_softc*) ;
 struct rtwn_vap* FUNC_3 (struct ieee80211vap*) ;
 int FUNC_4 (int *,int,int ,struct ieee80211vap*) ;
 int VAR_2 ;
 int FUNC_5 (struct ieee80211_node*) ;
 struct ieee80211_node* FUNC_6 (int ) ;
 int FUNC_7 (struct rtwn_softc*,int) ;
 int FUNC_8 (struct rtwn_softc*,int) ;
 int FUNC_9 (struct rtwn_softc*,int ,int ,int ) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_10(void *VAR_4, int VAR_5)
{
 struct ieee80211vap *VAR_6 = VAR_4;
 struct rtwn_vap *VAR_7 = FUNC_3(VAR_6);
 struct rtwn_softc *VAR_8 = VAR_6->iv_ic->ic_softc;
 struct ieee80211_node *VAR_9;

 FUNC_1(VAR_8);
 VAR_9 = FUNC_6(VAR_6->iv_bss);


 FUNC_8(VAR_8, 0);


 VAR_8->sc_flags |= VAR_1;


 FUNC_9(VAR_8, FUNC_0(VAR_7->id),
     VAR_0, 0);


 FUNC_7(VAR_8, VAR_9->ni_intval * 5 * 1000);


 FUNC_9(VAR_8, FUNC_0(VAR_7->id),
     0, VAR_0);


 VAR_8->sc_flags &= ~VAR_1;
 FUNC_8(VAR_8, 1);


 FUNC_4(&VAR_7->tsf_sync_adhoc, 60*VAR_2, VAR_3, VAR_6);

 FUNC_5(VAR_9);
 FUNC_2(VAR_8);
}
