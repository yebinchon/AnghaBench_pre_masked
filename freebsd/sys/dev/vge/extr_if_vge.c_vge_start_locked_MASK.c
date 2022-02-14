
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vge_txdesc {TYPE_2__* tx_desc; } ;
struct TYPE_6__ {int vge_tx_prodidx; int vge_tx_cnt; int vge_tx_ring_map; int vge_tx_ring_tag; struct vge_txdesc* vge_txdesc; } ;
struct vge_softc {int vge_flags; int vge_timer; TYPE_3__ vge_cdata; } ;
struct mbuf {int dummy; } ;
struct ifnet {int if_drv_flags; int if_snd; struct vge_softc* if_softc; } ;
struct TYPE_5__ {TYPE_1__* vge_frag; } ;
struct TYPE_4__ {int vge_addrhi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vge_softc*,int ,int ) ;
 int FUNC_1 (struct ifnet*,struct mbuf*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,struct mbuf*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,struct mbuf*) ;
 int VAR_4 ;
 int FUNC_5 (struct vge_softc*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (struct vge_softc*,struct mbuf**) ;

__attribute__((used)) static void
FUNC_11(struct ifnet *VAR_9)
{
 struct vge_softc *VAR_10;
 struct vge_txdesc *VAR_11;
 struct mbuf *VAR_12;
 int VAR_13, VAR_14;

 VAR_10 = VAR_9->if_softc;

 FUNC_5(VAR_10);

 if ((VAR_10->vge_flags & VAR_4) == 0 ||
     (VAR_9->if_drv_flags & (VAR_3 | VAR_2)) !=
     VAR_3)
  return;

 VAR_14 = VAR_10->vge_cdata.vge_tx_prodidx;
 FUNC_6(VAR_14);
 for (VAR_13 = 0; !FUNC_3(&VAR_9->if_snd) &&
     VAR_10->vge_cdata.vge_tx_cnt < VAR_8 - 1; ) {
  FUNC_2(&VAR_9->if_snd, VAR_12);
  if (VAR_12 == ((void*)0))
   break;





  if (FUNC_10(VAR_10, &VAR_12)) {
   if (VAR_12 == ((void*)0))
    break;
   FUNC_4(&VAR_9->if_snd, VAR_12);
   VAR_9->if_drv_flags |= VAR_2;
   break;
  }

  VAR_11 = &VAR_10->vge_cdata.vge_txdesc[VAR_14];
  VAR_11->tx_desc->vge_frag[0].vge_addrhi |= FUNC_9(VAR_5);
  FUNC_7(VAR_14);

  VAR_13++;




  FUNC_1(VAR_9, VAR_12);
 }

 if (VAR_13 > 0) {
  FUNC_8(VAR_10->vge_cdata.vge_tx_ring_tag,
      VAR_10->vge_cdata.vge_tx_ring_map,
      VAR_0 | VAR_1);

  FUNC_0(VAR_10, VAR_6, VAR_7);



  VAR_10->vge_timer = 5;
 }
}
