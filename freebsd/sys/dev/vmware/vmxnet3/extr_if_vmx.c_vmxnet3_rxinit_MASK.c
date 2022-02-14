
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmxnet3_softc {TYPE_1__* vmx_sctx; } ;
struct vmxnet3_rxring {int vxrxr_ndesc; int vxrxr_rxd; void* vxrxr_gen; } ;
struct vmxnet3_comp_ring {void* vxcr_gen; scalar_t__ vxcr_next; } ;
struct vmxnet3_rxqueue {struct vmxnet3_comp_ring vxrxq_comp_ring; struct vmxnet3_rxring* vxrxq_cmd_ring; } ;
struct vmxnet3_rxdesc {int dummy; } ;
struct TYPE_2__ {int isc_nrxqs; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static void
FUNC_1(struct vmxnet3_softc *VAR_2, struct vmxnet3_rxqueue *VAR_3)
{
 struct vmxnet3_rxring *VAR_4;
 struct vmxnet3_comp_ring *VAR_5;
 int VAR_6;





 for (VAR_6 = 0; VAR_6 < VAR_2->vmx_sctx->isc_nrxqs - 1; VAR_6++) {
  VAR_4 = &VAR_3->vxrxq_cmd_ring[VAR_6];
  VAR_4->vxrxr_gen = VAR_0;




 }

 for ( ; VAR_6 < VAR_1; VAR_6++) {
  VAR_4 = &VAR_3->vxrxq_cmd_ring[VAR_6];
  VAR_4->vxrxr_gen = 0;
  FUNC_0(VAR_4->vxrxr_rxd,
      VAR_4->vxrxr_ndesc * sizeof(struct vmxnet3_rxdesc));
 }

 VAR_5 = &VAR_3->vxrxq_comp_ring;
 VAR_5->vxcr_next = 0;
 VAR_5->vxcr_gen = VAR_0;




}
