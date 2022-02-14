
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct wmeParams {int wmep_logcwmax; int wmep_logcwmin; int wmep_aifsn; } ;
struct ieee80211com {scalar_t__ ic_opmode; } ;
struct chanAccParams {struct wmeParams* cap_wmeParams; } ;
struct ath_softc {int sc_bhalq; int sc_dev; struct ath_hal* sc_ah; struct ieee80211com sc_ic; } ;
struct ath_hal {int dummy; } ;
struct TYPE_4__ {int tqi_cwmin; int tqi_cwmax; int tqi_aifs; } ;
typedef TYPE_1__ HAL_TXQ_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 int FUNC_1 (struct ath_hal*,int ,TYPE_1__*) ;
 int FUNC_2 (struct ath_hal*,int ) ;
 int FUNC_3 (struct ath_hal*,int ,TYPE_1__*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct ieee80211com*,struct chanAccParams*) ;

int
FUNC_6(struct ath_softc *VAR_6)
{

 struct ieee80211com *VAR_7 = &VAR_6->sc_ic;
 struct ath_hal *VAR_8 = VAR_6->sc_ah;
 HAL_TXQ_INFO VAR_9;

 FUNC_1(VAR_8, VAR_6->sc_bhalq, &VAR_9);
 if (VAR_7->ic_opmode == VAR_3 ||
     VAR_7->ic_opmode == VAR_4) {



  VAR_9.tqi_aifs = VAR_0;
  VAR_9.tqi_cwmin = VAR_2;
  VAR_9.tqi_cwmax = VAR_1;
 } else {
  struct chanAccParams VAR_10;
  struct wmeParams *VAR_11;

  FUNC_5(VAR_7, &VAR_10);
  VAR_11 = &VAR_10.cap_wmeParams[VAR_5];




  VAR_9.tqi_aifs = VAR_11->wmep_aifsn;
  VAR_9.tqi_cwmin = 2*((1<<(VAR_11->wmep_logcwmin))-1);
  VAR_9.tqi_cwmax = ((1<<(VAR_11->wmep_logcwmax))-1);
 }

 if (!FUNC_3(VAR_8, VAR_6->sc_bhalq, &VAR_9)) {
  FUNC_4(VAR_6->sc_dev, "unable to update parameters for "
   "beacon hardware queue!\n");
  return 0;
 } else {
  FUNC_2(VAR_8, VAR_6->sc_bhalq);
  return 1;
 }

}
