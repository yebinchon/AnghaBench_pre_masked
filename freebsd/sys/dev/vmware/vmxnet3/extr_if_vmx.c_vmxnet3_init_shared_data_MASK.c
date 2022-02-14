
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_17__ {int vxcr_ndesc; int vxcr_paddr; } ;
struct TYPE_15__ {int vxcr_ndesc; int vxcr_paddr; } ;
struct TYPE_14__ {int vxtxr_ndesc; int vxtxr_paddr; } ;
struct TYPE_13__ {int idi_size; int idi_paddr; } ;
struct TYPE_12__ {int idi_size; int idi_paddr; } ;
struct TYPE_10__ {int idi_size; int idi_paddr; } ;
struct vmxnet3_txqueue {int vmx_flags; scalar_t__ vmx_intr_mask_mode; TYPE_8__ vxrxq_comp_ring; TYPE_7__* vxrxq_cmd_ring; struct vmxnet3_rxq_shared* vxrxq_rs; struct vmxnet3_txqueue* vmx_rxq; TYPE_6__ vxtxq_comp_ring; TYPE_5__ vxtxq_cmd_ring; struct vmxnet3_txq_shared* vxtxq_ts; struct vmxnet3_txqueue* vmx_txq; TYPE_4__ vmx_mcast_dma; int vmx_event_intr_idx; TYPE_3__ vmx_rss_dma; TYPE_1__ vmx_qs_dma; TYPE_9__* vmx_scctx; int vmx_sctx; struct vmxnet3_driver_shared* vmx_ds; } ;
struct vmxnet3_txq_shared {int driver_data_len; void* driver_data; int comp_ring_len; int comp_ring; int cmd_ring_len; int cmd_ring; } ;
struct vmxnet3_softc {int vmx_flags; scalar_t__ vmx_intr_mask_mode; TYPE_8__ vxrxq_comp_ring; TYPE_7__* vxrxq_cmd_ring; struct vmxnet3_rxq_shared* vxrxq_rs; struct vmxnet3_softc* vmx_rxq; TYPE_6__ vxtxq_comp_ring; TYPE_5__ vxtxq_cmd_ring; struct vmxnet3_txq_shared* vxtxq_ts; struct vmxnet3_softc* vmx_txq; TYPE_4__ vmx_mcast_dma; int vmx_event_intr_idx; TYPE_3__ vmx_rss_dma; TYPE_1__ vmx_qs_dma; TYPE_9__* vmx_scctx; int vmx_sctx; struct vmxnet3_driver_shared* vmx_ds; } ;
struct vmxnet3_rxqueue {int vmx_flags; scalar_t__ vmx_intr_mask_mode; TYPE_8__ vxrxq_comp_ring; TYPE_7__* vxrxq_cmd_ring; struct vmxnet3_rxq_shared* vxrxq_rs; struct vmxnet3_rxqueue* vmx_rxq; TYPE_6__ vxtxq_comp_ring; TYPE_5__ vxtxq_cmd_ring; struct vmxnet3_txq_shared* vxtxq_ts; struct vmxnet3_rxqueue* vmx_txq; TYPE_4__ vmx_mcast_dma; int vmx_event_intr_idx; TYPE_3__ vmx_rss_dma; TYPE_1__ vmx_qs_dma; TYPE_9__* vmx_scctx; int vmx_sctx; struct vmxnet3_driver_shared* vmx_ds; } ;
struct vmxnet3_rxq_shared {int driver_data_len; void* driver_data; int comp_ring_len; int comp_ring; int * cmd_ring_len; int * cmd_ring; } ;
struct TYPE_11__ {int version; int len; int paddr; } ;
struct vmxnet3_driver_shared {int guest; int vmxnet3_revision; int upt_version; int driver_data_len; int automask; int nintr; int mcast_tablelen; int mcast_table; int * modlevel; int ictrl; int evintr; TYPE_2__ rss; int nrxsg_max; int queue_shared_len; int queue_shared; void* driver_data; int version; int magic; } ;
typedef TYPE_9__* if_softc_ctx_t ;
typedef int if_shared_ctx_t ;
struct TYPE_18__ {int isc_vectors; int isc_nrxqsets; int isc_ntxqsets; } ;
struct TYPE_16__ {int vxrxr_ndesc; int vxrxr_paddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 void* FUNC_0 (struct vmxnet3_txqueue*) ;

__attribute__((used)) static void
FUNC_1(struct vmxnet3_softc *VAR_10)
{
 struct vmxnet3_driver_shared *VAR_11;
 if_shared_ctx_t VAR_12;
 if_softc_ctx_t VAR_13;
 struct vmxnet3_txqueue *VAR_14;
 struct vmxnet3_txq_shared *VAR_15;
 struct vmxnet3_rxqueue *VAR_16;
 struct vmxnet3_rxq_shared *VAR_17;
 int VAR_18;

 VAR_11 = VAR_10->vmx_ds;
 VAR_12 = VAR_10->vmx_sctx;
 VAR_13 = VAR_10->vmx_scctx;






 VAR_11->magic = VAR_9;


 VAR_11->version = VAR_2;
 VAR_11->guest = VAR_6 |

     VAR_5;



 VAR_11->vmxnet3_revision = 1;
 VAR_11->upt_version = 1;


 VAR_11->driver_data = FUNC_0(VAR_10);
 VAR_11->driver_data_len = sizeof(struct vmxnet3_softc);
 VAR_11->queue_shared = VAR_10->vmx_qs_dma.idi_paddr;
 VAR_11->queue_shared_len = VAR_10->vmx_qs_dma.idi_size;
 VAR_11->nrxsg_max = VAR_0;


 if (VAR_10->vmx_flags & VAR_3) {
  VAR_11->rss.version = 1;
  VAR_11->rss.paddr = VAR_10->vmx_rss_dma.idi_paddr;
  VAR_11->rss.len = VAR_10->vmx_rss_dma.idi_size;
 }


 VAR_11->automask = VAR_10->vmx_intr_mask_mode == VAR_8;
 VAR_11->nintr = (VAR_13->isc_vectors == 1) ?
     2 : (VAR_13->isc_nrxqsets + VAR_13->isc_ntxqsets + 1);
 VAR_11->evintr = VAR_10->vmx_event_intr_idx;
 VAR_11->ictrl = VAR_7;

 for (VAR_18 = 0; VAR_18 < VAR_11->nintr; VAR_18++)
  VAR_11->modlevel[VAR_18] = VAR_1;


 VAR_11->mcast_table = VAR_10->vmx_mcast_dma.idi_paddr;
 VAR_11->mcast_tablelen = VAR_10->vmx_mcast_dma.idi_size;


 for (VAR_18 = 0; VAR_18 < VAR_13->isc_ntxqsets; VAR_18++) {
  VAR_14 = &VAR_10->vmx_txq[VAR_18];
  VAR_15 = VAR_14->vxtxq_ts;

  VAR_15->cmd_ring = VAR_14->vxtxq_cmd_ring.vxtxr_paddr;
  VAR_15->cmd_ring_len = VAR_14->vxtxq_cmd_ring.vxtxr_ndesc;
  VAR_15->comp_ring = VAR_14->vxtxq_comp_ring.vxcr_paddr;
  VAR_15->comp_ring_len = VAR_14->vxtxq_comp_ring.vxcr_ndesc;
  VAR_15->driver_data = FUNC_0(VAR_14);
  VAR_15->driver_data_len = sizeof(struct vmxnet3_txqueue);
 }


 for (VAR_18 = 0; VAR_18 < VAR_13->isc_nrxqsets; VAR_18++) {
  VAR_16 = &VAR_10->vmx_rxq[VAR_18];
  VAR_17 = VAR_16->vxrxq_rs;

  VAR_17->cmd_ring[0] = VAR_16->vxrxq_cmd_ring[0].vxrxr_paddr;
  VAR_17->cmd_ring_len[0] = VAR_16->vxrxq_cmd_ring[0].vxrxr_ndesc;
  VAR_17->cmd_ring[1] = VAR_16->vxrxq_cmd_ring[1].vxrxr_paddr;
  VAR_17->cmd_ring_len[1] = VAR_16->vxrxq_cmd_ring[1].vxrxr_ndesc;
  VAR_17->comp_ring = VAR_16->vxrxq_comp_ring.vxcr_paddr;
  VAR_17->comp_ring_len = VAR_16->vxrxq_comp_ring.vxcr_ndesc;
  VAR_17->driver_data = FUNC_0(VAR_16);
  VAR_17->driver_data_len = sizeof(struct vmxnet3_rxqueue);
 }
}
