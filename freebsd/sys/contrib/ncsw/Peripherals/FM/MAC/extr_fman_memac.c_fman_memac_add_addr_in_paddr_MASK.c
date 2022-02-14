
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_3__ {int mac_addr_u; int mac_addr_l; } ;
struct memac_regs {TYPE_2__* mac_addr; TYPE_1__ mac_addr0; } ;
struct TYPE_4__ {int mac_addr_u; int mac_addr_l; } ;


 int FUNC_0 (scalar_t__,int *) ;

void FUNC_1(struct memac_regs *VAR_0,
                    uint8_t *VAR_1,
                    uint8_t VAR_2)
{
    uint32_t VAR_3, VAR_4;

    VAR_3 = (uint32_t)(VAR_1[0] |
            VAR_1[1] << 8 |
            VAR_1[2] << 16 |
            VAR_1[3] << 24);
    VAR_4 = (uint32_t)(VAR_1[4] | VAR_1[5] << 8);

    if (VAR_2 == 0) {
        FUNC_0(VAR_3, &VAR_0->mac_addr0.mac_addr_l);
        FUNC_0(VAR_4, &VAR_0->mac_addr0.mac_addr_u);
    } else {
        FUNC_0(VAR_3, &VAR_0->mac_addr[VAR_2-1].mac_addr_l);
        FUNC_0(VAR_4, &VAR_0->mac_addr[VAR_2-1].mac_addr_u);
    }
}
