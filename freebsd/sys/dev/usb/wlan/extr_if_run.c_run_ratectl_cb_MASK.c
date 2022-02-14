
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int ic_sta; int ic_vaps; } ;
struct run_softc {int rvp_cnt; scalar_t__ ratectl_run; int ratectl_ch; struct ieee80211com sc_ic; } ;
struct ieee80211vap {scalar_t__ iv_opmode; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct run_softc*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct run_softc*) ;
 struct ieee80211vap* FUNC_2 (int *) ;
 int VAR_2 ;
 int FUNC_3 (int *,int ,struct run_softc*) ;
 int FUNC_4 (struct run_softc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (struct run_softc*) ;
 int FUNC_6 (int *,int ,int ,struct run_softc*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_5, int VAR_6)
{
 struct run_softc *VAR_7 = VAR_5;
 struct ieee80211com *VAR_8 = &VAR_7->sc_ic;
 struct ieee80211vap *VAR_9 = FUNC_2(&VAR_8->ic_vaps);

 if (VAR_9 == ((void*)0))
  return;

 if (VAR_7->rvp_cnt > 1 || VAR_9->iv_opmode != VAR_0) {







  FUNC_0(VAR_7);
  FUNC_5(VAR_7);

  FUNC_4(VAR_7);
  FUNC_1(VAR_7);
 }

 FUNC_3(&VAR_8->ic_sta, VAR_3, VAR_7);

 FUNC_0(VAR_7);
 if(VAR_7->ratectl_run != VAR_1)
  FUNC_6(&VAR_7->ratectl_ch, VAR_2, VAR_4, VAR_7);
 FUNC_1(VAR_7);
}
