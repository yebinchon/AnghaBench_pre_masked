
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int dummy; } ;
struct iwi_softc {int sc_dev; struct ieee80211com sc_ic; } ;


 int FUNC_0 (struct iwi_softc*) ;
 int VAR_0 ;
 int FUNC_1 (struct iwi_softc*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct ieee80211com*,int ) ;
 int FUNC_4 (struct iwi_softc*) ;
 int FUNC_5 (struct iwi_softc*) ;

__attribute__((used)) static void
FUNC_6(void *VAR_1, int VAR_2)
{
 struct iwi_softc *VAR_3 = VAR_1;
 struct ieee80211com *VAR_4 = &VAR_3->sc_ic;
 VAR_0;

 FUNC_2(VAR_3->sc_dev, "radio turned off\n");

 FUNC_3(VAR_4, 0);

 FUNC_0(VAR_3);
 FUNC_5(VAR_3);
 FUNC_4(VAR_3);
 FUNC_1(VAR_3);
}
