
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int mac_addr_u; int mac_addr_l; } ;
struct memac_regs {TYPE_2__* mac_addr; TYPE_1__ mac_addr0; } ;
struct TYPE_4__ {int mac_addr_u; int mac_addr_l; } ;


 int FUNC_0 (int,int *) ;

void FUNC_1(struct memac_regs *VAR_0,
                    uint8_t VAR_1)
{
    if (VAR_1 == 0) {
        FUNC_0(0, &VAR_0->mac_addr0.mac_addr_l);
        FUNC_0(0, &VAR_0->mac_addr0.mac_addr_u);
    } else {
        FUNC_0(0x0, &VAR_0->mac_addr[VAR_1 - 1].mac_addr_l);
        FUNC_0(0x0, &VAR_0->mac_addr[VAR_1 - 1].mac_addr_u);
    }
}
