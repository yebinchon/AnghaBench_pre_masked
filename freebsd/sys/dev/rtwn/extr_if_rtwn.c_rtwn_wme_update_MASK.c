
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct wmeParams {int wmep_aifsn; int wmep_txopLimit; int wmep_logcwmin; int wmep_logcwmax; int wmep_acm; } ;
struct rtwn_softc {struct wmeParams* cap_wmeParams; } ;
struct ieee80211com {struct rtwn_softc* ic_softc; struct ieee80211_channel* ic_curchan; } ;
struct ieee80211_channel {int dummy; } ;
struct chanAccParams {int cap_wmeParams; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee80211com*) ;
 scalar_t__ FUNC_1 (struct ieee80211_channel*) ;
 int FUNC_2 (struct ieee80211com*) ;
 int FUNC_3 (struct ieee80211com*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_4 (struct rtwn_softc*) ;
 int FUNC_5 (struct rtwn_softc*) ;
 int FUNC_6 (int ,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (struct ieee80211com*,struct chanAccParams*) ;
 int FUNC_8 (struct wmeParams*,int ,int) ;
 int FUNC_9 (struct rtwn_softc*,int ,int ,int) ;
 int FUNC_10 (struct rtwn_softc*,int ,int) ;
 int * VAR_11 ;

__attribute__((used)) static int
FUNC_11(struct ieee80211com *VAR_12)
{
 struct chanAccParams VAR_13;
 struct ieee80211_channel *VAR_14 = VAR_12->ic_curchan;
 struct rtwn_softc *VAR_15 = VAR_12->ic_softc;
 struct wmeParams *VAR_16 = VAR_15->cap_wmeParams;
 uint8_t VAR_17, VAR_18, VAR_19;
 int VAR_20;

 FUNC_7(VAR_12, &VAR_13);


 FUNC_2(VAR_12);
 FUNC_4(VAR_15);
 FUNC_8(VAR_16, VAR_13.cap_wmeParams, sizeof(VAR_15->cap_wmeParams));
 FUNC_5(VAR_15);
 FUNC_3(VAR_12);

 VAR_18 = 0;
 VAR_19 = FUNC_0(VAR_12);

 FUNC_4(VAR_15);
 for (VAR_20 = VAR_9; VAR_20 < VAR_10; VAR_20++) {

  VAR_17 = VAR_16[VAR_20].wmep_aifsn * VAR_19 +
      (FUNC_1(VAR_14) ?
   VAR_0 : VAR_1);
  FUNC_10(VAR_15, VAR_11[VAR_20],
      FUNC_6(VAR_8, VAR_16[VAR_20].wmep_txopLimit) |
      FUNC_6(VAR_7, VAR_16[VAR_20].wmep_logcwmin) |
      FUNC_6(VAR_6, VAR_16[VAR_20].wmep_logcwmax) |
      FUNC_6(VAR_5, VAR_17));
  if (VAR_20 != VAR_9)
   VAR_18 |= VAR_16[VAR_20].wmep_acm << VAR_20;
 }

 if (VAR_18 != 0)
  VAR_18 |= VAR_4;
 FUNC_9(VAR_15, VAR_2, VAR_3, VAR_18);
 FUNC_5(VAR_15);

 return 0;
}
