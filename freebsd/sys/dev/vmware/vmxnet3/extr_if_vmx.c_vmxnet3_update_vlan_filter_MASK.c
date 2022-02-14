
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct vmxnet3_softc {int* vmx_vlan_filter; } ;



__attribute__((used)) static void
FUNC_0(struct vmxnet3_softc *VAR_0, int VAR_1, uint16_t VAR_2)
{
 int VAR_3, VAR_4;

 if (VAR_2 == 0 || VAR_2 > 4095)
  return;

 VAR_3 = (VAR_2 >> 5) & 0x7F;
 VAR_4 = VAR_2 & 0x1F;


 if (VAR_1)
  VAR_0->vmx_vlan_filter[VAR_3] |= (1 << VAR_4);
 else
  VAR_0->vmx_vlan_filter[VAR_3] &= ~(1 << VAR_4);
}
