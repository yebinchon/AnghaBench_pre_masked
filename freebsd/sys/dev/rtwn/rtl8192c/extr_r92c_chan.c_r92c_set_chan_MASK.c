
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct rtwn_softc {int nrxchains; struct r92c_softc* sc_priv; } ;
struct r92c_softc {int * rf_chnlbw; } ;
struct ieee80211_channel {int dummy; } ;


 scalar_t__ FUNC_0 (struct ieee80211_channel*) ;
 int FUNC_1 (struct ieee80211_channel*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct rtwn_softc*,int ,int ) ;
 int FUNC_4 (struct rtwn_softc*,struct ieee80211_channel*) ;
 int FUNC_5 (struct ieee80211_channel*) ;
 int FUNC_6 (struct rtwn_softc*,int ) ;
 int FUNC_7 (struct rtwn_softc*,int,int ,int ) ;

void
FUNC_8(struct rtwn_softc *VAR_2, struct ieee80211_channel *VAR_3)
{
 struct r92c_softc *VAR_4 = VAR_2->sc_priv;
 u_int VAR_5;
 int VAR_6;

 VAR_5 = FUNC_5(VAR_3);


 FUNC_4(VAR_2, VAR_3);

 for (VAR_6 = 0; VAR_6 < VAR_2->nrxchains; VAR_6++) {
  FUNC_7(VAR_2, VAR_6, VAR_0,
      FUNC_2(VAR_4->rf_chnlbw[VAR_6], VAR_1, VAR_5));
 }
 if (FUNC_0(VAR_3))
  FUNC_3(VAR_2, VAR_5, FUNC_1(VAR_3));
 else
  FUNC_6(VAR_2, VAR_5);
}
