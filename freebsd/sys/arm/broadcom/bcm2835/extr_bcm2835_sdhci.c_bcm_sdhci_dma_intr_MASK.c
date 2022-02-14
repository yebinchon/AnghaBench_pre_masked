
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct sdhci_slot {int offset; int intmask; int mtx; int bus; TYPE_2__* curcmd; } ;
struct bcm_sdhci_softc {scalar_t__ dmamap_seg_index; scalar_t__ dmamap_seg_count; scalar_t__ dmamap_status; int sc_dma_map; int sc_dma_tag; int sc_dev; struct sdhci_slot sc_slot; } ;
struct TYPE_4__ {int error; TYPE_1__* data; } ;
struct TYPE_3__ {int flags; int len; scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,struct sdhci_slot*,int ) ;
 int FUNC_1 (struct bcm_sdhci_softc*) ;
 int FUNC_2 (int ,struct sdhci_slot*,int ,int) ;
 scalar_t__ FUNC_3 (int ,int ,int *,int,int ,struct bcm_sdhci_softc*,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct sdhci_slot*) ;

__attribute__((used)) static void
FUNC_11(int VAR_12, void *VAR_13)
{
 struct bcm_sdhci_softc *VAR_14 = (struct bcm_sdhci_softc *)VAR_13;
 struct sdhci_slot *VAR_15 = &VAR_14->sc_slot;
 uint32_t VAR_16, VAR_17;
 int VAR_18, VAR_19;

 FUNC_8(&VAR_15->mtx);

 if (VAR_15->curcmd == ((void*)0)) {
  FUNC_9(&VAR_15->mtx);
  FUNC_6(VAR_14->sc_dev,
      "command aborted in the middle of DMA\n");
  return;
 }






 if (VAR_14->dmamap_seg_index < VAR_14->dmamap_seg_count) {
  FUNC_1(VAR_14);
  FUNC_9(&VAR_15->mtx);
  return;
 }

 if (VAR_15->curcmd->data->flags & VAR_4) {
  VAR_19 = VAR_1;
  VAR_17 = VAR_6;
 } else {
  VAR_19 = VAR_2;
  VAR_17 = VAR_8;
 }
 FUNC_4(VAR_14->sc_dma_tag, VAR_14->sc_dma_map, VAR_19);
 FUNC_5(VAR_14->sc_dma_tag, VAR_14->sc_dma_map);

 VAR_14->dmamap_seg_count = 0;
 VAR_14->dmamap_seg_index = 0;

 VAR_18 = FUNC_7(VAR_0,
     VAR_15->curcmd->data->len - VAR_15->offset);







 if (VAR_18 < VAR_0) {

  VAR_15->intmask |= VAR_6 | VAR_8 |
      VAR_7;
  FUNC_2(VAR_15->bus, VAR_15, VAR_10,
      VAR_15->intmask);
  FUNC_9(&VAR_15->mtx);
  return;
 }


 VAR_16 = FUNC_0(VAR_15->bus, VAR_15, VAR_9);

 if (VAR_16 & VAR_7) {

  FUNC_2(VAR_15->bus, VAR_15, VAR_9, VAR_16);


  VAR_15->intmask |= VAR_6 | VAR_8
      | VAR_7;
  FUNC_2(VAR_15->bus, VAR_15, VAR_10,
      VAR_15->intmask);


  FUNC_10(VAR_15);
 }
 else {

  if (VAR_16 & VAR_17) {


   FUNC_2(VAR_15->bus, VAR_15,
       VAR_9, VAR_17);


   if (FUNC_3(VAR_14->sc_dma_tag, VAR_14->sc_dma_map,
       (uint8_t *)VAR_15->curcmd->data->data +
       VAR_15->offset, VAR_18, VAR_11, VAR_14,
       VAR_3) != 0 || VAR_14->dmamap_status != 0) {
    VAR_15->curcmd->error = VAR_5;
    FUNC_10(VAR_15);
   } else {
    FUNC_1(VAR_14);
   }
  } else {



   VAR_15->intmask |= VAR_6 |
       VAR_8 | VAR_7;
   FUNC_2(VAR_15->bus, VAR_15, VAR_10,
       VAR_15->intmask);
  }
 }

 FUNC_9(&VAR_15->mtx);
}
