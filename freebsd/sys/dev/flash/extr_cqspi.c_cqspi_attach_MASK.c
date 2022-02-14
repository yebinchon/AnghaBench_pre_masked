
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {struct cqspi_softc* ich_arg; int ich_func; } ;
struct cqspi_softc {TYPE_1__ config_intrhook; int * xchan_rx; int * xchan_tx; int dev; int ih_rx; int ih_tx; int * xdma_rx; int * xdma_tx; int ih; int * res; int sram_phys; int bsh; int bst; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cqspi_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;
 scalar_t__ FUNC_2 (int ,int ,int,int *,int ,struct cqspi_softc*,int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int VAR_8 ;
 int FUNC_4 (struct cqspi_softc*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct cqspi_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 void* FUNC_10 (int *,scalar_t__) ;
 void* FUNC_11 (int ,char*) ;
 int FUNC_12 (int *,int ,int ,int,int,int ,int ,int ) ;
 int FUNC_13 (int *,int ,struct cqspi_softc*,int *) ;

__attribute__((used)) static int
FUNC_14(device_t VAR_13)
{
 struct cqspi_softc *VAR_14;
 uint32_t VAR_15;
 int VAR_16;

 VAR_14 = FUNC_5(VAR_13);
 VAR_14->dev = VAR_13;

 if (FUNC_1(VAR_13, VAR_10, VAR_14->res)) {
  FUNC_6(VAR_13, "could not allocate resources\n");
  return (VAR_3);
 }


 VAR_14->bst = FUNC_8(VAR_14->res[0]);
 VAR_14->bsh = FUNC_7(VAR_14->res[0]);

 VAR_14->sram_phys = FUNC_9(VAR_14->res[1]);


 if (FUNC_2(VAR_14->dev, VAR_14->res[2], VAR_5 | VAR_4,
     ((void*)0), VAR_9, VAR_14, &VAR_14->ih)) {
  FUNC_6(VAR_14->dev, "Unable to setup intr\n");
  return (VAR_3);
 }

 FUNC_0(VAR_14);

 VAR_15 = 0;


 VAR_14->xdma_tx = FUNC_11(VAR_14->dev, "tx");
 if (VAR_14->xdma_tx == ((void*)0)) {
  FUNC_6(VAR_13, "Can't find DMA controller.\n");
  return (VAR_3);
 }

 VAR_14->xdma_rx = FUNC_11(VAR_14->dev, "rx");
 if (VAR_14->xdma_rx == ((void*)0)) {
  FUNC_6(VAR_13, "Can't find DMA controller.\n");
  return (VAR_3);
 }


 VAR_14->xchan_tx = FUNC_10(VAR_14->xdma_tx, VAR_15);
 if (VAR_14->xchan_tx == ((void*)0)) {
  FUNC_6(VAR_13, "Can't alloc virtual DMA channel.\n");
  return (VAR_3);
 }

 VAR_14->xchan_rx = FUNC_10(VAR_14->xdma_rx, VAR_15);
 if (VAR_14->xchan_rx == ((void*)0)) {
  FUNC_6(VAR_13, "Can't alloc virtual DMA channel.\n");
  return (VAR_3);
 }


 VAR_16 = FUNC_13(VAR_14->xchan_tx, VAR_12,
     VAR_14, &VAR_14->ih_tx);
 if (VAR_16) {
  FUNC_6(VAR_14->dev,
      "Can't setup xDMA interrupt handler.\n");
  return (VAR_3);
 }

 VAR_16 = FUNC_13(VAR_14->xchan_rx, VAR_11,
     VAR_14, &VAR_14->ih_rx);
 if (VAR_16) {
  FUNC_6(VAR_14->dev,
      "Can't setup xDMA interrupt handler.\n");
  return (VAR_3);
 }

 FUNC_12(VAR_14->xchan_tx, VAR_7, VAR_6, 8, 16, 0,
     VAR_1, VAR_0);
 FUNC_12(VAR_14->xchan_rx, VAR_7, VAR_6, 8, 16, 0,
     VAR_1, VAR_0);

 FUNC_4(VAR_14);

 VAR_14->config_intrhook.ich_func = VAR_8;
 VAR_14->config_intrhook.ich_arg = VAR_14;
 if (FUNC_3(&VAR_14->config_intrhook) != 0) {
  FUNC_6(VAR_13, "config_intrhook_establish failed\n");
  return (VAR_2);
 }

 return (0);
}
