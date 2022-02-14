
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ipw_softc {int chanmask; } ;
struct ieee80211com {struct ipw_softc* ic_softc; } ;
struct ieee80211_channel {int dummy; } ;
typedef int bands ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee80211_channel*,int,int*,int,int ,int ,int ,int *) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void
FUNC_3(struct ieee80211com *VAR_2,
    int VAR_3, int *VAR_4, struct ieee80211_channel VAR_5[])
{
 struct ipw_softc *VAR_6 = VAR_2->ic_softc;
 uint8_t VAR_7[VAR_1];
 int VAR_8;

 FUNC_1(VAR_7, 0, sizeof(VAR_7));
 FUNC_2(VAR_7, VAR_0);

 for (VAR_8 = 1; VAR_8 < 16; VAR_8++) {
  if (VAR_6->chanmask & (1 << VAR_8)) {
   FUNC_0(VAR_5, VAR_3, VAR_4,
       VAR_8, 0, 0, 0, VAR_7);
  }
 }

}
