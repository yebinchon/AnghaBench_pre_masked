
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mbuf {int dummy; } ;
struct ifnet {int if_drv_flags; int if_snd; scalar_t__ if_softc; } ;
struct TYPE_2__ {int rb_td_nbusy; } ;
struct hme_softc {int sc_flags; int sc_wdog_timer; int sc_cdmamap; int sc_cdmatag; TYPE_1__ sc_rb; } ;


 int FUNC_0 (struct ifnet*,struct mbuf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,struct mbuf*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct mbuf*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (struct hme_softc*,struct mbuf**) ;

__attribute__((used)) static void
FUNC_6(struct ifnet *VAR_6)
{
 struct hme_softc *VAR_7 = (struct hme_softc *)VAR_6->if_softc;
 struct mbuf *VAR_8;
 int VAR_9, VAR_10 = 0;

 if ((VAR_6->if_drv_flags & (VAR_5 | VAR_4)) !=
     VAR_5 || (VAR_7->sc_flags & VAR_2) == 0)
  return;

 for (; !FUNC_2(&VAR_6->if_snd) &&
     VAR_7->sc_rb.rb_td_nbusy < VAR_3 - 1;) {
  FUNC_1(&VAR_6->if_snd, VAR_8);
  if (VAR_8 == ((void*)0))
   break;

  VAR_9 = FUNC_5(VAR_7, &VAR_8);
  if (VAR_9 != 0) {
   if (VAR_8 == ((void*)0))
    break;
   VAR_6->if_drv_flags |= VAR_4;
   FUNC_3(&VAR_6->if_snd, VAR_8);
   break;
  }
  VAR_10++;
  FUNC_0(VAR_6, VAR_8);
 }

 if (VAR_10 > 0) {
  FUNC_4(VAR_7->sc_cdmatag, VAR_7->sc_cdmamap,
      VAR_0 | VAR_1);
  VAR_7->sc_wdog_timer = 5;
 }
}
