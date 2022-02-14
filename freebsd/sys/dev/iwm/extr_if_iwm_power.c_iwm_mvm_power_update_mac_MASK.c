
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ic_vaps; } ;
struct iwm_softc {TYPE_1__ sc_ic; } ;
struct ieee80211vap {int dummy; } ;


 int FUNC_0 (struct ieee80211vap*) ;
 struct ieee80211vap* FUNC_1 (int *) ;
 int FUNC_2 (struct iwm_softc*,int ) ;
 int FUNC_3 (struct iwm_softc*,int ) ;
 int FUNC_4 (struct iwm_softc*) ;

int
FUNC_5(struct iwm_softc *VAR_0)
{
 struct ieee80211vap *VAR_1 = FUNC_1(&VAR_0->sc_ic.ic_vaps);
 int VAR_2;

 VAR_2 = FUNC_4(VAR_0);
 if (VAR_2)
  return VAR_2;

 if (VAR_1 != ((void*)0)) {
  VAR_2 = FUNC_2(VAR_0, FUNC_0(VAR_1));
  if (VAR_2)
   return VAR_2;
 }

 if (VAR_1 != ((void*)0))
  return FUNC_3(VAR_0, FUNC_0(VAR_1));

 return 0;
}
