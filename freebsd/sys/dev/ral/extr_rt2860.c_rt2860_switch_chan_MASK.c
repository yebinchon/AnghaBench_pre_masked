
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ieee80211com {int dummy; } ;
struct rt2860_softc {int mac_ver; struct ieee80211com sc_ic; } ;
struct ieee80211_channel {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct ieee80211com*,struct ieee80211_channel*) ;
 int FUNC_2 (struct rt2860_softc*,int) ;
 int FUNC_3 (struct rt2860_softc*,int) ;
 int FUNC_4 (struct rt2860_softc*,int) ;
 int FUNC_5 (struct rt2860_softc*,int) ;

__attribute__((used)) static void
FUNC_6(struct rt2860_softc *VAR_1, struct ieee80211_channel *VAR_2)
{
 struct ieee80211com *VAR_3 = &VAR_1->sc_ic;
 u_int VAR_4, VAR_5;

 VAR_4 = FUNC_1(VAR_3, VAR_2);
 if (VAR_4 == 0 || VAR_4 == VAR_0)
  return;

 if (VAR_1->mac_ver >= 0x5390)
  FUNC_5(VAR_1, VAR_4);
 else if (VAR_1->mac_ver >= 0x3071)
  FUNC_4(VAR_1, VAR_4);
 else
  FUNC_3(VAR_1, VAR_4);


 if (VAR_4 <= 14)
  VAR_5 = 0;
 else if (VAR_4 <= 64)
  VAR_5 = 1;
 else if (VAR_4 <= 128)
  VAR_5 = 2;
 else
  VAR_5 = 3;


 if (VAR_1->mac_ver < 0x5390)
  FUNC_2(VAR_1, VAR_5);

 FUNC_0(1000);
}
