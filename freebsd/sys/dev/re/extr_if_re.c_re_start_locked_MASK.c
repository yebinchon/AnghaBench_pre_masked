
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ rl_tx_prodidx; int rl_tx_free; int rl_tx_desc_cnt; } ;
struct rl_softc {int rl_watchdog_timer; int rl_flags; TYPE_1__ rl_ldata; int rl_txstart; } ;
struct netmap_kring {scalar_t__ nr_hwcur; } ;
struct mbuf {int dummy; } ;
struct ifnet {int if_capenable; int if_drv_flags; int if_snd; struct rl_softc* if_softc; } ;
struct TYPE_4__ {struct netmap_kring** tx_rings; } ;


 int FUNC_0 (struct rl_softc*,int ,int ) ;
 int FUNC_1 (struct rl_softc*,int ,int) ;
 int FUNC_2 (struct ifnet*,struct mbuf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int *,struct mbuf*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,struct mbuf*) ;
 TYPE_2__* FUNC_6 (struct ifnet*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_7 (struct rl_softc*,struct mbuf**) ;
 int FUNC_8 (struct rl_softc*) ;

__attribute__((used)) static void
FUNC_9(struct ifnet *VAR_6)
{
 struct rl_softc *VAR_7;
 struct mbuf *VAR_8;
 int VAR_9;

 VAR_7 = VAR_6->if_softc;
 if ((VAR_6->if_drv_flags & (VAR_2 | VAR_1)) !=
     VAR_2 || (VAR_7->rl_flags & VAR_3) == 0)
  return;

 for (VAR_9 = 0; !FUNC_4(&VAR_6->if_snd) &&
     VAR_7->rl_ldata.rl_tx_free > 1;) {
  FUNC_3(&VAR_6->if_snd, VAR_8);
  if (VAR_8 == ((void*)0))
   break;

  if (FUNC_7(VAR_7, &VAR_8) != 0) {
   if (VAR_8 == ((void*)0))
    break;
   FUNC_5(&VAR_6->if_snd, VAR_8);
   VAR_6->if_drv_flags |= VAR_1;
   break;
  }





  FUNC_2(VAR_6, VAR_8);

  VAR_9++;
 }

 if (VAR_9 == 0) {




  return;
 }

 FUNC_8(VAR_7);
}
