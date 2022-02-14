
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211vap {int iv_ifp; TYPE_1__* iv_ic; } ;
struct ural_vap {int ratectl_ch; struct ieee80211vap vap; } ;
struct ieee80211_ratectl_tx_stats {int nsuccess; int nframes; int nretries; int flags; } ;
struct ural_softc {int* sta; struct ieee80211_ratectl_tx_stats sc_txs; } ;
struct TYPE_2__ {struct ural_softc* ic_softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ural_softc*) ;
 int VAR_2 ;
 int FUNC_1 (struct ural_softc*) ;
 int VAR_3 ;
 int FUNC_2 (struct ieee80211vap*,struct ieee80211_ratectl_tx_stats*) ;
 int FUNC_3 (int ,int ,int) ;
 int VAR_4 ;
 int FUNC_4 (struct ural_softc*,int ,int*,int) ;
 int FUNC_5 (int *,int ,int ,struct ural_vap*) ;

__attribute__((used)) static void
FUNC_6(void *VAR_5, int VAR_6)
{
 struct ural_vap *VAR_7 = VAR_5;
 struct ieee80211vap *VAR_8 = &VAR_7->vap;
 struct ural_softc *VAR_9 = VAR_8->iv_ic->ic_softc;
 struct ieee80211_ratectl_tx_stats *VAR_10 = &VAR_9->sc_txs;
 int VAR_11;

 FUNC_0(VAR_9);

 FUNC_4(VAR_9, VAR_2, VAR_9->sta, sizeof(VAR_9->sta));

 VAR_10->flags = VAR_0;
 VAR_10->nsuccess = VAR_9->sta[7] +
   VAR_9->sta[8];
 VAR_11 = VAR_9->sta[9];
 VAR_10->nframes = VAR_10->nsuccess + VAR_11;

 VAR_10->nretries = VAR_9->sta[8] + VAR_11;

 FUNC_2(VAR_8, VAR_10);


 FUNC_3(VAR_8->iv_ifp, VAR_1, VAR_11);

 FUNC_5(&VAR_7->ratectl_ch, VAR_3, VAR_4, VAR_7);
 FUNC_1(VAR_9);
}
