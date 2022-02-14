
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vmem_t ;
struct xae_softc {int * xchan_rx; int * xchan_tx; int dev; int ih_rx; int * xdma_rx; int ih_tx; int * xdma_tx; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,int *) ;
 void* FUNC_2 (int *,int ) ;
 int * FUNC_3 (int ) ;
 void* FUNC_4 (int ,char*) ;
 int FUNC_5 (int *,int ,int ,int,int,int ,int ,int ) ;
 int FUNC_6 (int *,int ,struct xae_softc*,int *) ;

__attribute__((used)) static int
FUNC_7(struct xae_softc *VAR_8)
{
 device_t VAR_9;
 vmem_t *VAR_10;
 int VAR_11;

 VAR_9 = VAR_8->dev;


 VAR_8->xdma_tx = FUNC_4(VAR_8->dev, "tx");
 if (VAR_8->xdma_tx == ((void*)0)) {
  FUNC_0(VAR_9, "Could not find DMA controller.\n");
  return (VAR_2);
 }

 VAR_8->xdma_rx = FUNC_4(VAR_8->dev, "rx");
 if (VAR_8->xdma_rx == ((void*)0)) {
  FUNC_0(VAR_9, "Could not find DMA controller.\n");
  return (VAR_2);
 }


 VAR_8->xchan_tx = FUNC_2(VAR_8->xdma_tx, 0);
 if (VAR_8->xchan_tx == ((void*)0)) {
  FUNC_0(VAR_9, "Can't alloc virtual DMA TX channel.\n");
  return (VAR_2);
 }


 VAR_11 = FUNC_6(VAR_8->xchan_tx,
     VAR_7, VAR_8, &VAR_8->ih_tx);
 if (VAR_11) {
  FUNC_0(VAR_8->dev,
      "Can't setup xDMA TX interrupt handler.\n");
  return (VAR_2);
 }


 VAR_8->xchan_rx = FUNC_2(VAR_8->xdma_rx, 0);
 if (VAR_8->xchan_rx == ((void*)0)) {
  FUNC_0(VAR_9, "Can't alloc virtual DMA RX channel.\n");
  return (VAR_2);
 }


 VAR_11 = FUNC_6(VAR_8->xchan_rx,
     VAR_6, VAR_8, &VAR_8->ih_rx);
 if (VAR_11) {
  FUNC_0(VAR_8->dev,
      "Can't setup xDMA RX interrupt handler.\n");
  return (VAR_2);
 }


 VAR_10 = FUNC_3(VAR_9);
 if (VAR_10) {
  FUNC_1(VAR_8->xchan_tx, VAR_10);
  FUNC_1(VAR_8->xchan_rx, VAR_10);
 }

 FUNC_5(VAR_8->xchan_tx,
     VAR_5,
     VAR_3,
     8,
     16,
     0,
     VAR_1,
     VAR_0);

 FUNC_5(VAR_8->xchan_rx,
     VAR_4,
     VAR_3,
     1,
     16,
     0,
     VAR_1,
     VAR_0);

 return (0);
}
