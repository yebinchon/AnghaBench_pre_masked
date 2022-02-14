
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int uint32_t ;
struct TYPE_5__ {void** mac_addr; } ;
struct TYPE_6__ {int pci_func; TYPE_1__ hw; } ;
typedef TYPE_2__ qla_host_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int) ;

__attribute__((used)) static __inline void
FUNC_1(qla_host_t *VAR_1)
{
 uint32_t VAR_2;
 uint32_t VAR_3;
 uint32_t VAR_4;
 uint8_t *VAR_5;

 VAR_2 = VAR_0 +
  (((VAR_1->pci_func >> 1) * 3) << 2) + ((VAR_1->pci_func & 0x01) << 2);

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 VAR_4 = FUNC_0(VAR_1, (VAR_2 + 0x4));

 if (VAR_1->pci_func & 0x01) {
  VAR_3 = VAR_3 >> 16;

  VAR_5 = (uint8_t *)&VAR_3;

  VAR_1->hw.mac_addr[5] = VAR_5[0];
  VAR_1->hw.mac_addr[4] = VAR_5[1];

  VAR_5 = (uint8_t *)&VAR_4;

  VAR_1->hw.mac_addr[3] = VAR_5[0];
  VAR_1->hw.mac_addr[2] = VAR_5[1];
  VAR_1->hw.mac_addr[1] = VAR_5[2];
  VAR_1->hw.mac_addr[0] = VAR_5[3];
 } else {
  VAR_5 = (uint8_t *)&VAR_3;

  VAR_1->hw.mac_addr[5] = VAR_5[0];
  VAR_1->hw.mac_addr[4] = VAR_5[1];
  VAR_1->hw.mac_addr[3] = VAR_5[2];
  VAR_1->hw.mac_addr[2] = VAR_5[3];

  VAR_5 = (uint8_t *)&VAR_4;

  VAR_1->hw.mac_addr[1] = VAR_5[0];
  VAR_1->hw.mac_addr[0] = VAR_5[1];
 }
 return;
}
