
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwl_softc {int dummy; } ;
struct ieee80211com {struct mwl_softc* ic_softc; } ;
struct ieee80211_channel {int dummy; } ;


 int FUNC_0 (struct mwl_softc*,int,int*,struct ieee80211_channel*) ;

__attribute__((used)) static void
FUNC_1(struct ieee80211com *VAR_0,
 int VAR_1, int *VAR_2, struct ieee80211_channel VAR_3[])
{
 struct mwl_softc *VAR_4 = VAR_0->ic_softc;

 FUNC_0(VAR_4, VAR_1, VAR_2, VAR_3);
}
