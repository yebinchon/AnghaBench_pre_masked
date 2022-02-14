
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef void* uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_5__ {void** mac_addr; } ;
struct TYPE_6__ {int pci_func; TYPE_1__ hw; } ;
typedef TYPE_2__ qla_host_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,scalar_t__,scalar_t__*) ;

void
FUNC_1(qla_host_t *VAR_2)
{
 uint8_t *VAR_3;
 uint32_t VAR_4;
 uint32_t VAR_5;
 uint32_t VAR_6;

 VAR_6 = VAR_1 + VAR_0 +
   (VAR_2->pci_func << 3);
 FUNC_0(VAR_2, VAR_6, &VAR_4);

 VAR_6 += 4;
 FUNC_0(VAR_2, VAR_6, &VAR_5);

 VAR_3 = (uint8_t *)&VAR_4;
 VAR_2->hw.mac_addr[5] = VAR_3[0];
 VAR_2->hw.mac_addr[4] = VAR_3[1];
 VAR_2->hw.mac_addr[3] = VAR_3[2];
 VAR_2->hw.mac_addr[2] = VAR_3[3];

 VAR_3 = (uint8_t *)&VAR_5;
 VAR_2->hw.mac_addr[1] = VAR_3[0];
 VAR_2->hw.mac_addr[0] = VAR_3[1];






        return;
}
