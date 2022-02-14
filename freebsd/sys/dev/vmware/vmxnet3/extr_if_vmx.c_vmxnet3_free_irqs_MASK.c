
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmxnet3_softc {int vmx_event_intr_irq; int vmx_ctx; struct vmxnet3_rxqueue* vmx_rxq; TYPE_1__* vmx_scctx; } ;
struct vmxnet3_rxqueue {int vxrxq_irq; } ;
typedef TYPE_1__* if_softc_ctx_t ;
struct TYPE_2__ {int isc_nrxqsets; } ;


 int FUNC_0 (int ,int *) ;

__attribute__((used)) static void
FUNC_1(struct vmxnet3_softc *VAR_0)
{
 if_softc_ctx_t VAR_1;
 struct vmxnet3_rxqueue *VAR_2;
 int VAR_3;

 VAR_1 = VAR_0->vmx_scctx;

 for (VAR_3 = 0; VAR_3 < VAR_1->isc_nrxqsets; VAR_3++) {
  VAR_2 = &VAR_0->vmx_rxq[VAR_3];
  FUNC_0(VAR_0->vmx_ctx, &VAR_2->vxrxq_irq);
 }

 FUNC_0(VAR_0->vmx_ctx, &VAR_0->vmx_event_intr_irq);
}
