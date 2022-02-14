
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vmxnet3_softc {int* vmx_lladdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vmxnet3_softc*,int ) ;

__attribute__((used)) static void
FUNC_1(struct vmxnet3_softc *VAR_2)
{
 uint32_t VAR_3, VAR_4;

 VAR_3 = FUNC_0(VAR_2, VAR_1);
 VAR_4 = FUNC_0(VAR_2, VAR_0);

 VAR_2->vmx_lladdr[0] = VAR_3;
 VAR_2->vmx_lladdr[1] = VAR_3 >> 8;
 VAR_2->vmx_lladdr[2] = VAR_3 >> 16;
 VAR_2->vmx_lladdr[3] = VAR_3 >> 24;
 VAR_2->vmx_lladdr[4] = VAR_4;
 VAR_2->vmx_lladdr[5] = VAR_4 >> 8;
}
