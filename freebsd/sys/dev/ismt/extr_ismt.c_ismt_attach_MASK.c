
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ismt_softc {int mmio_rid; int desc_bus_addr; int dma_buffer_bus_addr; int using_msi; int intr_rid; int intr_handle; int * intr_res; int * mmio_res; int dma_buffer; int dma_buffer_dma_map; int dma_buffer_dma_tag; int desc; int desc_dma_map; int desc_dma_tag; int mmio_handle; int mmio_tag; int * smbdev; int pcidev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 void* FUNC_2 (int ,int ,int*,int) ;
 int FUNC_3 (int ,int,int ,int ,int ,int *,int *,int ,int,int ,int ,int *,int *,int *) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ,int ,int ,int ,int ,int*,int ) ;
 int FUNC_6 (int ,void**,int ,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,scalar_t__) ;
 int FUNC_10 (int ,int *,int,int *,int ,struct ismt_softc*,int *) ;
 int FUNC_11 (int *,scalar_t__,int) ;
 int * FUNC_12 (int ,char*,int) ;
 struct ismt_softc* FUNC_13 (int ) ;
 int FUNC_14 (int ,char*,...) ;
 int FUNC_15 (int ) ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ FUNC_16 (int ,int*) ;
 int FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;

__attribute__((used)) static int
FUNC_22(device_t VAR_22)
{
 struct ismt_softc *VAR_23 = FUNC_13(VAR_22);
 int VAR_24, VAR_25, VAR_26;

 VAR_23->pcidev = VAR_22;
 FUNC_17(VAR_22);

 if ((VAR_23->smbdev = FUNC_12(VAR_22, "smbus", -1)) == ((void*)0)) {
  FUNC_14(VAR_22, "no smbus child found\n");
  VAR_24 = VAR_5;
  goto fail;
 }

 VAR_23->mmio_rid = FUNC_1(0);
 VAR_23->mmio_res = FUNC_2(VAR_22, VAR_19,
     &VAR_23->mmio_rid, VAR_16);
 if (VAR_23->mmio_res == ((void*)0)) {
  FUNC_14(VAR_22, "cannot allocate mmio region\n");
  VAR_24 = VAR_4;
  goto fail;
 }

 VAR_23->mmio_tag = FUNC_21(VAR_23->mmio_res);
 VAR_23->mmio_handle = FUNC_20(VAR_23->mmio_res);


 if ((VAR_24 = FUNC_7(VAR_22)) != 0) {
  FUNC_14(VAR_22, "failed to attach child: %d\n", VAR_24);
  VAR_24 = VAR_5;
  goto fail;
 }

 FUNC_3(FUNC_8(VAR_22), 4, VAR_15,
     VAR_1, VAR_1, ((void*)0), ((void*)0),
     VAR_2, 1, VAR_2,
     0, ((void*)0), ((void*)0), &VAR_23->desc_dma_tag);

 FUNC_3(FUNC_8(VAR_22), 4, VAR_15,
     VAR_1, VAR_1, ((void*)0), ((void*)0),
     VAR_3, 1, VAR_3,
     0, ((void*)0), ((void*)0), &VAR_23->dma_buffer_dma_tag);

 FUNC_4(VAR_23->desc_dma_tag, 0,
     &VAR_23->desc_dma_map);
 FUNC_4(VAR_23->dma_buffer_dma_tag, 0,
     &VAR_23->dma_buffer_dma_map);

 FUNC_6(VAR_23->desc_dma_tag,
     (void **)&VAR_23->desc, VAR_0,
     &VAR_23->desc_dma_map);
 FUNC_6(VAR_23->dma_buffer_dma_tag,
     (void **)&VAR_23->dma_buffer, VAR_0,
     &VAR_23->dma_buffer_dma_map);

 FUNC_5(VAR_23->desc_dma_tag,
     VAR_23->desc_dma_map, VAR_23->desc, VAR_2,
     VAR_21, &VAR_23->desc_bus_addr, 0);
 FUNC_5(VAR_23->dma_buffer_dma_tag,
     VAR_23->dma_buffer_dma_map, VAR_23->dma_buffer, VAR_3,
     VAR_21, &VAR_23->dma_buffer_bus_addr, 0);

 FUNC_11(VAR_23->mmio_res, VAR_12,
     (VAR_23->desc_bus_addr & 0xFFFFFFFFLL));
 FUNC_11(VAR_23->mmio_res, VAR_12 + 4,
     (VAR_23->desc_bus_addr >> 32));


 FUNC_11(VAR_23->mmio_res, VAR_11, VAR_9);


 FUNC_11(VAR_23->mmio_res, VAR_14, 0);


 VAR_26 = FUNC_9(VAR_23->mmio_res, VAR_13);
 VAR_26 &= ~VAR_10;
 VAR_26 |= (VAR_8 - 1);
 FUNC_11(VAR_23->mmio_res, VAR_13, VAR_26);

 VAR_23->using_msi = 1;

 if (FUNC_18(VAR_22) == 0) {
  VAR_23->using_msi = 0;
  goto intx;
 }

 VAR_25 = 1;
 if (FUNC_16(VAR_22, &VAR_25) != 0) {
  VAR_23->using_msi = 0;
  goto intx;
 }

 VAR_23->intr_rid = 1;
 VAR_23->intr_res = FUNC_2(VAR_22, VAR_18,
     &VAR_23->intr_rid, VAR_16);

 if (VAR_23->intr_res == ((void*)0)) {
  VAR_23->using_msi = 0;
  FUNC_19(VAR_22);
 }

intx:
 if (VAR_23->using_msi == 0) {
  VAR_23->intr_rid = 0;
  VAR_23->intr_res = FUNC_2(VAR_22, VAR_18,
      &VAR_23->intr_rid, VAR_17 | VAR_16);
  if (VAR_23->intr_res == ((void*)0)) {
   FUNC_14(VAR_22, "cannot allocate irq\n");
   VAR_24 = VAR_5;
   goto fail;
  }
 }

 FUNC_0(VAR_22, "using_msi = %d\n", VAR_23->using_msi);

 VAR_24 = FUNC_10(VAR_22, VAR_23->intr_res,
     VAR_7 | VAR_6, ((void*)0), VAR_20, VAR_23,
     &VAR_23->intr_handle);
 if (VAR_24 != 0) {
  FUNC_14(VAR_22, "cannot setup interrupt\n");
  VAR_24 = VAR_5;
  goto fail;
 }

 return (0);

fail:
 FUNC_15(VAR_22);
 return (VAR_24);
}
