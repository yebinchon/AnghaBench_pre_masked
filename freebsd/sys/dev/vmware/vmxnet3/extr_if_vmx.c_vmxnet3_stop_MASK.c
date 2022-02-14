
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmxnet3_softc {scalar_t__ vmx_link_active; } ;
typedef int if_ctx_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct vmxnet3_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct vmxnet3_softc*,int ) ;

__attribute__((used)) static void
FUNC_2(if_ctx_t VAR_2)
{
 struct vmxnet3_softc *VAR_3;

 VAR_3 = FUNC_0(VAR_2);

 VAR_3->vmx_link_active = 0;
 FUNC_1(VAR_3, VAR_0);
 FUNC_1(VAR_3, VAR_1);
}
