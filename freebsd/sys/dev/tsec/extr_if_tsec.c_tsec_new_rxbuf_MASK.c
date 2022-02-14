
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int ext_size; } ;
struct TYPE_5__ {int len; } ;
struct mbuf {TYPE_2__ m_ext; TYPE_1__ m_pkthdr; int m_len; } ;
typedef int bus_dmamap_t ;
typedef int bus_dma_tag_t ;
struct TYPE_7__ {int ds_addr; } ;
typedef TYPE_3__ bus_dma_segment_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ,struct mbuf*,TYPE_3__*,int*,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct mbuf*) ;
 struct mbuf* FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (char*,int,int) ;
 int FUNC_7 (char*,int) ;

__attribute__((used)) static int
FUNC_8(bus_dma_tag_t VAR_9, bus_dmamap_t VAR_10, struct mbuf **VAR_11,
    uint32_t *VAR_12)
{
 struct mbuf *VAR_13;
 bus_dma_segment_t VAR_14[1];
 int VAR_15, VAR_16;

 FUNC_0(VAR_11 != ((void*)0), ("NULL mbuf pointer!"));

 VAR_13 = FUNC_5(VAR_6, VAR_5, VAR_7, VAR_4);
 if (VAR_13 == ((void*)0))
  return (VAR_3);
 VAR_13->m_len = VAR_13->m_pkthdr.len = VAR_13->m_ext.ext_size;

 if (*VAR_11) {
  FUNC_2(VAR_9, VAR_10, VAR_0);
  FUNC_3(VAR_9, VAR_10);
 }

 VAR_15 = FUNC_1(VAR_9, VAR_10, VAR_13, VAR_14, &VAR_16,
     VAR_2);
 FUNC_0(VAR_16 == 1, ("Too many segments returned!"));
 if (VAR_16 != 1 || VAR_15)
  FUNC_6("tsec_new_rxbuf(): nsegs(%d), error(%d)", VAR_16, VAR_15);
 FUNC_2(VAR_9, VAR_10, VAR_1);

 (*VAR_11) = VAR_13;
 (*VAR_12) = VAR_14->ds_addr;
 return (0);
}
