
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {scalar_t__ ic_nrunning; } ;
struct ath_softc {int sc_resume_up; int sc_ah; int sc_cal_ch; int sc_tq; struct ieee80211com sc_ic; } ;


 int FUNC_0 (struct ath_softc*) ;
 int FUNC_1 (struct ath_softc*) ;
 int FUNC_2 (int ,int,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ieee80211com*) ;
 int FUNC_6 (int ) ;

void
FUNC_7(struct ath_softc *VAR_0)
{
 struct ieee80211com *VAR_1 = &VAR_0->sc_ic;

 VAR_0->sc_resume_up = VAR_1->ic_nrunning != 0;

 FUNC_5(VAR_1);
 FUNC_3(VAR_0->sc_ah, 0);
 FUNC_6(VAR_0->sc_tq);

 FUNC_0(VAR_0);
 FUNC_4(&VAR_0->sc_cal_ch);
 FUNC_1(VAR_0);






 FUNC_2(VAR_0->sc_ah, 1, 1);
}
