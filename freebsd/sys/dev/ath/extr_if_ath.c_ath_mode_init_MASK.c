
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct ieee80211com {int ic_macaddr; } ;
struct ath_softc {struct ath_hal* sc_ah; struct ieee80211com sc_ic; } ;
struct ath_hal {int dummy; } ;


 int FUNC_0 (struct ath_softc*) ;
 int FUNC_1 (struct ath_hal*,int ) ;
 int FUNC_2 (struct ath_hal*) ;
 int FUNC_3 (struct ath_hal*,int ) ;
 int FUNC_4 (struct ath_softc*) ;

void
FUNC_5(struct ath_softc *VAR_0)
{
 struct ieee80211com *VAR_1 = &VAR_0->sc_ic;
 struct ath_hal *VAR_2 = VAR_0->sc_ah;
 u_int32_t VAR_3;




 VAR_3 = FUNC_0(VAR_0);
 FUNC_3(VAR_2, VAR_3);


 FUNC_2(VAR_2);


 FUNC_1(VAR_2, VAR_1->ic_macaddr);


 FUNC_4(VAR_0);
}
