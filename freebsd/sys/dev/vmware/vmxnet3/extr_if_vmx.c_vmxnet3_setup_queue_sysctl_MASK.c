
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmxnet3_softc {int * vmx_rxq; int * vmx_txq; TYPE_1__* vmx_scctx; } ;
struct sysctl_oid_list {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
typedef TYPE_1__* if_softc_ctx_t ;
struct TYPE_2__ {int isc_ntxqsets; int isc_nrxqsets; } ;


 int FUNC_0 (struct vmxnet3_softc*,struct sysctl_ctx_list*,struct sysctl_oid_list*) ;
 int FUNC_1 (int *,struct sysctl_ctx_list*,struct sysctl_oid_list*) ;
 int FUNC_2 (int *,struct sysctl_ctx_list*,struct sysctl_oid_list*) ;

__attribute__((used)) static void
FUNC_3(struct vmxnet3_softc *VAR_0,
    struct sysctl_ctx_list *VAR_1, struct sysctl_oid_list *VAR_2)
{
 if_softc_ctx_t VAR_3;
 int VAR_4;

 VAR_3 = VAR_0->vmx_scctx;

 for (VAR_4 = 0; VAR_4 < VAR_3->isc_ntxqsets; VAR_4++)
  FUNC_2(&VAR_0->vmx_txq[VAR_4], VAR_1, VAR_2);
 for (VAR_4 = 0; VAR_4 < VAR_3->isc_nrxqsets; VAR_4++)
  FUNC_1(&VAR_0->vmx_rxq[VAR_4], VAR_1, VAR_2);

 FUNC_0(VAR_0, VAR_1, VAR_2);
}
