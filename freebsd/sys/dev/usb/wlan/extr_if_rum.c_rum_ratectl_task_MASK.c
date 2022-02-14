
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211vap {int iv_ifp; TYPE_1__* iv_ic; } ;
struct rum_vap {int maxretry; int ratectl_ch; struct ieee80211vap vap; } ;
struct ieee80211_ratectl_tx_stats {int nframes; int nsuccess; int nretries; int flags; } ;
struct rum_softc {int * sta; struct ieee80211_ratectl_tx_stats sc_txs; } ;
struct TYPE_2__ {struct rum_softc* ic_softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rum_softc*) ;
 int FUNC_1 (struct rum_softc*) ;
 int VAR_3 ;
 int FUNC_2 (struct ieee80211vap*,struct ieee80211_ratectl_tx_stats*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int FUNC_5 (struct rum_softc*,int ,int *,int) ;
 int FUNC_6 (int *,int ,int ,struct rum_vap*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_5, int VAR_6)
{
 struct rum_vap *VAR_7 = VAR_5;
 struct ieee80211vap *VAR_8 = &VAR_7->vap;
 struct rum_softc *VAR_9 = VAR_8->iv_ic->ic_softc;
 struct ieee80211_ratectl_tx_stats *VAR_10 = &VAR_9->sc_txs;
 int VAR_11[3], VAR_12;

 FUNC_0(VAR_9);

 FUNC_5(VAR_9, VAR_2, VAR_9->sta, sizeof(VAR_9->sta));

 VAR_11[0] = (FUNC_4(VAR_9->sta[4]) & 0xffff);
 VAR_11[1] = (FUNC_4(VAR_9->sta[4]) >> 16);
 VAR_11[2] = (FUNC_4(VAR_9->sta[5]) & 0xffff);
 VAR_12 = (FUNC_4(VAR_9->sta[5]) >> 16);

 VAR_10->flags = VAR_0;
 VAR_10->nframes = VAR_11[0] + VAR_11[1] + VAR_11[2] + VAR_12;
 VAR_10->nsuccess = VAR_10->nframes - VAR_12;

 VAR_10->nretries = VAR_11[1] + VAR_11[2] * 2 + VAR_12 * (VAR_7->maxretry + 1);

 if (VAR_10->nframes != 0)
  FUNC_2(VAR_8, VAR_10);


 FUNC_3(VAR_8->iv_ifp, VAR_1, VAR_12);

 FUNC_6(&VAR_7->ratectl_ch, VAR_3, VAR_4, VAR_7);
 FUNC_1(VAR_9);
}
