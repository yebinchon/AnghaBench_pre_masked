
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_4__* shadow; int * lanai; TYPE_1__* info; int dmat; int alloc_fail; } ;
struct mxge_slice_state {TYPE_2__ rx_small; } ;
struct mbuf {int m_len; } ;
typedef TYPE_2__ mxge_rx_ring_t ;
typedef int bus_dmamap_t ;
struct TYPE_8__ {int ds_addr; } ;
typedef TYPE_3__ bus_dma_segment_t ;
struct TYPE_9__ {void* addr_high; void* addr_low; } ;
struct TYPE_6__ {struct mbuf* m; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,struct mbuf*,TYPE_3__*,int*,int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct mbuf*) ;
 struct mbuf* FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,TYPE_4__*) ;

__attribute__((used)) static int
FUNC_7(struct mxge_slice_state *VAR_5, bus_dmamap_t VAR_6, int VAR_7)
{
 bus_dma_segment_t VAR_8;
 struct mbuf *VAR_9;
 mxge_rx_ring_t *VAR_10 = &VAR_5->rx_small;
 int VAR_11, VAR_12;

 VAR_9 = FUNC_5(VAR_4, VAR_3);
 if (VAR_9 == ((void*)0)) {
  VAR_10->alloc_fail++;
  VAR_12 = VAR_1;
  goto done;
 }
 VAR_9->m_len = VAR_2;
 VAR_12 = FUNC_2(VAR_10->dmat, VAR_6, VAR_9,
          &VAR_8, &VAR_11, VAR_0);
 if (VAR_12 != 0) {
  FUNC_4(VAR_9);
  goto done;
 }
 VAR_10->info[VAR_7].m = VAR_9;
 VAR_10->shadow[VAR_7].addr_low =
  FUNC_3(FUNC_1(VAR_8.ds_addr));
 VAR_10->shadow[VAR_7].addr_high =
  FUNC_3(FUNC_0(VAR_8.ds_addr));

done:
 if ((VAR_7 & 7) == 7)
  FUNC_6(&VAR_10->lanai[VAR_7 - 7], &VAR_10->shadow[VAR_7 - 7]);
 return VAR_12;
}
