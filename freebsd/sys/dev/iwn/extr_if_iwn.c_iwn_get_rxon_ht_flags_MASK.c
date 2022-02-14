
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ieee80211com {int ic_curhtprotmode; } ;
struct iwn_softc {struct ieee80211com sc_ic; } ;
struct ieee80211_channel {int dummy; } ;



 int FUNC_0 (struct ieee80211_channel*) ;
 scalar_t__ FUNC_1 (struct ieee80211_channel*) ;
 scalar_t__ FUNC_2 (struct ieee80211_channel*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int) ;

__attribute__((used)) static uint32_t
FUNC_4(struct iwn_softc *VAR_3, struct ieee80211_channel *VAR_4)
{
 struct ieee80211com *VAR_5 = &VAR_3->sc_ic;
 uint32_t VAR_6 = 0;

 if (! FUNC_0(VAR_4))
  return (0);

 VAR_6 |= FUNC_3(VAR_5->ic_curhtprotmode);

 if (FUNC_1(VAR_4)) {
  switch (VAR_5->ic_curhtprotmode) {
  case 128:
   VAR_6 |= VAR_2;
   break;
  default:
   VAR_6 |= VAR_1;
   break;
  }
 }
 if (FUNC_2(VAR_4))
  VAR_6 |= VAR_0;

 return (VAR_6);
}
