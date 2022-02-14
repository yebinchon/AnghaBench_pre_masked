
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int dummy; } ;
struct iwi_softc {int sc_dev; struct ieee80211com sc_ic; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct ieee80211com*,int) ;
 int FUNC_2 (struct iwi_softc*) ;

__attribute__((used)) static void
FUNC_3(void *VAR_0, int VAR_1)
{
 struct iwi_softc *VAR_2 = VAR_0;
 struct ieee80211com *VAR_3 = &VAR_2->sc_ic;

 FUNC_0(VAR_2->sc_dev, "radio turned on\n");

 FUNC_2(VAR_2);
 FUNC_1(VAR_3, 1);
}
