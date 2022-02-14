
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_slot {int quirks; scalar_t__ paddr; int dmatag; int dmamap; scalar_t__ dmamem; int sdma_bbufsz; int bus; int sdma_boundary; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int *,int *,int ,int,int ,int ,int *,int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,void*,int ,int ,scalar_t__*,int ) ;
 int FUNC_4 (int ,void**,int ,int *) ;
 int FUNC_5 (int ,scalar_t__,int ) ;
 int FUNC_6 (int ) ;
 int VAR_15 ;
 int FUNC_7 (struct sdhci_slot*,char*) ;

__attribute__((used)) static int
FUNC_8(struct sdhci_slot *VAR_16)
{
 int VAR_17;

 if (!(VAR_16->quirks & VAR_14)) {
  if (VAR_5 <= 1024 * 4)
   VAR_16->sdma_boundary = VAR_10;
  else if (VAR_5 <= 1024 * 8)
   VAR_16->sdma_boundary = VAR_13;
  else if (VAR_5 <= 1024 * 16)
   VAR_16->sdma_boundary = VAR_7;
  else if (VAR_5 <= 1024 * 32)
   VAR_16->sdma_boundary = VAR_9;
  else if (VAR_5 <= 1024 * 64)
   VAR_16->sdma_boundary = VAR_12;
  else if (VAR_5 <= 1024 * 128)
   VAR_16->sdma_boundary = VAR_6;
  else if (VAR_5 <= 1024 * 256)
   VAR_16->sdma_boundary = VAR_8;
  else
   VAR_16->sdma_boundary = VAR_11;
 }
 VAR_16->sdma_bbufsz = FUNC_0(VAR_16->sdma_boundary);
 VAR_17 = FUNC_1(FUNC_6(VAR_16->bus), VAR_16->sdma_bbufsz,
     0, VAR_3, VAR_2, ((void*)0), ((void*)0),
     VAR_16->sdma_bbufsz, 1, VAR_16->sdma_bbufsz, VAR_0,
     ((void*)0), ((void*)0), &VAR_16->dmatag);
 if (VAR_17 != 0) {
  FUNC_7(VAR_16, "Can't create DMA tag for SDMA\n");
  return (VAR_17);
 }

 VAR_17 = FUNC_4(VAR_16->dmatag, (void **)&VAR_16->dmamem,
     VAR_1, &VAR_16->dmamap);
 if (VAR_17 != 0) {
  FUNC_7(VAR_16, "Can't alloc DMA memory for SDMA\n");
  FUNC_2(VAR_16->dmatag);
  return (VAR_17);
 }

 VAR_17 = FUNC_3(VAR_16->dmatag, VAR_16->dmamap,
     (void *)VAR_16->dmamem, VAR_16->sdma_bbufsz, VAR_15,
     &VAR_16->paddr, 0);
 if (VAR_17 != 0 || VAR_16->paddr == 0) {
  FUNC_7(VAR_16, "Can't load DMA memory for SDMA\n");
  FUNC_5(VAR_16->dmatag, VAR_16->dmamem, VAR_16->dmamap);
  FUNC_2(VAR_16->dmatag);
  if (VAR_17)
   return (VAR_17);
  else
   return (VAR_4);
 }

 return (0);
}
