
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_softc {int flags; } ;
struct ieee80211com {struct ipw_softc* ic_softc; } ;


 int VAR_0 ;
 int FUNC_0 (struct ipw_softc*) ;
 int FUNC_1 (struct ipw_softc*) ;

__attribute__((used)) static void
FUNC_2(struct ieee80211com *VAR_1)
{
 struct ipw_softc *VAR_2 = VAR_1->ic_softc;

 FUNC_0(VAR_2);
 VAR_2->flags &= ~VAR_0;
 FUNC_1(VAR_2);
}
