
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int uint16_t ;
struct al_hal_eth_adapter {TYPE_3__* ec_regs_base; int name; } ;
struct TYPE_6__ {TYPE_2__* tpm_udma; TYPE_1__* tpm_sel; } ;
struct TYPE_5__ {int vlan_data; } ;
struct TYPE_4__ {int etype; } ;


 int FUNC_0 (char*,int ,size_t) ;
 int FUNC_1 (int *,int) ;

int FUNC_2(struct al_hal_eth_adapter *VAR_0, uint8_t VAR_1, uint16_t VAR_2, uint16_t VAR_3, uint16_t VAR_4)
{
 FUNC_0("[%s]: config vlan modification registers. udma id %d.\n", VAR_0->name, VAR_1);

 FUNC_1(&VAR_0->ec_regs_base->tpm_sel[VAR_1].etype, VAR_2);
 FUNC_1(&VAR_0->ec_regs_base->tpm_udma[VAR_1].vlan_data, VAR_3 | (VAR_4 << 16));

 return 0;
}
