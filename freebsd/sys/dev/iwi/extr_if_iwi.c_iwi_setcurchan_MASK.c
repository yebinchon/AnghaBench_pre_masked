
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int dummy; } ;
struct iwi_softc {int curchan; struct ieee80211com sc_ic; } ;


 int FUNC_0 (struct ieee80211com*) ;

__attribute__((used)) static void
FUNC_1(struct iwi_softc *VAR_0, int VAR_1)
{
 struct ieee80211com *VAR_2 = &VAR_0->sc_ic;

 VAR_0->curchan = VAR_1;
 FUNC_0(VAR_2);
}
