
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mbuf {int dummy; } ;
struct TYPE_2__ {scalar_t__ jme_tx_cnt; } ;
struct jme_softc {int jme_flags; int jme_txcsr; int jme_watchdog_timer; TYPE_1__ jme_cdata; } ;
struct ifnet {int if_drv_flags; int if_snd; struct jme_softc* if_softc; } ;


 int FUNC_0 (struct jme_softc*,int ,int) ;
 int FUNC_1 (struct ifnet*,struct mbuf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,struct mbuf*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,struct mbuf*) ;
 int VAR_2 ;
 int FUNC_5 (struct jme_softc*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_7 (struct jme_softc*,struct mbuf**) ;
 int FUNC_8 (struct jme_softc*) ;

__attribute__((used)) static void
FUNC_9(struct ifnet *VAR_8)
{
        struct jme_softc *VAR_9;
        struct mbuf *VAR_10;
 int VAR_11;

 VAR_9 = VAR_8->if_softc;

 FUNC_5(VAR_9);

 if (VAR_9->jme_cdata.jme_tx_cnt >= VAR_4)
  FUNC_8(VAR_9);

 if ((VAR_8->if_drv_flags & (VAR_1 | VAR_0)) !=
     VAR_1 || (VAR_9->jme_flags & VAR_2) == 0)
  return;

 for (VAR_11 = 0; !FUNC_3(&VAR_8->if_snd); ) {
  FUNC_2(&VAR_8->if_snd, VAR_10);
  if (VAR_10 == ((void*)0))
   break;





  if (FUNC_7(VAR_9, &VAR_10)) {
   if (VAR_10 == ((void*)0))
    break;
   FUNC_4(&VAR_8->if_snd, VAR_10);
   VAR_8->if_drv_flags |= VAR_0;
   break;
  }

  VAR_11++;




  FUNC_1(VAR_8, VAR_10);
 }

 if (VAR_11 > 0) {






  FUNC_0(VAR_9, VAR_3, VAR_9->jme_txcsr | VAR_7 |
      FUNC_6(VAR_6));

  VAR_9->jme_watchdog_timer = VAR_5;
 }
}
