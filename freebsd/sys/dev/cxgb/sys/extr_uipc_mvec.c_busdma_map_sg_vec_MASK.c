
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {struct mbuf* m_nextpkt; } ;
typedef int bus_dmamap_t ;
typedef int bus_dma_tag_t ;
typedef int bus_dma_segment_t ;


 int FUNC_0 (int ,int ,struct mbuf*,int *) ;

void
FUNC_1(bus_dma_tag_t VAR_0, bus_dmamap_t VAR_1,
    struct mbuf *VAR_2, bus_dma_segment_t *VAR_3, int *VAR_4)
{

 for (*VAR_4 = 0; VAR_2 != ((void*)0) ; VAR_3++, *VAR_4 += 1, VAR_2 = VAR_2->m_nextpkt)
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
}
