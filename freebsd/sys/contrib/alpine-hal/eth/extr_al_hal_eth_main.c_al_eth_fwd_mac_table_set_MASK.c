
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct al_hal_eth_adapter {TYPE_2__* ec_regs_base; } ;
struct al_eth_fwd_mac_table_entry {int* addr; int* mask; } ;
struct TYPE_4__ {TYPE_1__* fwd_mac; } ;
struct TYPE_3__ {int ctrl; int mask_h; int mask_l; int data_h; int data_l; } ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 size_t FUNC_1 (struct al_eth_fwd_mac_table_entry*) ;
 int FUNC_2 (int *,size_t) ;

int FUNC_3(struct al_hal_eth_adapter *VAR_1, uint32_t VAR_2,
        struct al_eth_fwd_mac_table_entry *VAR_3)
{
 uint32_t VAR_4;

 FUNC_0(VAR_2 < VAR_0);

 VAR_4 = (VAR_3->addr[2] << 24) | (VAR_3->addr[3] << 16) |
       (VAR_3->addr[4] << 8) | VAR_3->addr[5];
 FUNC_2(&VAR_1->ec_regs_base->fwd_mac[VAR_2].data_l, VAR_4);
 VAR_4 = (VAR_3->addr[0] << 8) | VAR_3->addr[1];
 FUNC_2(&VAR_1->ec_regs_base->fwd_mac[VAR_2].data_h, VAR_4);
 VAR_4 = (VAR_3->mask[2] << 24) | (VAR_3->mask[3] << 16) |
       (VAR_3->mask[4] << 8) | VAR_3->mask[5];
 FUNC_2(&VAR_1->ec_regs_base->fwd_mac[VAR_2].mask_l, VAR_4);
 VAR_4 = (VAR_3->mask[0] << 8) | VAR_3->mask[1];
 FUNC_2(&VAR_1->ec_regs_base->fwd_mac[VAR_2].mask_h, VAR_4);

 VAR_4 = FUNC_1(VAR_3);
 FUNC_2(&VAR_1->ec_regs_base->fwd_mac[VAR_2].ctrl, VAR_4);
 return 0;
}
