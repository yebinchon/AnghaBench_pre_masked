
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vmxnet3_softc {int vmx_ioh1; int vmx_iot1; } ;
typedef int bus_size_t ;


 int FUNC_0 (int ,int ,int ) ;

__attribute__((used)) static uint32_t
FUNC_1(struct vmxnet3_softc *VAR_0, bus_size_t VAR_1)
{

 return (FUNC_0(VAR_0->vmx_iot1, VAR_0->vmx_ioh1, VAR_1));
}
