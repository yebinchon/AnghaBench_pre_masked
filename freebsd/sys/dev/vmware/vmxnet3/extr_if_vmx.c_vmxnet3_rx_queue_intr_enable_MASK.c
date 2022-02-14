
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint16_t ;
struct vmxnet3_softc {TYPE_1__* vmx_rxq; } ;
typedef int if_ctx_t ;
struct TYPE_2__ {int vxrxq_intr_idx; } ;


 struct vmxnet3_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct vmxnet3_softc*,int ) ;

__attribute__((used)) static int
FUNC_2(if_ctx_t VAR_0, uint16_t VAR_1)
{
 struct vmxnet3_softc *VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 FUNC_1(VAR_2, VAR_2->vmx_rxq[VAR_1].vxrxq_intr_idx);
 return (0);
}
