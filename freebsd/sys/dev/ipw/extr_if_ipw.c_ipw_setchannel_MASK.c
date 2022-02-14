
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct ieee80211com {int dummy; } ;
struct ipw_softc {struct ieee80211com sc_ic; } ;
struct ieee80211_channel {int dummy; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ieee80211com*,struct ieee80211_channel*) ;
 int FUNC_3 (struct ipw_softc*,int ,int *,int) ;
 int FUNC_4 (struct ipw_softc*,struct ieee80211_channel*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(struct ipw_softc *VAR_1, struct ieee80211_channel *VAR_2)
{
 struct ieee80211com *VAR_3 = &VAR_1->sc_ic;
 uint32_t VAR_4;
 int VAR_5;

 VAR_4 = FUNC_1(FUNC_2(VAR_3, VAR_2));
 FUNC_0(("Setting channel to %u\n", FUNC_5(VAR_4)));
 VAR_5 = FUNC_3(VAR_1, VAR_0, &VAR_4, sizeof VAR_4);
 if (VAR_5 == 0)
  FUNC_4(VAR_1, VAR_2);
 return VAR_5;
}
