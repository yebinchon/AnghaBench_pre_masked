
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int dummy; } ;
struct ipw_softc {int flags; struct ieee80211com sc_ic; } ;


 int VAR_0 ;
 int FUNC_0 (struct ipw_softc*) ;
 int FUNC_1 (struct ipw_softc*) ;
 int FUNC_2 (struct ieee80211com*) ;
 int FUNC_3 (struct ipw_softc*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_1)
{
 struct ipw_softc *VAR_2 = VAR_1;
 struct ieee80211com *VAR_3 = &VAR_2->sc_ic;

 FUNC_0(VAR_2);
 FUNC_3(VAR_2);
 FUNC_1(VAR_2);

 if (VAR_2->flags & VAR_0)
  FUNC_2(VAR_3);
}
