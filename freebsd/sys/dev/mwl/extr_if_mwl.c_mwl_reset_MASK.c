
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_long ;
struct mwl_softc {int sc_imask; struct mwl_hal* sc_mh; } ;
struct mwl_hal_vap {int dummy; } ;
struct mwl_hal {int dummy; } ;
struct ieee80211vap {int iv_state; struct ieee80211com* iv_ic; } ;
struct ieee80211com {struct mwl_softc* ic_softc; } ;
struct TYPE_2__ {struct mwl_hal_vap* mv_hvap; } ;


 TYPE_1__* FUNC_0 (struct ieee80211vap*) ;
 int FUNC_1 (struct mwl_hal*,int ) ;
 int FUNC_2 (struct ieee80211vap*,int ) ;

__attribute__((used)) static int
FUNC_3(struct ieee80211vap *VAR_0, u_long VAR_1)
{
 struct mwl_hal_vap *VAR_2 = FUNC_0(VAR_0)->mv_hvap;
 int VAR_3 = 0;

 if (VAR_2 != ((void*)0)) {
  struct ieee80211com *VAR_4 = VAR_0->iv_ic;
  struct mwl_softc *VAR_5 = VAR_4->ic_softc;
  struct mwl_hal *VAR_6 = VAR_5->sc_mh;



  FUNC_1(VAR_6, 0);
  VAR_3 = FUNC_2(VAR_0, VAR_0->iv_state);
  FUNC_1(VAR_6, VAR_5->sc_imask);
 }
 return VAR_3;
}
