
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int dummy; } ;
struct iwi_softc {scalar_t__ sc_running; struct ieee80211com sc_ic; } ;


 int FUNC_0 (struct iwi_softc*) ;
 int VAR_0 ;
 int FUNC_1 (struct iwi_softc*) ;
 int FUNC_2 (struct ieee80211com*) ;
 int FUNC_3 (struct iwi_softc*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_1)
{
 struct iwi_softc *VAR_2 = VAR_1;
 struct ieee80211com *VAR_3 = &VAR_2->sc_ic;
 VAR_0;

 FUNC_0(VAR_2);
 FUNC_3(VAR_2);
 FUNC_1(VAR_2);

 if (VAR_2->sc_running)
  FUNC_2(VAR_3);
}
