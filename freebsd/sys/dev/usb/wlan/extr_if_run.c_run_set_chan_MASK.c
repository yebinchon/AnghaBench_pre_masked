
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ieee80211com {int dummy; } ;
struct run_softc {int mac_ver; struct ieee80211com sc_ic; } ;
struct ieee80211_channel {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee80211com*,struct ieee80211_channel*) ;
 int FUNC_1 (struct run_softc*,int) ;
 int FUNC_2 (struct run_softc*,int) ;
 int FUNC_3 (struct run_softc*,int) ;
 int FUNC_4 (struct run_softc*,int) ;
 int FUNC_5 (struct run_softc*,int) ;
 int FUNC_6 (struct run_softc*,int) ;
 int FUNC_7 (struct run_softc*,int) ;
 int FUNC_8 (struct run_softc*,int) ;
 int FUNC_9 (struct run_softc*,int) ;

__attribute__((used)) static int
FUNC_10(struct run_softc *VAR_2, struct ieee80211_channel *VAR_3)
{
 struct ieee80211com *VAR_4 = &VAR_2->sc_ic;
 u_int VAR_5, VAR_6;

 VAR_5 = FUNC_0(VAR_4, VAR_3);
 if (VAR_5 == 0 || VAR_5 == VAR_1)
  return (VAR_0);

 if (VAR_2->mac_ver == 0x5592)
  FUNC_8(VAR_2, VAR_5);
 else if (VAR_2->mac_ver >= 0x5390)
  FUNC_7(VAR_2, VAR_5);
 else if (VAR_2->mac_ver == 0x3593)
  FUNC_6(VAR_2, VAR_5);
 else if (VAR_2->mac_ver == 0x3572)
  FUNC_5(VAR_2, VAR_5);
 else if (VAR_2->mac_ver >= 0x3070)
  FUNC_4(VAR_2, VAR_5);
 else
  FUNC_3(VAR_2, VAR_5);


 if (VAR_5 <= 14)
  VAR_6 = 0;
 else if (VAR_5 <= 64)
  VAR_6 = 1;
 else if (VAR_5 <= 128)
  VAR_6 = 2;
 else
  VAR_6 = 3;


 FUNC_9(VAR_2, VAR_6);

 FUNC_1(VAR_2, 10);


 if (VAR_2->mac_ver >= 0x5392)
  FUNC_2(VAR_2, VAR_5);

 return (0);
}
