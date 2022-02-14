
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmxnet3_softc {scalar_t__ vmx_intr_mask_mode; } ;
struct vmxnet3_rxqueue {int vxrxq_intr_idx; struct vmxnet3_softc* vxrxq_sc; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct vmxnet3_softc*,int ) ;

__attribute__((used)) static int
FUNC_1(void *VAR_2)
{
 struct vmxnet3_softc *VAR_3;
 struct vmxnet3_rxqueue *VAR_4;

 VAR_4 = VAR_2;
 VAR_3 = VAR_4->vxrxq_sc;

 if (VAR_3->vmx_intr_mask_mode == VAR_1)
  FUNC_0(VAR_3, VAR_4->vxrxq_intr_idx);

 return (VAR_0);
}
