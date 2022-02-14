
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmeParams {int dummy; } ;
struct ieee80211com {struct bwn_softc* ic_softc; } ;
struct chanAccParams {struct wmeParams* cap_wmeParams; } ;
struct bwn_softc {int sc_wmeParams; struct bwn_mac* sc_curmac; } ;
struct bwn_mac {scalar_t__ mac_status; } ;


 int FUNC_0 (struct bwn_softc*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct bwn_softc*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct bwn_mac*) ;
 int FUNC_4 (struct bwn_mac*) ;
 int FUNC_5 (struct bwn_mac*,struct wmeParams*,int ) ;
 int * VAR_1 ;
 int FUNC_6 (struct ieee80211com*,struct chanAccParams*) ;

__attribute__((used)) static int
FUNC_7(struct ieee80211com *VAR_2)
{
 struct bwn_softc *VAR_3 = VAR_2->ic_softc;
 struct bwn_mac *VAR_4 = VAR_3->sc_curmac;
 struct chanAccParams VAR_5;
 struct wmeParams *VAR_6;
 int VAR_7;

 FUNC_6(VAR_2, &VAR_5);

 FUNC_0(VAR_3);
 VAR_4 = VAR_3->sc_curmac;
 if (VAR_4 != ((void*)0) && VAR_4->mac_status >= VAR_0) {
  FUNC_4(VAR_4);
  for (VAR_7 = 0; VAR_7 < FUNC_2(VAR_3->sc_wmeParams); VAR_7++) {
   VAR_6 = &VAR_5.cap_wmeParams[VAR_7];
   FUNC_5(VAR_4, VAR_6, VAR_1[VAR_7]);
  }
  FUNC_3(VAR_4);
 }
 FUNC_1(VAR_3);
 return (0);
}
