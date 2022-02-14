
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mbuf {int dummy; } ;
struct ifnet {int if_drv_flags; int if_snd; struct ale_softc* if_softc; } ;
struct TYPE_2__ {scalar_t__ ale_tx_cnt; int ale_tx_prod; } ;
struct ale_softc {int ale_flags; int ale_watchdog_timer; TYPE_1__ ale_cdata; } ;


 int VAR_0 ;
 int FUNC_0 (struct ale_softc*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ale_softc*,int ,int ) ;
 int FUNC_2 (struct ifnet*,struct mbuf*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,struct mbuf*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,struct mbuf*) ;
 scalar_t__ FUNC_6 (struct ale_softc*,struct mbuf**) ;
 int FUNC_7 (struct ale_softc*) ;

__attribute__((used)) static void
FUNC_8(struct ifnet *VAR_6)
{
        struct ale_softc *VAR_7;
        struct mbuf *VAR_8;
 int VAR_9;

 VAR_7 = VAR_6->if_softc;

 FUNC_0(VAR_7);


 if (VAR_7->ale_cdata.ale_tx_cnt >= VAR_2)
  FUNC_7(VAR_7);

 if ((VAR_6->if_drv_flags & (VAR_5 | VAR_4)) !=
     VAR_5 || (VAR_7->ale_flags & VAR_0) == 0)
  return;

 for (VAR_9 = 0; !FUNC_4(&VAR_6->if_snd); ) {
  FUNC_3(&VAR_6->if_snd, VAR_8);
  if (VAR_8 == ((void*)0))
   break;





  if (FUNC_6(VAR_7, &VAR_8)) {
   if (VAR_8 == ((void*)0))
    break;
   FUNC_5(&VAR_6->if_snd, VAR_8);
   VAR_6->if_drv_flags |= VAR_4;
   break;
  }

  VAR_9++;




  FUNC_2(VAR_6, VAR_8);
 }

 if (VAR_9 > 0) {

  FUNC_1(VAR_7, VAR_1,
      VAR_7->ale_cdata.ale_tx_prod);

  VAR_7->ale_watchdog_timer = VAR_3;
 }
}
