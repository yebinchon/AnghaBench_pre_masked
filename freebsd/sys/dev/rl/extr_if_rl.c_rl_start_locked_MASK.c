
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int cur_tx; } ;
struct rl_softc {int rl_flags; int rl_watchdog_timer; TYPE_2__ rl_cdata; int rl_txthresh; } ;
struct mbuf {int dummy; } ;
struct ifnet {int if_drv_flags; int if_snd; struct rl_softc* if_softc; } ;
struct TYPE_5__ {int len; } ;
struct TYPE_7__ {TYPE_1__ m_pkthdr; } ;


 int FUNC_0 (struct ifnet*,TYPE_3__*) ;
 int FUNC_1 (struct rl_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,struct mbuf*) ;
 int FUNC_3 (int *,struct mbuf*) ;
 TYPE_3__* FUNC_4 (struct rl_softc*) ;
 int FUNC_5 (struct rl_softc*) ;
 int VAR_2 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct rl_softc*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (struct rl_softc*,struct mbuf**) ;

__attribute__((used)) static void
FUNC_10(struct ifnet *VAR_3)
{
 struct rl_softc *VAR_4 = VAR_3->if_softc;
 struct mbuf *VAR_5 = ((void*)0);

 FUNC_7(VAR_4);

 if ((VAR_3->if_drv_flags & (VAR_1 | VAR_0)) !=
     VAR_1 || (VAR_4->rl_flags & VAR_2) == 0)
  return;

 while (FUNC_4(VAR_4) == ((void*)0)) {

  FUNC_2(&VAR_3->if_snd, VAR_5);

  if (VAR_5 == ((void*)0))
   break;

  if (FUNC_9(VAR_4, &VAR_5)) {
   if (VAR_5 == ((void*)0))
    break;
   FUNC_3(&VAR_3->if_snd, VAR_5);
   VAR_3->if_drv_flags |= VAR_0;
   break;
  }


  FUNC_0(VAR_3, FUNC_4(VAR_4));


  FUNC_1(VAR_4, FUNC_5(VAR_4),
      FUNC_8(VAR_4->rl_txthresh) |
      FUNC_4(VAR_4)->m_pkthdr.len);

  FUNC_6(VAR_4->rl_cdata.cur_tx);


  VAR_4->rl_watchdog_timer = 5;
 }






 if (FUNC_4(VAR_4) != ((void*)0))
  VAR_3->if_drv_flags |= VAR_0;
}
