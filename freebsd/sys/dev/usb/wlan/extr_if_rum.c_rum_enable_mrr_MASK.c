
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {int ic_bsschan; } ;
struct rum_softc {struct ieee80211com sc_ic; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct rum_softc*,int ,int,int) ;
 int FUNC_2 (struct rum_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct rum_softc *VAR_3)
{
 struct ieee80211com *VAR_4 = &VAR_3->sc_ic;

 if (!FUNC_0(VAR_4->ic_bsschan)) {
  FUNC_2(VAR_3, VAR_2,
      VAR_1 | VAR_0);
 } else {
  FUNC_1(VAR_3, VAR_2,
      VAR_1, VAR_0);
 }
}
