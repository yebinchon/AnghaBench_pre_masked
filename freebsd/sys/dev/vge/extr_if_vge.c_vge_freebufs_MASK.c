
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vge_txdesc {int * tx_m; int tx_dmamap; } ;
struct TYPE_2__ {int vge_tx_tag; struct vge_txdesc* vge_txdesc; int vge_rx_tag; struct vge_rxdesc* vge_rxdesc; } ;
struct vge_softc {TYPE_1__ vge_cdata; struct ifnet* vge_ifp; } ;
struct vge_rxdesc {int * rx_m; int rx_dmamap; } ;
struct ifnet {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct vge_softc*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct ifnet*,int ,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(struct vge_softc *VAR_5)
{
 struct vge_txdesc *VAR_6;
 struct vge_rxdesc *VAR_7;
 struct ifnet *VAR_8;
 int VAR_9;

 FUNC_0(VAR_5);

 VAR_8 = VAR_5->vge_ifp;



 for (VAR_9 = 0; VAR_9 < VAR_3; VAR_9++) {
  VAR_7 = &VAR_5->vge_cdata.vge_rxdesc[VAR_9];
  if (VAR_7->rx_m != ((void*)0)) {
   FUNC_1(VAR_5->vge_cdata.vge_rx_tag,
       VAR_7->rx_dmamap, VAR_0);
   FUNC_2(VAR_5->vge_cdata.vge_rx_tag,
       VAR_7->rx_dmamap);
   FUNC_4(VAR_7->rx_m);
   VAR_7->rx_m = ((void*)0);
  }
 }

 for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
  VAR_6 = &VAR_5->vge_cdata.vge_txdesc[VAR_9];
  if (VAR_6->tx_m != ((void*)0)) {
   FUNC_1(VAR_5->vge_cdata.vge_tx_tag,
       VAR_6->tx_dmamap, VAR_1);
   FUNC_2(VAR_5->vge_cdata.vge_tx_tag,
       VAR_6->tx_dmamap);
   FUNC_4(VAR_6->tx_m);
   VAR_6->tx_m = ((void*)0);
   FUNC_3(VAR_8, VAR_2, 1);
  }
 }
}
