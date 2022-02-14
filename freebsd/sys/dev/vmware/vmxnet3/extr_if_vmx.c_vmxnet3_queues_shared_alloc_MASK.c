
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmxnet3_txq_shared {int dummy; } ;
struct vmxnet3_softc {int vmx_dev; int vmx_qs_dma; int vmx_ctx; TYPE_1__* vmx_scctx; } ;
struct vmxnet3_rxq_shared {int dummy; } ;
typedef TYPE_1__* if_softc_ctx_t ;
struct TYPE_2__ {int isc_ntxqsets; int isc_nrxqsets; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int,int,int *,int ) ;

__attribute__((used)) static int
FUNC_2(struct vmxnet3_softc *VAR_0)
{
 if_softc_ctx_t VAR_1;
 int VAR_2;
 int VAR_3;

 VAR_1 = VAR_0->vmx_scctx;






 VAR_2 = VAR_1->isc_ntxqsets * sizeof(struct vmxnet3_txq_shared) +
     VAR_1->isc_nrxqsets * sizeof(struct vmxnet3_rxq_shared);
 VAR_3 = FUNC_1(VAR_0->vmx_ctx, VAR_2, 128, &VAR_0->vmx_qs_dma, 0);
 if (VAR_3) {
  FUNC_0(VAR_0->vmx_dev, "cannot alloc queue shared memory\n");
  return (VAR_3);
 }

 return (0);
}
