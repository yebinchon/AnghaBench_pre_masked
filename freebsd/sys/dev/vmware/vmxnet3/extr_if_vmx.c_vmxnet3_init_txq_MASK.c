
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmxnet3_txring {int vxtxr_ndesc; } ;
struct vmxnet3_comp_ring {int vxcr_ndesc; } ;
struct vmxnet3_txqueue {int vxtxq_id; struct vmxnet3_softc* vxtxq_sc; int vxtxq_name; struct vmxnet3_txring vxtxq_cmd_ring; struct vmxnet3_comp_ring vxtxq_comp_ring; } ;
struct vmxnet3_softc {int vmx_dev; TYPE_1__* vmx_scctx; struct vmxnet3_txqueue* vmx_txq; } ;
typedef TYPE_1__* if_softc_ctx_t ;
struct TYPE_2__ {int * isc_ntxd; } ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,int,char*,char*,int) ;

__attribute__((used)) static void
FUNC_2(struct vmxnet3_softc *VAR_0, int VAR_1)
{
 struct vmxnet3_txqueue *VAR_2;
 struct vmxnet3_comp_ring *VAR_3;
 struct vmxnet3_txring *VAR_4;
 if_softc_ctx_t VAR_5;

 VAR_2 = &VAR_0->vmx_txq[VAR_1];
 VAR_3 = &VAR_2->vxtxq_comp_ring;
 VAR_4 = &VAR_2->vxtxq_cmd_ring;
 VAR_5 = VAR_0->vmx_scctx;

 FUNC_1(VAR_2->vxtxq_name, sizeof(VAR_2->vxtxq_name), "%s-tx%d",
     FUNC_0(VAR_0->vmx_dev), VAR_1);

 VAR_2->vxtxq_sc = VAR_0;
 VAR_2->vxtxq_id = VAR_1;
 VAR_3->vxcr_ndesc = VAR_5->isc_ntxd[0];
 VAR_4->vxtxr_ndesc = VAR_5->isc_ntxd[1];
}
