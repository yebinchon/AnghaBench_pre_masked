
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpi_softc {int dummy; } ;
struct ieee80211vap {int dummy; } ;
struct ieee80211com {scalar_t__ ic_nrunning; int ic_vaps; struct wpi_softc* ic_softc; } ;


 struct ieee80211vap* FUNC_0 (int *) ;
 int FUNC_1 (struct ieee80211com*,int) ;
 int FUNC_2 (struct ieee80211com*) ;
 int FUNC_3 (struct ieee80211vap*) ;
 scalar_t__ FUNC_4 (struct wpi_softc*) ;
 int FUNC_5 (struct wpi_softc*) ;

__attribute__((used)) static void
FUNC_6(struct ieee80211com *VAR_0)
{
 struct wpi_softc *VAR_1 = VAR_0->ic_softc;
 struct ieee80211vap *VAR_2 = FUNC_0(&VAR_0->ic_vaps);

 if (VAR_0->ic_nrunning > 0) {
  if (FUNC_4(VAR_1) == 0) {
   FUNC_1(VAR_0, 1);
   FUNC_2(VAR_0);
  } else {
   FUNC_1(VAR_0, 0);
   FUNC_3(VAR_2);
  }
 } else {
  FUNC_1(VAR_0, 0);
  FUNC_5(VAR_1);
 }
}
