
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmxnet3_softc {int * vmx_rxq; int * vmx_txq; TYPE_1__* vmx_scctx; } ;
typedef TYPE_1__* if_softc_ctx_t ;
struct TYPE_2__ {int isc_ntxqsets; int isc_nrxqsets; } ;


 int FUNC_0 (struct vmxnet3_softc*,int *) ;
 int FUNC_1 (struct vmxnet3_softc*,int *) ;

__attribute__((used)) static void
FUNC_2(struct vmxnet3_softc *VAR_0)
{
 if_softc_ctx_t VAR_1;
 int VAR_2;

 VAR_1 = VAR_0->vmx_scctx;

 for (VAR_2 = 0; VAR_2 < VAR_1->isc_ntxqsets; VAR_2++)
  FUNC_1(VAR_0, &VAR_0->vmx_txq[VAR_2]);

 for (VAR_2 = 0; VAR_2 < VAR_1->isc_nrxqsets; VAR_2++)
  FUNC_0(VAR_0, &VAR_0->vmx_rxq[VAR_2]);
}
