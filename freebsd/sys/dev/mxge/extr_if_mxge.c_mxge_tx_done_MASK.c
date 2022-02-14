
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_8__ {scalar_t__ pkt_done; int done; int mask; int req; int* send_stop; int mtx; int deactivate; scalar_t__ queue_active; int wake; TYPE_2__* info; int dmat; } ;
struct mxge_slice_state {int if_drv_flags; TYPE_4__ tx; TYPE_3__* sc; int opackets; int omcasts; int obytes; } ;
struct TYPE_5__ {scalar_t__ len; } ;
struct mbuf {int m_flags; TYPE_1__ m_pkthdr; } ;
struct ifnet {int if_drv_flags; } ;
typedef TYPE_4__ mxge_tx_ring_t ;
typedef int bus_dmamap_t ;
struct TYPE_7__ {int num_slices; struct ifnet* ifp; } ;
struct TYPE_6__ {scalar_t__ flag; int map; struct mbuf* m; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct mbuf*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct mxge_slice_state*) ;
 int FUNC_5 () ;

__attribute__((used)) static inline void
FUNC_6(struct mxge_slice_state *VAR_2, uint32_t VAR_3)
{
 struct ifnet *VAR_4;
 mxge_tx_ring_t *VAR_5;
 struct mbuf *VAR_6;
 bus_dmamap_t VAR_7;
 int VAR_8;
 int *VAR_9;

 VAR_5 = &VAR_2->tx;
 VAR_4 = VAR_2->sc->ifp;
 while (VAR_5->pkt_done != VAR_3) {
  VAR_8 = VAR_5->done & VAR_5->mask;
  VAR_5->done++;
  VAR_6 = VAR_5->info[VAR_8].m;


  if (VAR_6 != ((void*)0)) {
   VAR_2->obytes += VAR_6->m_pkthdr.len;
   if (VAR_6->m_flags & VAR_1)
    VAR_2->omcasts++;
   VAR_2->opackets++;
   VAR_5->info[VAR_8].m = ((void*)0);
   VAR_7 = VAR_5->info[VAR_8].map;
   FUNC_0(VAR_5->dmat, VAR_7);
   FUNC_1(VAR_6);
  }
  if (VAR_5->info[VAR_8].flag) {
   VAR_5->info[VAR_8].flag = 0;
   VAR_5->pkt_done++;
  }
 }






 VAR_9 = &VAR_4->if_drv_flags;

 FUNC_2(&VAR_2->tx.mtx);
 if ((*VAR_9) & VAR_0 &&
     VAR_5->req - VAR_5->done < (VAR_5->mask + 1)/4) {
  *(VAR_9) &= ~VAR_0;
  VAR_2->tx.wake++;
  FUNC_4(VAR_2);
 }
 FUNC_3(&VAR_2->tx.mtx);

}
