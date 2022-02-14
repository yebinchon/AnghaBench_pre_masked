
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rum_vap {int bcn_mbuf; int ratectl_task; int ratectl_ch; } ;
struct rum_softc {int dummy; } ;
struct ieee80211vap {int iv_nstate_task; struct ieee80211com* iv_ic; } ;
struct ieee80211com {struct rum_softc* ic_softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rum_softc*) ;
 int FUNC_1 (struct rum_softc*) ;
 struct rum_vap* FUNC_2 (struct ieee80211vap*) ;
 int FUNC_3 (struct rum_vap*,int ) ;
 int FUNC_4 (struct ieee80211com*,int *) ;
 int FUNC_5 (struct ieee80211vap*,int ,int) ;
 int FUNC_6 (struct ieee80211vap*) ;
 int FUNC_7 (struct ieee80211vap*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct rum_softc*,struct ieee80211vap*) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void
FUNC_11(struct ieee80211vap *VAR_2)
{
 struct rum_vap *VAR_3 = FUNC_2(VAR_2);
 struct ieee80211com *VAR_4 = VAR_2->iv_ic;
 struct rum_softc *VAR_5 = VAR_4->ic_softc;


 FUNC_5(VAR_2, VAR_0, -1);
 FUNC_4(VAR_4, &VAR_2->iv_nstate_task);

 FUNC_0(VAR_5);

 FUNC_9(VAR_5, VAR_2);
 FUNC_1(VAR_5);

 FUNC_10(&VAR_3->ratectl_ch);
 FUNC_4(VAR_4, &VAR_3->ratectl_task);
 FUNC_6(VAR_2);
 FUNC_7(VAR_2);
 FUNC_8(VAR_3->bcn_mbuf);
 FUNC_3(VAR_3, VAR_1);
}
