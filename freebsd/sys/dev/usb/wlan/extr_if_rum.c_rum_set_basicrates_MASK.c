
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211com {scalar_t__ ic_curmode; int ic_bsschan; } ;
struct rum_softc {struct ieee80211com sc_ic; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct rum_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct rum_softc *VAR_2)
{
 struct ieee80211com *VAR_3 = &VAR_2->sc_ic;


 if (VAR_3->ic_curmode == VAR_0) {

  FUNC_1(VAR_2, VAR_1, 0x3);
 } else if (FUNC_0(VAR_3->ic_bsschan)) {

  FUNC_1(VAR_2, VAR_1, 0x150);
 } else {

  FUNC_1(VAR_2, VAR_1, 0xf);
 }
}
