
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ndis_softc {scalar_t__ ndis_running; } ;
struct ieee80211com {scalar_t__ ic_nrunning; struct ndis_softc* ic_softc; } ;


 int FUNC_0 (struct ndis_softc*) ;
 int FUNC_1 (struct ndis_softc*) ;

__attribute__((used)) static void
FUNC_2(struct ieee80211com *VAR_0)
{
 struct ndis_softc *VAR_1 = VAR_0->ic_softc;


 if (VAR_0->ic_nrunning > 0) {
  if (!VAR_1->ndis_running)
   FUNC_0(VAR_1);
 } else if (VAR_1->ndis_running)
  FUNC_1(VAR_1);

}
