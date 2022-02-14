
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmxnet3_softc {int vmx_event_intr_idx; } ;
typedef int if_ctx_t ;


 struct vmxnet3_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct vmxnet3_softc*,int ) ;

__attribute__((used)) static void
FUNC_2(if_ctx_t VAR_0)
{
 struct vmxnet3_softc *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 FUNC_1(VAR_1, VAR_1->vmx_event_intr_idx);
}
