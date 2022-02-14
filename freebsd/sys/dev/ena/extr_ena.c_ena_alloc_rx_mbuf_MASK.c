
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uintmax_t ;
struct ena_com_buf {int len; scalar_t__ paddr; } ;
struct ena_rx_buffer {TYPE_4__* mbuf; struct ena_com_buf ena_buf; int map; } ;
struct TYPE_10__ {int dma_mapping_err; int mbuf_alloc_fail; int mjum_alloc_fail; } ;
struct ena_ring {TYPE_2__ rx_stats; } ;
struct ena_adapter {int rx_buf_tag; } ;
struct TYPE_11__ {scalar_t__ ds_addr; } ;
typedef TYPE_3__ bus_dma_segment_t ;
struct TYPE_9__ {int len; } ;
struct TYPE_12__ {int m_len; TYPE_1__ m_pkthdr; } ;


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
 int FUNC_0 (int ,int ,TYPE_4__*,TYPE_3__*,int*,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (TYPE_4__*) ;
 TYPE_4__* FUNC_5 (int ,int ,int ) ;
 TYPE_4__* FUNC_6 (int ,int ,int ,int) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static inline int
FUNC_8(struct ena_adapter *VAR_13,
    struct ena_ring *VAR_14, struct ena_rx_buffer *VAR_15)
{
 struct ena_com_buf *VAR_16;
 bus_dma_segment_t VAR_17[1];
 int VAR_18, VAR_19;
 int VAR_20;


 if (FUNC_7(VAR_15->mbuf != ((void*)0)))
  return (0);


 VAR_15->mbuf = FUNC_6(VAR_11, VAR_10, VAR_12, VAR_9);

 if (FUNC_7(VAR_15->mbuf == ((void*)0))) {
  FUNC_2(VAR_14->rx_stats.mjum_alloc_fail, 1);
  VAR_15->mbuf = FUNC_5(VAR_11, VAR_10, VAR_12);
  if (FUNC_7(VAR_15->mbuf == ((void*)0))) {
   FUNC_2(VAR_14->rx_stats.mbuf_alloc_fail, 1);
   return (VAR_7);
  }
  VAR_20 = VAR_8;
 } else {
  VAR_20 = VAR_9;
 }

 VAR_15->mbuf->m_pkthdr.len = VAR_15->mbuf->m_len = VAR_20;


 FUNC_3(VAR_3 | VAR_4 | VAR_5,
     "Using tag %p for buffers' DMA mapping, mbuf %p len: %d\n",
     VAR_13->rx_buf_tag,VAR_15->mbuf, VAR_15->mbuf->m_len);
 VAR_19 = FUNC_0(VAR_13->rx_buf_tag, VAR_15->map,
     VAR_15->mbuf, VAR_17, &VAR_18, VAR_1);
 if (FUNC_7((VAR_19 != 0) || (VAR_18 != 1))) {
  FUNC_3(VAR_6, "failed to map mbuf, error: %d, "
      "nsegs: %d\n", VAR_19, VAR_18);
  FUNC_2(VAR_14->rx_stats.dma_mapping_err, 1);
  goto exit;

 }

 FUNC_1(VAR_13->rx_buf_tag, VAR_15->map, VAR_0);

 VAR_16 = &VAR_15->ena_buf;
 VAR_16->paddr = VAR_17[0].ds_addr;
 VAR_16->len = VAR_20;

 FUNC_3(VAR_3 | VAR_4 | VAR_5,
     "ALLOC RX BUF: mbuf %p, rx_info %p, len %d, paddr %#jx\n",
     VAR_15->mbuf, VAR_15,VAR_16->len, (uintmax_t)VAR_16->paddr);

 return (0);

exit:
 FUNC_4(VAR_15->mbuf);
 VAR_15->mbuf = ((void*)0);
 return (VAR_2);
}
