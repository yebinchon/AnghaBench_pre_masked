
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_int ;
struct TYPE_5__ {int caps; int quirks; int opt; } ;
struct bcm_sdhci_softc {scalar_t__ sc_dma_ch; void* sc_mem_res; void* sc_irq_res; scalar_t__ sc_intrhand; TYPE_1__ sc_slot; void* cmd_and_mode; void* blksz_and_count; scalar_t__ sc_sdhci_buffer_phys; int sc_dma_map; int sc_dma_tag; struct bcm_mmc_conf* conf; int sc_bsh; int sc_bst; int * clkman; int sc_dev; int * sc_req; } ;
struct bcm_mmc_conf {int default_freq; scalar_t__ clock_src; scalar_t__ use_dma; int quirks; int clock_id; } ;
typedef int phandle_t ;
typedef int pcell_t ;
typedef int device_t ;
typedef int cell ;
struct TYPE_6__ {scalar_t__ ocd_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_0 (int ,char*,int*,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 void* FUNC_1 (int ,TYPE_1__*,int ) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_2 (int *,scalar_t__,int) ;
 int FUNC_3 (int ,int*) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (scalar_t__,int ,struct bcm_sdhci_softc*) ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;
 void* FUNC_7 (int ,int ,int*,int) ;
 int FUNC_8 (int ,int,int ,int ,int ,int *,int *,int ,int ,int ,int ,int *,int *,int *) ;
 int FUNC_9 (int ,int ,int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ,int ,void*) ;
 scalar_t__ FUNC_14 (int ,void*,int,int *,int ,struct bcm_sdhci_softc*,scalar_t__*) ;
 int FUNC_15 (int ,void*,scalar_t__) ;
 int VAR_30 ;
 int FUNC_16 (char*) ;
 int * FUNC_17 (int ,int ) ;
 struct bcm_sdhci_softc* FUNC_18 (int ) ;
 int FUNC_19 (int ,char*,...) ;
 int FUNC_20 (int ) ;
 TYPE_3__* FUNC_21 (int ,int ) ;
 int FUNC_22 (void*) ;
 int FUNC_23 (void*) ;
 scalar_t__ FUNC_24 (void*) ;
 int FUNC_25 (int ,TYPE_1__*,int ) ;
 int FUNC_26 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_27(device_t VAR_31)
{
 struct bcm_sdhci_softc *VAR_32 = FUNC_18(VAR_31);
 int VAR_33, VAR_34;
 phandle_t VAR_35;
 pcell_t VAR_36;
 u_int VAR_37;

 VAR_32->sc_dev = VAR_31;
 VAR_32->sc_req = ((void*)0);

 VAR_32->conf = (struct bcm_mmc_conf *)FUNC_21(VAR_31,
     VAR_30)->ocd_data;
 if (VAR_32->conf == 0)
     return (VAR_8);

 VAR_34 = FUNC_4(VAR_0, VAR_24);
 if (VAR_34 != 0) {
  if (VAR_29)
   FUNC_19(VAR_31, "Unable to enable the power\n");
  return (VAR_34);
 }

 VAR_37 = 0;
 VAR_34 = FUNC_3(VAR_32->conf->clock_id, &VAR_37);
 if (VAR_34 == 0) {

  VAR_37 /= 1000000;
 }
 if (VAR_37 == 0) {
  VAR_35 = FUNC_20(VAR_32->sc_dev);
  if ((FUNC_0(VAR_35, "clock-frequency", &VAR_36,
      sizeof(VAR_36))) > 0)
   VAR_37 = VAR_36 / 1000000;
 }
 if (VAR_37 == 0)
  VAR_37 = VAR_32->conf->default_freq;

 if (VAR_29)
  FUNC_19(VAR_31, "SDHCI frequency: %dMHz\n", VAR_37);
 VAR_33 = 0;
 VAR_32->sc_mem_res = FUNC_7(VAR_31, VAR_23, &VAR_33,
     VAR_12);
 if (!VAR_32->sc_mem_res) {
  FUNC_19(VAR_31, "cannot allocate memory window\n");
  VAR_34 = VAR_8;
  goto fail;
 }

 VAR_32->sc_bst = FUNC_23(VAR_32->sc_mem_res);
 VAR_32->sc_bsh = FUNC_22(VAR_32->sc_mem_res);

 VAR_33 = 0;
 VAR_32->sc_irq_res = FUNC_7(VAR_31, VAR_22, &VAR_33,
     VAR_12 | VAR_13);
 if (!VAR_32->sc_irq_res) {
  FUNC_19(VAR_31, "cannot allocate interrupt\n");
  VAR_34 = VAR_8;
  goto fail;
 }

 if (FUNC_14(VAR_31, VAR_32->sc_irq_res, VAR_10 | VAR_9,
     ((void*)0), VAR_28, VAR_32, &VAR_32->sc_intrhand)) {
  FUNC_19(VAR_31, "cannot setup interrupt handler\n");
  VAR_34 = VAR_8;
  goto fail;
 }

 if (!VAR_26)
  VAR_32->sc_slot.opt = VAR_20;

 VAR_32->sc_slot.caps = VAR_18 | VAR_17;
 if (VAR_25)
  VAR_32->sc_slot.caps |= VAR_16;
 VAR_32->sc_slot.caps |= (VAR_37 << VAR_19);
 VAR_32->sc_slot.quirks = VAR_32->conf->quirks;

 FUNC_25(VAR_31, &VAR_32->sc_slot, 0);

 if (VAR_32->conf->use_dma) {
  VAR_32->sc_dma_ch = FUNC_5(VAR_1);
  if (VAR_32->sc_dma_ch == VAR_2)
   goto fail;

  if (FUNC_6(VAR_32->sc_dma_ch, VAR_27, VAR_32) != 0) {
   FUNC_19(VAR_31, "cannot setup dma interrupt handler\n");
   VAR_34 = VAR_8;
   goto fail;
  }


  VAR_34 = FUNC_8(FUNC_12(VAR_31),
      1, 0, VAR_6,
      VAR_5, ((void*)0), ((void*)0),
      VAR_3, VAR_11, VAR_3,
      VAR_4, ((void*)0), ((void*)0),
      &VAR_32->sc_dma_tag);

  if (VAR_34) {
   FUNC_19(VAR_31, "failed allocate DMA tag");
   goto fail;
  }

  VAR_34 = FUNC_9(VAR_32->sc_dma_tag, 0, &VAR_32->sc_dma_map);
  if (VAR_34) {
   FUNC_19(VAR_31, "bus_dmamap_create failed\n");
   goto fail;
  }
 }


 VAR_32->sc_sdhci_buffer_phys = FUNC_24(VAR_32->sc_mem_res) +
     VAR_15;

 FUNC_11(VAR_31);
 FUNC_10(VAR_31);

 FUNC_26(&VAR_32->sc_slot);


 VAR_32->blksz_and_count = FUNC_1(VAR_31, &VAR_32->sc_slot, VAR_14);
 VAR_32->cmd_and_mode = FUNC_1(VAR_31, &VAR_32->sc_slot, VAR_21);

 return (0);

fail:
 if (VAR_32->sc_intrhand)
  FUNC_15(VAR_31, VAR_32->sc_irq_res, VAR_32->sc_intrhand);
 if (VAR_32->sc_irq_res)
  FUNC_13(VAR_31, VAR_22, 0, VAR_32->sc_irq_res);
 if (VAR_32->sc_mem_res)
  FUNC_13(VAR_31, VAR_23, 0, VAR_32->sc_mem_res);

 return (VAR_34);
}
