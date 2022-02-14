
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct rsu_softc {scalar_t__ sc_ht; } ;
struct ieee80211com {int ic_htcaps; struct rsu_softc* ic_softc; } ;
struct ieee80211_channel {int dummy; } ;
typedef int bands ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ieee80211_channel*,int,int*,int *,int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void
FUNC_3(struct ieee80211com *VAR_5,
    int VAR_6, int *VAR_7, struct ieee80211_channel VAR_8[])
{
 struct rsu_softc *VAR_9 = VAR_5->ic_softc;
 uint8_t VAR_10[VAR_4];


 FUNC_1(VAR_10, 0, sizeof(VAR_10));
 FUNC_2(VAR_10, VAR_1);
 FUNC_2(VAR_10, VAR_2);
 if (VAR_9->sc_ht)
  FUNC_2(VAR_10, VAR_3);
 FUNC_0(VAR_8, VAR_6, VAR_7,
     VAR_10, (VAR_5->ic_htcaps & VAR_0) != 0);
}
