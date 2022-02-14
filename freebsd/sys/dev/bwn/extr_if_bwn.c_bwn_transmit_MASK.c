
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
struct ieee80211com {struct bwn_softc* ic_softc; } ;
struct bwn_softc {int sc_flags; int sc_snd; } ;


 int VAR_0 ;
 int FUNC_0 (struct bwn_softc*) ;
 int FUNC_1 (struct bwn_softc*) ;
 int VAR_1 ;
 int FUNC_2 (struct bwn_softc*) ;
 int FUNC_3 (int *,struct mbuf*) ;

__attribute__((used)) static int
FUNC_4(struct ieee80211com *VAR_2, struct mbuf *VAR_3)
{
 struct bwn_softc *VAR_4 = VAR_2->ic_softc;
 int VAR_5;

 FUNC_0(VAR_4);
 if ((VAR_4->sc_flags & VAR_0) == 0) {
  FUNC_1(VAR_4);
  return (VAR_1);
 }
 VAR_5 = FUNC_3(&VAR_4->sc_snd, VAR_3);
 if (VAR_5) {
  FUNC_1(VAR_4);
  return (VAR_5);
 }
 FUNC_2(VAR_4);
 FUNC_1(VAR_4);
 return (0);
}
