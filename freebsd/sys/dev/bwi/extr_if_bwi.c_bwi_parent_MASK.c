
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211com {scalar_t__ ic_nrunning; scalar_t__ ic_promisc; struct bwi_softc* ic_softc; } ;
struct bwi_softc {int sc_flags; TYPE_1__* sc_cur_regwin; } ;
struct bwi_mac {int dummy; } ;
struct TYPE_2__ {scalar_t__ rw_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bwi_softc*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct bwi_softc*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct bwi_softc*,int) ;
 int FUNC_4 (struct bwi_mac*,int) ;
 int FUNC_5 (struct bwi_softc*,int) ;
 int FUNC_6 (struct ieee80211com*) ;

__attribute__((used)) static void
FUNC_7(struct ieee80211com *VAR_3)
{
 struct bwi_softc *VAR_4 = VAR_3->ic_softc;
 int VAR_5 = 0;

 FUNC_0(VAR_4);
 if (VAR_3->ic_nrunning > 0) {
  struct bwi_mac *VAR_6;
  int VAR_7 = -1;

  FUNC_2(VAR_4->sc_cur_regwin->rw_type == VAR_2,
      ("current regwin type %d",
      VAR_4->sc_cur_regwin->rw_type));
  VAR_6 = (struct bwi_mac *)VAR_4->sc_cur_regwin;

  if (VAR_3->ic_promisc > 0 && (VAR_4->sc_flags & VAR_0) == 0) {
   VAR_7 = 1;
   VAR_4->sc_flags |= VAR_0;
  } else if (VAR_3->ic_promisc == 0 &&
      (VAR_4->sc_flags & VAR_0) != 0) {
   VAR_7 = 0;
   VAR_4->sc_flags &= ~VAR_0;
  }

  if (VAR_7 >= 0)
   FUNC_4(VAR_6, VAR_7);
 }
 if (VAR_3->ic_nrunning > 0) {
  if ((VAR_4->sc_flags & VAR_1) == 0) {
   FUNC_3(VAR_4, 1);
   VAR_5 = 1;
  }
 } else if (VAR_4->sc_flags & VAR_1)
  FUNC_5(VAR_4, 1);
 FUNC_1(VAR_4);
 if (VAR_5)
  FUNC_6(VAR_3);
}
