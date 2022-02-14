
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwi_softc {int dummy; } ;
struct ieee80211vap {TYPE_1__* iv_ic; } ;
struct ieee80211_scan_state {struct ieee80211vap* ss_vap; } ;
struct TYPE_2__ {struct iwi_softc* ic_softc; } ;


 int FUNC_0 (struct iwi_softc*) ;
 int VAR_0 ;
 int FUNC_1 (struct iwi_softc*) ;
 int FUNC_2 (struct ieee80211vap*) ;
 scalar_t__ FUNC_3 (struct iwi_softc*,unsigned long,int ) ;

__attribute__((used)) static void
FUNC_4(struct ieee80211_scan_state *VAR_1, unsigned long VAR_2)
{
 struct ieee80211vap *VAR_3 = VAR_1->ss_vap;
 struct iwi_softc *VAR_4 = VAR_3->iv_ic->ic_softc;
 VAR_0;

 FUNC_0(VAR_4);
 if (FUNC_3(VAR_4, VAR_2, 0))
  FUNC_2(VAR_3);
 FUNC_1(VAR_4);
}
