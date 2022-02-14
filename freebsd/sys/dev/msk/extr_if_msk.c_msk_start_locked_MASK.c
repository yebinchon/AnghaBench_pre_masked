
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ msk_tx_cnt; int msk_tx_prod; } ;
struct msk_if_softc {int msk_flags; int msk_watchdog_timer; TYPE_1__ msk_cdata; int msk_txq; int msk_softc; } ;
struct mbuf {int dummy; } ;
struct ifnet {int if_drv_flags; int if_snd; struct msk_if_softc* if_softc; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct ifnet*,struct mbuf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,struct mbuf*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,struct mbuf*) ;
 int VAR_2 ;
 int FUNC_5 (struct msk_if_softc*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (struct msk_if_softc*,struct mbuf**) ;

__attribute__((used)) static void
FUNC_8(struct ifnet *VAR_7)
{
 struct msk_if_softc *VAR_8;
 struct mbuf *VAR_9;
 int VAR_10;

 VAR_8 = VAR_7->if_softc;
 FUNC_5(VAR_8);

 if ((VAR_7->if_drv_flags & (VAR_1 | VAR_0)) !=
     VAR_1 || (VAR_8->msk_flags & VAR_2) == 0)
  return;

 for (VAR_10 = 0; !FUNC_3(&VAR_7->if_snd) &&
     VAR_8->msk_cdata.msk_tx_cnt <
     (VAR_4 - VAR_3); ) {
  FUNC_2(&VAR_7->if_snd, VAR_9);
  if (VAR_9 == ((void*)0))
   break;





  if (FUNC_7(VAR_8, &VAR_9) != 0) {
   if (VAR_9 == ((void*)0))
    break;
   FUNC_4(&VAR_7->if_snd, VAR_9);
   VAR_7->if_drv_flags |= VAR_0;
   break;
  }

  VAR_10++;




  FUNC_1(VAR_7, VAR_9);
 }

 if (VAR_10 > 0) {

  FUNC_0(VAR_8->msk_softc,
      FUNC_6(VAR_8->msk_txq, VAR_6),
      VAR_8->msk_cdata.msk_tx_prod);


  VAR_8->msk_watchdog_timer = VAR_5;
 }
}
