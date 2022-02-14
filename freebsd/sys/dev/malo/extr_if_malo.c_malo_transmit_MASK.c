
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct malo_softc {int malo_snd; int malo_running; } ;
struct ieee80211com {struct malo_softc* ic_softc; } ;


 int VAR_0 ;
 int FUNC_0 (struct malo_softc*) ;
 int FUNC_1 (struct malo_softc*) ;
 int FUNC_2 (struct malo_softc*) ;
 int FUNC_3 (int *,struct mbuf*) ;

__attribute__((used)) static int
FUNC_4(struct ieee80211com *VAR_1, struct mbuf *VAR_2)
{
 struct malo_softc *VAR_3 = VAR_1->ic_softc;
 int VAR_4;

 FUNC_0(VAR_3);
 if (!VAR_3->malo_running) {
  FUNC_1(VAR_3);
  return (VAR_0);
 }
 VAR_4 = FUNC_3(&VAR_3->malo_snd, VAR_2);
 if (VAR_4) {
  FUNC_1(VAR_3);
  return (VAR_4);
 }
 FUNC_2(VAR_3);
 FUNC_1(VAR_3);
 return (0);
}
