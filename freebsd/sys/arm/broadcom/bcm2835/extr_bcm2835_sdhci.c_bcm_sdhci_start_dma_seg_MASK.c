
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_paddr_t ;
struct sdhci_slot {int offset; int intmask; TYPE_2__* curcmd; } ;
struct bcm_sdhci_softc {int* dmamap_seg_sizes; int sc_dma_ch; struct sdhci_slot sc_slot; int sc_dev; int sc_dma_map; int sc_dma_tag; int sc_sdhci_buffer_phys; int * dmamap_seg_addrs; int dmamap_seg_index; } ;
struct TYPE_4__ {TYPE_1__* data; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int,char*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (int ,struct sdhci_slot*,int ,int) ;
 int FUNC_5 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_6(struct bcm_sdhci_softc *VAR_13)
{
 struct sdhci_slot *VAR_14;
 vm_paddr_t VAR_15, VAR_16;
 int VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;

 VAR_14 = &VAR_13->sc_slot;
 VAR_18 = VAR_13->dmamap_seg_index++;
 VAR_19 = VAR_13->dmamap_seg_sizes[VAR_18];
 VAR_14->offset += VAR_19;
 VAR_21 = (VAR_19 & 0xf ? VAR_1 : VAR_0);

 if (VAR_14->curcmd->data->flags & VAR_8) {
  FUNC_2(VAR_13->sc_dma_ch, VAR_2,
      VAR_5, VAR_1);
  FUNC_1(VAR_13->sc_dma_ch, VAR_3,
      VAR_4, VAR_21);
  VAR_16 = VAR_13->sc_sdhci_buffer_phys;
  VAR_15 = VAR_13->dmamap_seg_addrs[VAR_18];
  VAR_20 = VAR_6;
 } else {
  FUNC_2(VAR_13->sc_dma_ch, VAR_3,
      VAR_4, VAR_21);
  FUNC_1(VAR_13->sc_dma_ch, VAR_2,
      VAR_5, VAR_1);
  VAR_16 = VAR_13->dmamap_seg_addrs[VAR_18];
  VAR_15 = VAR_13->sc_sdhci_buffer_phys;
  VAR_20 = VAR_7;
 }






 if (VAR_18 == 0) {
  FUNC_5(VAR_13->sc_dma_tag, VAR_13->sc_dma_map, VAR_20);
  VAR_14->intmask &= ~(VAR_9 |
      VAR_11 | VAR_10);
  FUNC_4(VAR_13->sc_dev, &VAR_13->sc_slot, VAR_12,
      VAR_14->intmask);
 }





 VAR_17 = FUNC_3(VAR_13->sc_dma_ch, VAR_16, VAR_15, VAR_19);
 FUNC_0((VAR_17 == 0), ("bcm2835_sdhci: failed DMA start"));
}
