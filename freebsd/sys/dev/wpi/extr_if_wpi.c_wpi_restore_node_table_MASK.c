
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpi_vap {scalar_t__ wv_gtk; } ;
struct ieee80211com {int ic_sta; } ;
struct wpi_softc {struct ieee80211com sc_ic; } ;


 int FUNC_0 (struct wpi_softc*) ;
 int FUNC_1 (struct wpi_softc*) ;
 int FUNC_2 (struct ieee80211com*) ;
 int FUNC_3 (int *,int ,struct wpi_softc*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_4(struct wpi_softc *VAR_1, struct wpi_vap *VAR_2)
{
 struct ieee80211com *VAR_3 = &VAR_1->sc_ic;


 FUNC_0(VAR_1);
 VAR_2->wv_gtk = 0;
 FUNC_1(VAR_1);

 FUNC_3(&VAR_3->ic_sta, VAR_0, VAR_1);
 FUNC_2(VAR_3);
}
