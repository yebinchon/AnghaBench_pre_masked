
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ stge_tx_cnt; } ;
struct stge_softc {scalar_t__ sc_link; int sc_watchdog_timer; TYPE_1__ sc_cdata; } ;
struct mbuf {int dummy; } ;
struct ifnet {int if_drv_flags; int if_snd; struct stge_softc* if_softc; } ;


 int FUNC_0 (struct stge_softc*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct ifnet*,struct mbuf*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,struct mbuf*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,struct mbuf*) ;
 int VAR_3 ;
 int FUNC_5 (struct stge_softc*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_6 (struct stge_softc*,struct mbuf**) ;

__attribute__((used)) static void
FUNC_7(struct ifnet *VAR_5)
{
        struct stge_softc *VAR_6;
        struct mbuf *VAR_7;
 int VAR_8;

 VAR_6 = VAR_5->if_softc;

 FUNC_5(VAR_6);

 if ((VAR_5->if_drv_flags & (VAR_2|VAR_1)) !=
     VAR_2 || VAR_6->sc_link == 0)
  return;

 for (VAR_8 = 0; !FUNC_3(&VAR_5->if_snd); ) {
  if (VAR_6->sc_cdata.stge_tx_cnt >= VAR_4) {
   VAR_5->if_drv_flags |= VAR_1;
   break;
  }

  FUNC_2(&VAR_5->if_snd, VAR_7);
  if (VAR_7 == ((void*)0))
   break;





  if (FUNC_6(VAR_6, &VAR_7)) {
   if (VAR_7 == ((void*)0))
    break;
   FUNC_4(&VAR_5->if_snd, VAR_7);
   VAR_5->if_drv_flags |= VAR_1;
   break;
  }

  VAR_8++;




  FUNC_1(VAR_5, VAR_7);
 }

 if (VAR_8 > 0) {

  FUNC_0(VAR_6, VAR_3, VAR_0);


  VAR_6->sc_watchdog_timer = 5;
 }
}
