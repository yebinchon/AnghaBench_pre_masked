
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmxnet3_softc {TYPE_1__* vmx_ds; } ;
typedef int if_ctx_t ;
struct TYPE_2__ {scalar_t__ event; } ;


 struct vmxnet3_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct vmxnet3_softc*) ;
 int FUNC_2 (struct vmxnet3_softc*) ;

__attribute__((used)) static void
FUNC_3(if_ctx_t VAR_0)
{
 struct vmxnet3_softc *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1->vmx_ds->event != 0)
  FUNC_1(VAR_1);

 FUNC_2(VAR_1);
}
