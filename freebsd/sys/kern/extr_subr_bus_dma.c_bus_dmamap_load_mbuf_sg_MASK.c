
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mbuf {int dummy; } ;
typedef int bus_dmamap_t ;
typedef int bus_dma_tag_t ;
typedef int bus_dma_segment_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int,int) ;
 int FUNC_1 (int ,int ,struct mbuf*,int *,int*,int) ;

int
FUNC_2(bus_dma_tag_t VAR_1, bus_dmamap_t VAR_2, struct mbuf *VAR_3,
    bus_dma_segment_t *VAR_4, int *VAR_5, int VAR_6)
{
 int VAR_7;

 VAR_6 |= VAR_0;
 *VAR_5 = -1;
 VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 ++*VAR_5;
 FUNC_0(VAR_1, VAR_2, VAR_4, *VAR_5, VAR_7);
 return (VAR_7);
}
