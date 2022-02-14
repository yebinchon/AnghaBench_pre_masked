
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mwl_vap {struct mwl_hal_vap* mv_hvap; } ;
struct mwl_softc {int sc_imask; scalar_t__ sc_running; int sc_nwdsvaps; int sc_nstavaps; int sc_napvaps; struct mwl_hal* sc_mh; } ;
struct mwl_hal_vap {int dummy; } ;
struct mwl_hal {int dummy; } ;
struct ieee80211vap {int iv_opmode; int iv_myaddr; TYPE_1__* iv_ic; } ;
typedef enum ieee80211_opmode { ____Placeholder_ieee80211_opmode } ieee80211_opmode ;
struct TYPE_2__ {struct mwl_softc* ic_softc; } ;






 int FUNC_0 (int ,char*) ;
 struct mwl_vap* FUNC_1 (struct ieee80211vap*) ;
 int VAR_0 ;
 int FUNC_2 (struct mwl_vap*,int ) ;
 int FUNC_3 (struct ieee80211vap*) ;
 int FUNC_4 (struct mwl_softc*,struct ieee80211vap*) ;
 int FUNC_5 (struct mwl_hal_vap*,int ) ;
 int FUNC_6 (struct mwl_hal_vap*) ;
 int FUNC_7 (struct mwl_hal*,int ) ;
 int FUNC_8 (struct mwl_softc*,int ) ;

__attribute__((used)) static void
FUNC_9(struct ieee80211vap *VAR_1)
{
 struct mwl_vap *VAR_2 = FUNC_1(VAR_1);
 struct mwl_softc *VAR_3 = VAR_1->iv_ic->ic_softc;
 struct mwl_hal *VAR_4 = VAR_3->sc_mh;
 struct mwl_hal_vap *VAR_5 = VAR_2->mv_hvap;
 enum ieee80211_opmode VAR_6 = VAR_1->iv_opmode;


 if (VAR_3->sc_running) {

  FUNC_7(VAR_4, 0);
 }
 FUNC_3(VAR_1);
 switch (VAR_6) {
 case 131:
 case 130:
 case 129:
  FUNC_0(VAR_5 != ((void*)0), ("no hal vap handle"));
  (void) FUNC_5(VAR_5, VAR_1->iv_myaddr);
  FUNC_6(VAR_5);
  if (VAR_6 == 131 || VAR_6 == 130)
   VAR_3->sc_napvaps--;
  else
   VAR_3->sc_nstavaps--;

  FUNC_8(VAR_3, VAR_1->iv_myaddr);
  break;
 case 128:
  VAR_3->sc_nwdsvaps--;
  break;
 default:
  break;
 }
 FUNC_4(VAR_3, VAR_1);
 FUNC_2(VAR_2, VAR_0);
 if (VAR_3->sc_running)
  FUNC_7(VAR_4, VAR_3->sc_imask);
}
