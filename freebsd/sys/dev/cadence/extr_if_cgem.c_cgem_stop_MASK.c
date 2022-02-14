
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cgem_softc {scalar_t__ mii_media_active; scalar_t__ rxring_queued; scalar_t__ rxring_tl_ptr; scalar_t__ rxring_hd_ptr; TYPE_2__* rxring; int ** rxring_m; int ** rxring_m_dmamap; int mbuf_dma_tag; scalar_t__ txring_queued; scalar_t__ txring_tl_ptr; scalar_t__ txring_hd_ptr; TYPE_1__* txring; int ** txring_m; int ** txring_m_dmamap; int tick_ch; } ;
struct TYPE_4__ {int addr; scalar_t__ ctl; } ;
struct TYPE_3__ {int ctl; scalar_t__ addr; } ;


 int FUNC_0 (struct cgem_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct cgem_softc*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct cgem_softc *VAR_6)
{
 int VAR_7;

 FUNC_0(VAR_6);

 FUNC_3(&VAR_6->tick_ch);


 FUNC_4(VAR_6);


 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  VAR_6->txring[VAR_7].ctl = VAR_4;
  VAR_6->txring[VAR_7].addr = 0;
  if (VAR_6->txring_m[VAR_7]) {

   FUNC_2(VAR_6->mbuf_dma_tag,
       VAR_6->txring_m_dmamap[VAR_7]);
   FUNC_1(VAR_6->mbuf_dma_tag,
        VAR_6->txring_m_dmamap[VAR_7]);
   VAR_6->txring_m_dmamap[VAR_7] = ((void*)0);
   FUNC_5(VAR_6->txring_m[VAR_7]);
   VAR_6->txring_m[VAR_7] = ((void*)0);
  }
 }
 VAR_6->txring[VAR_1 - 1].ctl |= VAR_5;

 VAR_6->txring_hd_ptr = 0;
 VAR_6->txring_tl_ptr = 0;
 VAR_6->txring_queued = 0;


 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  VAR_6->rxring[VAR_7].addr = VAR_2;
  VAR_6->rxring[VAR_7].ctl = 0;
  if (VAR_6->rxring_m[VAR_7]) {

   FUNC_2(VAR_6->mbuf_dma_tag,
      VAR_6->rxring_m_dmamap[VAR_7]);
   FUNC_1(VAR_6->mbuf_dma_tag,
       VAR_6->rxring_m_dmamap[VAR_7]);
   VAR_6->rxring_m_dmamap[VAR_7] = ((void*)0);

   FUNC_5(VAR_6->rxring_m[VAR_7]);
   VAR_6->rxring_m[VAR_7] = ((void*)0);
  }
 }
 VAR_6->rxring[VAR_0 - 1].addr |= VAR_3;

 VAR_6->rxring_hd_ptr = 0;
 VAR_6->rxring_tl_ptr = 0;
 VAR_6->rxring_queued = 0;


 VAR_6->mii_media_active = 0;
}
