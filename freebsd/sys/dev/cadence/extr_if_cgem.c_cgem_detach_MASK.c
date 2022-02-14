
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgem_softc {scalar_t__ rxring_physaddr; scalar_t__ txring_physaddr; int * mbuf_dma_tag; int * desc_dma_tag; int ** txring_m_dmamap; int * txring; int txring_dma_map; int ** rxring_m_dmamap; int * rxring; int rxring_dma_map; int * irq_res; scalar_t__ intrhand; int * mem_res; int * miibus; int ifp; int tick_ch; } ;
typedef int device_t ;


 int FUNC_0 (struct cgem_softc*) ;
 int FUNC_1 (struct cgem_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct cgem_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ,int *) ;
 int FUNC_9 (int ,int *,scalar_t__) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct cgem_softc*) ;
 int FUNC_12 (int ,int *) ;
 struct cgem_softc* FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int ,int ) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int
FUNC_18(device_t VAR_6)
{
 struct cgem_softc *VAR_7 = FUNC_13(VAR_6);
 int VAR_8;

 if (VAR_7 == ((void*)0))
  return (VAR_2);

 if (FUNC_14(VAR_6)) {
  FUNC_0(VAR_7);
  FUNC_11(VAR_7);
  FUNC_2(VAR_7);
  FUNC_10(&VAR_7->tick_ch);
  FUNC_16(VAR_7->ifp, 0, VAR_3);
  FUNC_15(VAR_7->ifp);
 }

 if (VAR_7->miibus != ((void*)0)) {
  FUNC_12(VAR_6, VAR_7->miibus);
  VAR_7->miibus = ((void*)0);
 }


 if (VAR_7->mem_res != ((void*)0)) {
  FUNC_8(VAR_6, VAR_5,
         FUNC_17(VAR_7->mem_res), VAR_7->mem_res);
  VAR_7->mem_res = ((void*)0);
 }
 if (VAR_7->irq_res != ((void*)0)) {
  if (VAR_7->intrhand)
   FUNC_9(VAR_6, VAR_7->irq_res, VAR_7->intrhand);
  FUNC_8(VAR_6, VAR_4,
         FUNC_17(VAR_7->irq_res), VAR_7->irq_res);
  VAR_7->irq_res = ((void*)0);
 }


 if (VAR_7->rxring != ((void*)0)) {
  if (VAR_7->rxring_physaddr != 0) {
   FUNC_5(VAR_7->desc_dma_tag,
       VAR_7->rxring_dma_map);
   VAR_7->rxring_physaddr = 0;
  }
  FUNC_6(VAR_7->desc_dma_tag, VAR_7->rxring,
    VAR_7->rxring_dma_map);
  VAR_7->rxring = ((void*)0);
  for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
   if (VAR_7->rxring_m_dmamap[VAR_8] != ((void*)0)) {
    FUNC_4(VAR_7->mbuf_dma_tag,
         VAR_7->rxring_m_dmamap[VAR_8]);
    VAR_7->rxring_m_dmamap[VAR_8] = ((void*)0);
   }
 }
 if (VAR_7->txring != ((void*)0)) {
  if (VAR_7->txring_physaddr != 0) {
   FUNC_5(VAR_7->desc_dma_tag,
       VAR_7->txring_dma_map);
   VAR_7->txring_physaddr = 0;
  }
  FUNC_6(VAR_7->desc_dma_tag, VAR_7->txring,
    VAR_7->txring_dma_map);
  VAR_7->txring = ((void*)0);
  for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
   if (VAR_7->txring_m_dmamap[VAR_8] != ((void*)0)) {
    FUNC_4(VAR_7->mbuf_dma_tag,
         VAR_7->txring_m_dmamap[VAR_8]);
    VAR_7->txring_m_dmamap[VAR_8] = ((void*)0);
   }
 }
 if (VAR_7->desc_dma_tag != ((void*)0)) {
  FUNC_3(VAR_7->desc_dma_tag);
  VAR_7->desc_dma_tag = ((void*)0);
 }
 if (VAR_7->mbuf_dma_tag != ((void*)0)) {
  FUNC_3(VAR_7->mbuf_dma_tag);
  VAR_7->mbuf_dma_tag = ((void*)0);
 }

 FUNC_7(VAR_6);

 FUNC_1(VAR_7);

 return (0);
}
