
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vtxs_rescheduled; } ;
struct vtnet_txq {int vtntx_intrtask; int vtntx_tq; TYPE_1__ vtntx_stats; struct buf_ring* vtntx_br; struct virtqueue* vtntx_vq; struct vtnet_softc* vtntx_sc; } ;
struct vtnet_softc {scalar_t__ vtnet_link_active; struct ifnet* vtnet_ifp; } ;
struct virtqueue {int dummy; } ;
struct mbuf {int dummy; } ;
struct ifnet {int if_drv_flags; } ;
struct buf_ring {int dummy; } ;


 int FUNC_0 (struct ifnet*,struct mbuf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct vtnet_txq*) ;
 int FUNC_2 (struct ifnet*,struct buf_ring*) ;
 int FUNC_3 (struct ifnet*,struct buf_ring*,struct mbuf*) ;
 struct mbuf* FUNC_4 (struct ifnet*,struct buf_ring*) ;
 int FUNC_5 (struct ifnet*,struct buf_ring*,struct mbuf*) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (struct virtqueue*) ;
 scalar_t__ FUNC_8 (struct vtnet_txq*,struct mbuf**,int ) ;
 int FUNC_9 (struct vtnet_txq*) ;
 scalar_t__ FUNC_10 (struct vtnet_txq*) ;

__attribute__((used)) static int
FUNC_11(struct vtnet_txq *VAR_3, struct mbuf *VAR_4)
{
 struct vtnet_softc *VAR_5;
 struct virtqueue *VAR_6;
 struct buf_ring *VAR_7;
 struct ifnet *VAR_8;
 int VAR_9, VAR_10, VAR_11;

 VAR_5 = VAR_3->vtntx_sc;
 VAR_6 = VAR_3->vtntx_vq;
 VAR_7 = VAR_3->vtntx_br;
 VAR_8 = VAR_5->vtnet_ifp;
 VAR_10 = 0;
 VAR_11 = 0;

 FUNC_1(VAR_3);

 if ((VAR_8->if_drv_flags & VAR_0) == 0 ||
     VAR_5->vtnet_link_active == 0) {
  if (VAR_4 != ((void*)0))
   VAR_11 = FUNC_3(VAR_8, VAR_7, VAR_4);
  return (VAR_11);
 }

 if (VAR_4 != ((void*)0)) {
  VAR_11 = FUNC_3(VAR_8, VAR_7, VAR_4);
  if (VAR_11)
   return (VAR_11);
 }

 FUNC_9(VAR_3);

again:
 VAR_9 = 0;

 while ((VAR_4 = FUNC_4(VAR_8, VAR_7)) != ((void*)0)) {
  if (FUNC_7(VAR_6)) {
   FUNC_5(VAR_8, VAR_7, VAR_4);
   break;
  }

  if (FUNC_8(VAR_3, &VAR_4, VAR_1) != 0) {
   if (VAR_4 != ((void*)0))
    FUNC_5(VAR_8, VAR_7, VAR_4);
   else
    FUNC_2(VAR_8, VAR_7);
   break;
  }
  FUNC_2(VAR_8, VAR_7);

  VAR_9++;
  FUNC_0(VAR_8, VAR_4);
 }

 if (VAR_9 > 0 && FUNC_10(VAR_3) != 0) {
  if (VAR_10++ < VAR_2)
   goto again;

  VAR_3->vtntx_stats.vtxs_rescheduled++;
  FUNC_6(VAR_3->vtntx_tq, &VAR_3->vtntx_intrtask);
 }

 return (0);
}
