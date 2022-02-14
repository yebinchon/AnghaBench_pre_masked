
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwl_softc {int sc_mh; } ;
struct ieee80211com {scalar_t__ ic_promisc; struct mwl_softc* ic_softc; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static void
FUNC_1(struct ieee80211com *VAR_0)
{
 struct mwl_softc *VAR_1 = VAR_0->ic_softc;

 FUNC_0(VAR_1->sc_mh, VAR_0->ic_promisc > 0);
}
