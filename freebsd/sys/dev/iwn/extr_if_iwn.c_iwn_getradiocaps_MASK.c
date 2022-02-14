
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwn_softc {int dummy; } ;
struct ieee80211com {struct iwn_softc* ic_softc; } ;
struct ieee80211_channel {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwn_softc*,int,int,int*,struct ieee80211_channel*) ;
 int FUNC_1 (struct iwn_softc*,int,int,int*,struct ieee80211_channel*) ;

__attribute__((used)) static void
FUNC_2(struct ieee80211com *VAR_1,
    int VAR_2, int *VAR_3, struct ieee80211_channel VAR_4[])
{
 struct iwn_softc *VAR_5 = VAR_1->ic_softc;
 int VAR_6;


 for (VAR_6 = 0; VAR_6 < 5 && *VAR_3 < VAR_2; VAR_6++)
  FUNC_0(VAR_5, VAR_6, VAR_2, VAR_3, VAR_4);
 for (VAR_6 = 5; VAR_6 < VAR_0 - 1 && *VAR_3 < VAR_2; VAR_6++)
  FUNC_1(VAR_5, VAR_6, VAR_2, VAR_3, VAR_4);
}
