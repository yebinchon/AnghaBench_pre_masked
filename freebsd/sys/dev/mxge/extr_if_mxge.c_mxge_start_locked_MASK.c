
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ mask; scalar_t__ req; scalar_t__ done; scalar_t__ max_desc; int stall; } ;
struct mxge_slice_state {TYPE_1__ tx; TYPE_2__* sc; } ;
struct mbuf {int dummy; } ;
struct ifnet {int if_drv_flags; int if_snd; } ;
typedef TYPE_1__ mxge_tx_ring_t ;
struct TYPE_4__ {struct ifnet* ifp; } ;
typedef TYPE_2__ mxge_softc_t ;


 int FUNC_0 (struct ifnet*,struct mbuf*) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct mbuf*) ;
 int FUNC_2 (struct mxge_slice_state*,struct mbuf*) ;

__attribute__((used)) static inline void
FUNC_3(struct mxge_slice_state *VAR_1)
{
 mxge_softc_t *VAR_2;
 struct mbuf *VAR_3;
 struct ifnet *VAR_4;
 mxge_tx_ring_t *VAR_5;

 VAR_2 = VAR_1->sc;
 VAR_4 = VAR_2->ifp;
 VAR_5 = &VAR_1->tx;
 while ((VAR_5->mask - (VAR_5->req - VAR_5->done)) > VAR_5->max_desc) {
  FUNC_1(&VAR_4->if_snd, VAR_3);
  if (VAR_3 == ((void*)0)) {
   return;
  }

  FUNC_0(VAR_4, VAR_3);


  FUNC_2(VAR_1, VAR_3);
 }

 if ((VAR_2->ifp->if_drv_flags & VAR_0) == 0) {
  VAR_2->ifp->if_drv_flags |= VAR_0;
  VAR_5->stall++;
 }
}
