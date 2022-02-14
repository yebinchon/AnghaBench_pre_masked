
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmxnet3_txqueue {int vxtxq_intr_idx; struct vmxnet3_txq_shared* vxtxq_ts; } ;
struct vmxnet3_txq_shared {int intr_idx; } ;
struct vmxnet3_softc {int vmx_event_intr_idx; struct vmxnet3_txqueue* vmx_txq; struct vmxnet3_rxqueue* vmx_rxq; TYPE_1__* vmx_scctx; } ;
struct vmxnet3_rxqueue {int vxrxq_intr_idx; struct vmxnet3_rxq_shared* vxrxq_rs; } ;
struct vmxnet3_rxq_shared {int intr_idx; } ;
typedef TYPE_1__* if_softc_ctx_t ;
struct TYPE_2__ {int isc_vectors; int isc_nrxqsets; int isc_ntxqsets; } ;



__attribute__((used)) static void
FUNC_0(struct vmxnet3_softc *VAR_0)
{
 if_softc_ctx_t VAR_1;
 struct vmxnet3_txqueue *VAR_2;
 struct vmxnet3_txq_shared *VAR_3;
 struct vmxnet3_rxqueue *VAR_4;
 struct vmxnet3_rxq_shared *VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_1 = VAR_0->vmx_scctx;
 VAR_0->vmx_event_intr_idx = VAR_1->isc_vectors - 1;

 VAR_6 = 0;
 for (VAR_7 = 0; VAR_7 < VAR_1->isc_nrxqsets; VAR_7++, VAR_6++) {
  VAR_4 = &VAR_0->vmx_rxq[VAR_7];
  VAR_5 = VAR_4->vxrxq_rs;
  VAR_4->vxrxq_intr_idx = VAR_6;
  VAR_5->intr_idx = VAR_4->vxrxq_intr_idx;
 }





 VAR_6 = VAR_1->isc_vectors;
 for (VAR_7 = 0; VAR_7 < VAR_1->isc_ntxqsets; VAR_7++, VAR_6++) {
  VAR_2 = &VAR_0->vmx_txq[VAR_7];
  VAR_3 = VAR_2->vxtxq_ts;
  VAR_2->vxtxq_intr_idx = VAR_6;
  VAR_3->intr_idx = VAR_2->vxtxq_intr_idx;
 }
}
