
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vmxnet3_softc {scalar_t__ vmx_link_active; int vmx_ctx; } ;
typedef int if_ctx_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct vmxnet3_softc*) ;

__attribute__((used)) static void
FUNC_3(struct vmxnet3_softc *VAR_2)
{
 if_ctx_t VAR_3;
 uint64_t VAR_4;
 int VAR_5;

 VAR_3 = VAR_2->vmx_ctx;
 VAR_5 = FUNC_2(VAR_2);
 VAR_4 = FUNC_0(10);

 if (VAR_5 != 0 && VAR_2->vmx_link_active == 0) {
  VAR_2->vmx_link_active = 1;
  FUNC_1(VAR_3, VAR_1, VAR_4);
 } else if (VAR_5 == 0 && VAR_2->vmx_link_active != 0) {
  VAR_2->vmx_link_active = 0;
  FUNC_1(VAR_3, VAR_0, VAR_4);
 }
}
