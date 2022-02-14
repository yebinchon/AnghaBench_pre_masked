
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rum_softc {int sc_snd; int sc_running; } ;
struct mbuf {int dummy; } ;
struct ieee80211com {struct rum_softc* ic_softc; } ;


 int VAR_0 ;
 int FUNC_0 (struct rum_softc*) ;
 int FUNC_1 (struct rum_softc*) ;
 int FUNC_2 (int *,struct mbuf*) ;
 int FUNC_3 (struct rum_softc*) ;

__attribute__((used)) static int
FUNC_4(struct ieee80211com *VAR_1, struct mbuf *VAR_2)
{
 struct rum_softc *VAR_3 = VAR_1->ic_softc;
 int VAR_4;

 FUNC_0(VAR_3);
 if (!VAR_3->sc_running) {
  FUNC_1(VAR_3);
  return (VAR_0);
 }
 VAR_4 = FUNC_2(&VAR_3->sc_snd, VAR_2);
 if (VAR_4) {
  FUNC_1(VAR_3);
  return (VAR_4);
 }
 FUNC_3(VAR_3);
 FUNC_1(VAR_3);

 return (0);
}
