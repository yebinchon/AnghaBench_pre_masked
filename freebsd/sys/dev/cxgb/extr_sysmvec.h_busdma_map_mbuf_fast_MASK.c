
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct mbuf {int m_len; } ;
typedef int bus_dmamap_t ;
typedef int bus_dma_tag_t ;
struct TYPE_4__ {int ds_len; int ds_addr; } ;
typedef TYPE_1__ bus_dma_segment_t ;


 int FUNC_0 (int ,int ,struct mbuf*,TYPE_1__*,int*,int ) ;
 int FUNC_1 (struct mbuf*,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;

__attribute__((used)) static __inline void
FUNC_3(bus_dma_tag_t VAR_1, bus_dmamap_t VAR_2,
    struct mbuf *VAR_3, bus_dma_segment_t *VAR_4)
{

 VAR_4->ds_addr = FUNC_2(FUNC_1(VAR_3, VAR_0));
 VAR_4->ds_len = VAR_3->m_len;





}
