
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct mbuf {int dummy; } ;
struct ifnet {int if_drv_flags; int if_snd; TYPE_4__* if_softc; } ;
struct TYPE_9__ {TYPE_3__** wq; TYPE_1__* ifp; int link_status; } ;
struct TYPE_7__ {int tx_stops; } ;
struct TYPE_8__ {TYPE_2__ tx_stats; int tx_lock; } ;
struct TYPE_6__ {int if_snd; } ;
typedef TYPE_4__* POCE_SOFTC ;


 int FUNC_0 (struct ifnet*,struct mbuf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,struct mbuf*) ;
 int FUNC_2 (int *,struct mbuf*) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_4__*,struct mbuf**,int) ;

void
FUNC_6(struct ifnet *VAR_3)
{
 POCE_SOFTC VAR_4 = VAR_3->if_softc;
 struct mbuf *VAR_5;
 int VAR_6 = 0;
 int VAR_7 = 0;

 if ((VAR_3->if_drv_flags & (VAR_1 | VAR_0)) !=
   VAR_1)
  return;

 if (!VAR_4->link_status)
  return;

 do {
  FUNC_2(&VAR_4->ifp->if_snd, VAR_5);
  if (VAR_5 == ((void*)0))
   break;

  FUNC_3(&VAR_4->wq[VAR_7]->tx_lock);
  VAR_6 = FUNC_5(VAR_4, &VAR_5, VAR_7);
  FUNC_4(&VAR_4->wq[VAR_7]->tx_lock);
  if (VAR_6) {
   if (VAR_5 != ((void*)0)) {
    VAR_4->wq[VAR_7]->tx_stats.tx_stops ++;
    VAR_3->if_drv_flags |= VAR_0;
    FUNC_1(&VAR_3->if_snd, VAR_5);
    VAR_5 = ((void*)0);
   }
   break;
  }
  if (VAR_5 != ((void*)0))
   FUNC_0(VAR_3, VAR_5);

 } while (VAR_2);

 return;
}
