
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urtw_softc {int sc_updateslot_task; } ;
struct ieee80211com {struct urtw_softc* ic_softc; } ;


 int FUNC_0 (struct ieee80211com*,int *) ;

__attribute__((used)) static void
FUNC_1(struct ieee80211com *VAR_0)
{
 struct urtw_softc *VAR_1 = VAR_0->ic_softc;

 FUNC_0(VAR_0, &VAR_1->sc_updateslot_task);
}
