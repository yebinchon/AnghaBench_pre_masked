
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {struct ieee80211_channel* ic_bsschan; } ;
struct iwm_softc {struct ieee80211com sc_ic; } ;
struct ieee80211_channel {int ic_flags; } ;
typedef int boolean_t ;


 int VAR_0 ;
 struct ieee80211_channel* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static boolean_t
FUNC_0(struct iwm_softc *VAR_4)
{
 struct ieee80211com *VAR_5 = &VAR_4->sc_ic;
 struct ieee80211_channel *VAR_6;
 boolean_t VAR_7 = VAR_0;

 VAR_6 = VAR_5->ic_bsschan;
 if (VAR_6 == VAR_1 ||
     (VAR_6->ic_flags & VAR_2) != 0) {
  VAR_7 = VAR_3;
 }

        return VAR_7;
}
