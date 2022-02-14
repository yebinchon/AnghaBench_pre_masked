
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {scalar_t__ ic_promisc; } ;
struct mwl_softc {struct mwl_hal* sc_mh; struct ieee80211com sc_ic; } ;
struct mwl_hal {int dummy; } ;


 int FUNC_0 (struct mwl_hal*,int) ;
 int FUNC_1 (struct mwl_softc*) ;

__attribute__((used)) static int
FUNC_2(struct mwl_softc *VAR_0)
{
 struct ieee80211com *VAR_1 = &VAR_0->sc_ic;
 struct mwl_hal *VAR_2 = VAR_0->sc_mh;

 FUNC_0(VAR_2, VAR_1->ic_promisc > 0);
 FUNC_1(VAR_0);

 return 0;
}
