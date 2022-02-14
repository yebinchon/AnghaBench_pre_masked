
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtnet_txq {struct virtqueue* vtntx_vq; struct vtnet_softc* vtntx_sc; } ;
struct vtnet_softc {scalar_t__ vtnet_tx_intr_thresh; } ;
struct virtqueue {int dummy; } ;


 scalar_t__ FUNC_0 (struct virtqueue*) ;

__attribute__((used)) static int
FUNC_1(struct vtnet_txq *VAR_0)
{
 struct vtnet_softc *VAR_1;
 struct virtqueue *VAR_2;

 VAR_1 = VAR_0->vtntx_sc;
 VAR_2 = VAR_0->vtntx_vq;

 return (FUNC_0(VAR_2) <= VAR_1->vtnet_tx_intr_thresh);
}
