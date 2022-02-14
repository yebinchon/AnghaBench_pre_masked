
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cgem_tx_desc {int dummy; } ;
struct cgem_softc {scalar_t__ txring_queued; scalar_t__ txring_tl_ptr; scalar_t__ txring_hd_ptr; TYPE_2__* txring; int ** txring_m_dmamap; int ** txring_m; int txring_physaddr; int txring_dma_map; int desc_dma_tag; scalar_t__ rxring_queued; scalar_t__ rxring_tl_ptr; scalar_t__ rxring_hd_ptr; TYPE_1__* rxring; int ** rxring_m_dmamap; int ** rxring_m; int rxring_physaddr; int rxring_dma_map; int mbuf_dma_tag; int sc_mtx; int dev; } ;
struct cgem_rx_desc {int dummy; } ;
struct TYPE_4__ {int ctl; scalar_t__ addr; } ;
struct TYPE_3__ {int addr; scalar_t__ ctl; } ;


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
 int FUNC_0 (int ,int,int ,int ,int ,int *,int *,int ,int,int ,int ,int ,int *,int *) ;
 int FUNC_1 (int ,int ,void*,int,int ,int *,int) ;
 int FUNC_2 (int ,void**,int,int *) ;
 int FUNC_3 (int ) ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static int
FUNC_4(struct cgem_softc *VAR_15)
{
 int VAR_16, VAR_17;

 VAR_15->txring = ((void*)0);
 VAR_15->rxring = ((void*)0);



 VAR_17 = FUNC_0(FUNC_3(VAR_15->dev), 1, 0,
     VAR_3,
     VAR_2,
     ((void*)0), ((void*)0),
     VAR_10,
     1,
     VAR_10,
     0,
     VAR_13,
     &VAR_15->sc_mtx,
     &VAR_15->desc_dma_tag);
 if (VAR_17)
  return (VAR_17);


 VAR_17 = FUNC_0(FUNC_3(VAR_15->dev), 1, 0,
     VAR_3,
     VAR_2,
     ((void*)0), ((void*)0),
     VAR_11,
     VAR_12,
     VAR_11,
     0,
     VAR_13,
     &VAR_15->sc_mtx,
     &VAR_15->mbuf_dma_tag);
 if (VAR_17)
  return (VAR_17);


 VAR_17 = FUNC_2(VAR_15->desc_dma_tag,
          (void **)&VAR_15->rxring,
          VAR_1 | VAR_0,
          &VAR_15->rxring_dma_map);
 if (VAR_17)
  return (VAR_17);


 VAR_17 = FUNC_1(VAR_15->desc_dma_tag, VAR_15->rxring_dma_map,
         (void *)VAR_15->rxring,
         VAR_4*sizeof(struct cgem_rx_desc),
         VAR_14, &VAR_15->rxring_physaddr,
         VAR_1);
 if (VAR_17)
  return (VAR_17);


 for (VAR_16 = 0; VAR_16 < VAR_4; VAR_16++) {
  VAR_15->rxring[VAR_16].addr = VAR_6;
  VAR_15->rxring[VAR_16].ctl = 0;
  VAR_15->rxring_m[VAR_16] = ((void*)0);
  VAR_15->rxring_m_dmamap[VAR_16] = ((void*)0);
 }
 VAR_15->rxring[VAR_4 - 1].addr |= VAR_7;

 VAR_15->rxring_hd_ptr = 0;
 VAR_15->rxring_tl_ptr = 0;
 VAR_15->rxring_queued = 0;


 VAR_17 = FUNC_2(VAR_15->desc_dma_tag,
          (void **)&VAR_15->txring,
          VAR_1 | VAR_0,
          &VAR_15->txring_dma_map);
 if (VAR_17)
  return (VAR_17);


 VAR_17 = FUNC_1(VAR_15->desc_dma_tag, VAR_15->txring_dma_map,
         (void *)VAR_15->txring,
         VAR_5*sizeof(struct cgem_tx_desc),
         VAR_14, &VAR_15->txring_physaddr,
         VAR_1);
 if (VAR_17)
  return (VAR_17);


 for (VAR_16 = 0; VAR_16 < VAR_5; VAR_16++) {
  VAR_15->txring[VAR_16].addr = 0;
  VAR_15->txring[VAR_16].ctl = VAR_8;
  VAR_15->txring_m[VAR_16] = ((void*)0);
  VAR_15->txring_m_dmamap[VAR_16] = ((void*)0);
 }
 VAR_15->txring[VAR_5 - 1].ctl |= VAR_9;

 VAR_15->txring_hd_ptr = 0;
 VAR_15->txring_tl_ptr = 0;
 VAR_15->txring_queued = 0;

 return (0);
}
