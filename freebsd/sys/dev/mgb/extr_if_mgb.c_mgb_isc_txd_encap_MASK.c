
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct mgb_ring_data {struct mgb_ring_desc* ring; } ;
struct mgb_softc {struct mgb_ring_data tx_ring_data; int ctx; } ;
struct TYPE_5__ {void* high; void* low; } ;
struct mgb_ring_desc {void* sts; TYPE_1__ addr; void* ctl; } ;
typedef int qidx_t ;
typedef int if_softc_ctx_t ;
typedef TYPE_2__* if_pkt_info_t ;
struct TYPE_7__ {int ds_len; int ds_addr; } ;
typedef TYPE_3__ bus_dma_segment_t ;
struct TYPE_6__ {scalar_t__ ipi_qsidx; int ipi_pidx; int ipi_nsegs; int ipi_new_pidx; TYPE_3__* ipi_segs; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_4 (int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int
FUNC_6(void *VAR_5 , if_pkt_info_t VAR_6)
{
 struct mgb_softc *VAR_7;
 if_softc_ctx_t VAR_8;
 struct mgb_ring_data *VAR_9;
 struct mgb_ring_desc *VAR_10;
 bus_dma_segment_t *VAR_11;
 qidx_t VAR_12, VAR_13;
 int VAR_14;

 FUNC_2(VAR_6->ipi_qsidx == 0,
     ("tried to refill TX Channel %d.\n", VAR_6->ipi_qsidx));
 VAR_7 = VAR_5;
 VAR_8 = FUNC_5(VAR_7->ctx);
 VAR_9 = &VAR_7->tx_ring_data;

 VAR_12 = VAR_6->ipi_pidx;
 VAR_11 = VAR_6->ipi_segs;
 VAR_13 = VAR_6->ipi_nsegs;


 for (VAR_14 = 0; VAR_14 < VAR_13; ++VAR_14) {
  FUNC_2(VAR_13 == 1, ("Multisegment packet !!!!!\n"));
  VAR_10 = &VAR_9->ring[VAR_12];
  VAR_10->ctl = FUNC_4(
      (VAR_11[VAR_14].ds_len & VAR_0 ) |





      VAR_3 | VAR_4 |
      VAR_1);
  VAR_10->addr.low = FUNC_4(FUNC_1(
      VAR_11[VAR_14].ds_addr));
  VAR_10->addr.high = FUNC_4(FUNC_0(
      VAR_11[VAR_14].ds_addr));
  VAR_10->sts = FUNC_4(
      (VAR_11[VAR_14].ds_len << 16) & VAR_2);
  VAR_12 = FUNC_3(VAR_12);
 }
 VAR_6->ipi_new_pidx = VAR_12;
 return (0);
}
