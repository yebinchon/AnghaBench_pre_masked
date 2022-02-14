
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u32 ;
struct tx_ring {int tx_tso; int* tx_rsq; size_t tx_rs_pidx; int tx_rs_cidx; struct e1000_tx_desc* tx_base; } ;
struct em_tx_queue {struct tx_ring txr; } ;
struct TYPE_10__ {int data; } ;
struct TYPE_9__ {int data; } ;
struct e1000_tx_desc {TYPE_2__ lower; TYPE_1__ upper; void* buffer_addr; } ;
struct adapter {int txd_cmd; int ctx; struct em_tx_queue* tx_queues; TYPE_3__* shared; } ;
typedef int qidx_t ;
typedef TYPE_3__* if_softc_ctx_t ;
typedef TYPE_4__* if_pkt_info_t ;
typedef int bus_size_t ;
struct TYPE_13__ {int ds_len; scalar_t__ ds_addr; } ;
typedef TYPE_5__ bus_dma_segment_t ;
typedef scalar_t__ bus_addr_t ;
struct TYPE_12__ {size_t ipi_qsidx; int ipi_nsegs; int ipi_csum_flags; int ipi_flags; int ipi_pidx; int ipi_mflags; int ipi_new_pidx; int ipi_vtag; TYPE_5__* ipi_segs; } ;
struct TYPE_11__ {int* isc_ntxd; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct adapter*,TYPE_4__*,int*,int*) ;
 int FUNC_3 (struct adapter*,TYPE_4__*,int*,int*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 void* FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(void *VAR_11, if_pkt_info_t VAR_12)
{
 struct adapter *VAR_13 = VAR_11;
 if_softc_ctx_t VAR_14 = VAR_13->shared;
 struct em_tx_queue *VAR_15 = &VAR_13->tx_queues[VAR_12->ipi_qsidx];
 struct tx_ring *VAR_16 = &VAR_15->txr;
 bus_dma_segment_t *VAR_17 = VAR_12->ipi_segs;
 int VAR_18 = VAR_12->ipi_nsegs;
 int VAR_19 = VAR_12->ipi_csum_flags;
 int VAR_20, VAR_21, VAR_22, VAR_23;
 u32 VAR_24, VAR_25 = 0, VAR_26 = 0;

 struct e1000_tx_desc *VAR_27 = ((void*)0);
 bool VAR_28, VAR_29;
 qidx_t VAR_30;

 VAR_24 = VAR_12->ipi_flags & VAR_7 ? VAR_3 : 0;
 VAR_20 = VAR_22 = VAR_12->ipi_pidx;
 VAR_28 = (VAR_19 & VAR_0);
 VAR_29 = VAR_6;
 VAR_30 = VAR_14->isc_ntxd[0];






 if ((!VAR_28) && (VAR_16->tx_tso == VAR_9)) {
  if (VAR_18 == 1)
   VAR_29 = VAR_9;
  VAR_16->tx_tso = VAR_6;
 }


 if (VAR_28) {
  VAR_20 = FUNC_3(VAR_13, VAR_12, &VAR_25, &VAR_26);
  VAR_29 = VAR_9;
 } else if (VAR_19 & VAR_5) {
  VAR_20 = FUNC_2(VAR_13, VAR_12, &VAR_25, &VAR_26);
 }

 if (VAR_12->ipi_mflags & VAR_8) {

  VAR_25 |= FUNC_4(VAR_12->ipi_vtag) << 16;

  VAR_26 |= FUNC_5(VAR_4);
 }

 FUNC_0(FUNC_7(VAR_13->ctx), "encap: set up tx: nsegs=%d first=%d i=%d\n", VAR_18, VAR_22, VAR_20);



 for (VAR_21 = 0; VAR_21 < VAR_18; VAR_21++) {
  bus_size_t VAR_31;
  bus_addr_t VAR_32;
  uint32_t VAR_33;

  VAR_27 = &VAR_16->tx_base[VAR_20];
  VAR_32 = VAR_17[VAR_21].ds_addr;
  VAR_31 = VAR_17[VAR_21].ds_len;
  VAR_33 = VAR_2 | VAR_13->txd_cmd;






  if (VAR_29 && (VAR_21 == (VAR_18 - 1)) && (VAR_31 > 8)) {
   VAR_31 -= VAR_10;
   VAR_27->buffer_addr = FUNC_6(VAR_32);
   VAR_27->lower.data = FUNC_5(VAR_33 | VAR_26 | VAR_31);
   VAR_27->upper.data = FUNC_5(VAR_25);

   if (++VAR_20 == VAR_14->isc_ntxd[0])
    VAR_20 = 0;


   VAR_27 = &VAR_16->tx_base[VAR_20];
   VAR_27->buffer_addr = FUNC_6(VAR_32 + VAR_31);
   VAR_27->lower.data = FUNC_5(VAR_33 | VAR_26 | VAR_10);
   VAR_27->upper.data = FUNC_5(VAR_25);
   VAR_23 = VAR_20;
   if (++VAR_20 == VAR_14->isc_ntxd[0])
    VAR_20 = 0;
   FUNC_0(FUNC_7(VAR_13->ctx), "TSO path pidx_last=%d i=%d ntxd[0]=%d\n", VAR_23, VAR_20, VAR_14->isc_ntxd[0]);
  } else {
   VAR_27->buffer_addr = FUNC_6(VAR_32);
   VAR_27->lower.data = FUNC_5(VAR_33 | VAR_26 | VAR_31);
   VAR_27->upper.data = FUNC_5(VAR_25);
   VAR_23 = VAR_20;
   if (++VAR_20 == VAR_14->isc_ntxd[0])
    VAR_20 = 0;
   FUNC_0(FUNC_7(VAR_13->ctx), "pidx_last=%d i=%d ntxd[0]=%d\n", VAR_23, VAR_20, VAR_14->isc_ntxd[0]);
  }
 }






 if (VAR_24 && VAR_18) {
  VAR_16->tx_rsq[VAR_16->tx_rs_pidx] = VAR_23;
  FUNC_0(FUNC_7(VAR_13->ctx), "setting to RS on %d rs_pidx %d first: %d\n", VAR_23, VAR_16->tx_rs_pidx, VAR_22);
  VAR_16->tx_rs_pidx = (VAR_16->tx_rs_pidx+1) & (VAR_30-1);
  FUNC_1(VAR_16->tx_rs_pidx != VAR_16->tx_rs_cidx);
 }
 VAR_27->lower.data |= FUNC_5(VAR_1 | VAR_24);
 FUNC_0(FUNC_7(VAR_13->ctx), "tx_buffers[%d]->eop = %d ipi_new_pidx=%d\n", VAR_22, VAR_23, VAR_20);
 VAR_12->ipi_new_pidx = VAR_20;

 return (0);
}
