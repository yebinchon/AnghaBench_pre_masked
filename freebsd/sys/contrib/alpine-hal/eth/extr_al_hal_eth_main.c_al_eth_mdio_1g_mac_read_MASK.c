
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct al_hal_eth_adapter {TYPE_2__* mac_regs_base; } ;
struct TYPE_3__ {int phy_regs_base; } ;
struct TYPE_4__ {TYPE_1__ mac_1g; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct al_hal_eth_adapter *VAR_0,
       uint32_t VAR_1 __attribute__((__unused__)),
       uint32_t VAR_2, uint16_t *VAR_3)
{
 *VAR_3 = FUNC_0(
  &VAR_0->mac_regs_base->mac_1g.phy_regs_base + VAR_2);
 return 0;
}
