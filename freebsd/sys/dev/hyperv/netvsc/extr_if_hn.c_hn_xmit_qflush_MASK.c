
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rm_priotracker {int dummy; } ;
struct ifnet {struct hn_softc* if_softc; } ;
struct hn_softc {int hn_tx_ring_inuse; int hn_xvf_flags; int hn_vf_lock; TYPE_1__* hn_vf_ifp; int * hn_tx_ring; } ;
struct TYPE_2__ {int (* if_qflush ) (TYPE_1__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ifnet*) ;
 int FUNC_2 (int *,struct rm_priotracker*) ;
 int FUNC_3 (int *,struct rm_priotracker*) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_5(struct ifnet *VAR_1)
{
 struct hn_softc *VAR_2 = VAR_1->if_softc;
 struct rm_priotracker VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->hn_tx_ring_inuse; ++VAR_4)
  FUNC_0(&VAR_2->hn_tx_ring[VAR_4]);
 FUNC_1(VAR_1);

 FUNC_2(&VAR_2->hn_vf_lock, &VAR_3);
 if (VAR_2->hn_xvf_flags & VAR_0)
  VAR_2->hn_vf_ifp->if_qflush(VAR_2->hn_vf_ifp);
 FUNC_3(&VAR_2->hn_vf_lock, &VAR_3);
}
