
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int rcvif; void* len; } ;
struct mbuf {TYPE_1__ m_pkthdr; void* m_len; } ;
struct cgem_softc {scalar_t__ rxring_queued; scalar_t__ rxbufs; size_t rxring_hd_ptr; TYPE_2__* rxring; int ** rxring_m_dmamap; int mbuf_dma_tag; struct mbuf** rxring_m; int rxdmamapfails; int ifp; } ;
struct TYPE_7__ {int ds_addr; } ;
typedef TYPE_3__ bus_dma_segment_t ;
struct TYPE_6__ {int addr; scalar_t__ ctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cgem_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int ,int ,int **) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *,struct mbuf*,TYPE_3__*,int*,int ) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (struct mbuf*) ;
 struct mbuf* FUNC_6 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_7(struct cgem_softc *VAR_9)
{
 struct mbuf *VAR_10 = ((void*)0);
 bus_dma_segment_t VAR_11[VAR_8];
 int VAR_12;

 FUNC_0(VAR_9);

 while (VAR_9->rxring_queued < VAR_9->rxbufs) {

  VAR_10 = FUNC_6(VAR_6, VAR_5, VAR_7);
  if (VAR_10 == ((void*)0))
   break;

  VAR_10->m_len = VAR_4;
  VAR_10->m_pkthdr.len = VAR_4;
  VAR_10->m_pkthdr.rcvif = VAR_9->ifp;


  if (FUNC_1(VAR_9->mbuf_dma_tag, 0,
         &VAR_9->rxring_m_dmamap[VAR_9->rxring_hd_ptr])) {
   VAR_9->rxdmamapfails++;
   FUNC_5(VAR_10);
   break;
  }
  if (FUNC_3(VAR_9->mbuf_dma_tag,
         VAR_9->rxring_m_dmamap[VAR_9->rxring_hd_ptr], VAR_10,
         VAR_11, &VAR_12, VAR_1)) {
   VAR_9->rxdmamapfails++;
   FUNC_2(VAR_9->mbuf_dma_tag,
       VAR_9->rxring_m_dmamap[VAR_9->rxring_hd_ptr]);
   VAR_9->rxring_m_dmamap[VAR_9->rxring_hd_ptr] = ((void*)0);
   FUNC_5(VAR_10);
   break;
  }
  VAR_9->rxring_m[VAR_9->rxring_hd_ptr] = VAR_10;


  FUNC_4(VAR_9->mbuf_dma_tag,
    VAR_9->rxring_m_dmamap[VAR_9->rxring_hd_ptr],
    VAR_0);


  VAR_9->rxring[VAR_9->rxring_hd_ptr].ctl = 0;
  if (VAR_9->rxring_hd_ptr == VAR_2 - 1) {
   VAR_9->rxring[VAR_9->rxring_hd_ptr].addr = VAR_11[0].ds_addr |
    VAR_3;
   VAR_9->rxring_hd_ptr = 0;
  } else
   VAR_9->rxring[VAR_9->rxring_hd_ptr++].addr = VAR_11[0].ds_addr;

  VAR_9->rxring_queued++;
 }
}
