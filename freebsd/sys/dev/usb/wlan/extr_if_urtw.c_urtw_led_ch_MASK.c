
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int dummy; } ;
struct urtw_softc {int sc_led_task; struct ieee80211com sc_ic; } ;


 int FUNC_0 (struct ieee80211com*,int *) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0)
{
 struct urtw_softc *VAR_1 = VAR_0;
 struct ieee80211com *VAR_2 = &VAR_1->sc_ic;

 FUNC_0(VAR_2, &VAR_1->sc_led_task);
}
