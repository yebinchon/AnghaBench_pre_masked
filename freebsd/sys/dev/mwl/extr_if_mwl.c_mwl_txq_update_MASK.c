
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmeParams {int wmep_aifsn; int wmep_txopLimit; int wmep_logcwmax; int wmep_logcwmin; } ;
struct mwl_txq {int qnum; } ;
struct ieee80211com {int dummy; } ;
struct mwl_softc {int sc_dev; struct mwl_hal* sc_mh; struct mwl_txq** sc_ac2q; struct ieee80211com sc_ic; } ;
struct mwl_hal {int dummy; } ;
struct chanAccParams {struct wmeParams* cap_wmeParams; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int ) ;
 int * VAR_0 ;
 int FUNC_2 (struct ieee80211com*,struct chanAccParams*) ;
 scalar_t__ FUNC_3 (struct mwl_hal*,int ,int,int,int,int) ;

__attribute__((used)) static int
FUNC_4(struct mwl_softc *VAR_1, int VAR_2)
{

 struct ieee80211com *VAR_3 = &VAR_1->sc_ic;
 struct chanAccParams VAR_4;
 struct mwl_txq *VAR_5 = VAR_1->sc_ac2q[VAR_2];
 struct wmeParams *VAR_6;
 struct mwl_hal *VAR_7 = VAR_1->sc_mh;
 int VAR_8, VAR_9, VAR_10, VAR_11;

 FUNC_2(VAR_3, &VAR_4);
 VAR_6 = &VAR_4.cap_wmeParams[VAR_2];

 VAR_8 = VAR_6->wmep_aifsn;

 VAR_9 = ((1<<VAR_6->wmep_logcwmin)-1);
 VAR_10 = ((1<<VAR_6->wmep_logcwmax)-1);
 VAR_11 = VAR_6->wmep_txopLimit;

 if (FUNC_3(VAR_7, VAR_5->qnum, VAR_9, VAR_10, VAR_8, VAR_11)) {
  FUNC_1(VAR_1->sc_dev, "unable to update hardware queue "
   "parameters for %s traffic!\n",
   VAR_0[VAR_2]);
  return 0;
 }
 return 1;

}
