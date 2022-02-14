
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmxnet3_softc {int vmx_dev; TYPE_1__* vmx_scctx; struct vmxnet3_rxqueue* vmx_rxq; } ;
struct vmxnet3_rxring {int vxrxr_ndesc; } ;
struct vmxnet3_comp_ring {int vxcr_ndesc; } ;
struct vmxnet3_rxqueue {int vxrxq_id; struct vmxnet3_rxring* vxrxq_cmd_ring; struct vmxnet3_softc* vxrxq_sc; int vxrxq_name; struct vmxnet3_comp_ring vxrxq_comp_ring; } ;
typedef TYPE_1__* if_softc_ctx_t ;
struct TYPE_2__ {int * isc_nrxd; } ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (int ,int,char*,char*,int) ;

__attribute__((used)) static void
FUNC_2(struct vmxnet3_softc *VAR_0, int VAR_1, int VAR_2)
{
 struct vmxnet3_rxqueue *VAR_3;
 struct vmxnet3_comp_ring *VAR_4;
 struct vmxnet3_rxring *VAR_5;
 if_softc_ctx_t VAR_6;
 int VAR_7;

 VAR_3 = &VAR_0->vmx_rxq[VAR_1];
 VAR_4 = &VAR_3->vxrxq_comp_ring;
 VAR_6 = VAR_0->vmx_scctx;

 FUNC_1(VAR_3->vxrxq_name, sizeof(VAR_3->vxrxq_name), "%s-rx%d",
     FUNC_0(VAR_0->vmx_dev), VAR_1);

 VAR_3->vxrxq_sc = VAR_0;
 VAR_3->vxrxq_id = VAR_1;





 VAR_4->vxcr_ndesc = VAR_6->isc_nrxd[0];
 for (VAR_7 = 0; VAR_7 < VAR_2 - 1; VAR_7++) {
  VAR_5 = &VAR_3->vxrxq_cmd_ring[VAR_7];
  VAR_5->vxrxr_ndesc = VAR_6->isc_nrxd[VAR_7 + 1];
 }
}
