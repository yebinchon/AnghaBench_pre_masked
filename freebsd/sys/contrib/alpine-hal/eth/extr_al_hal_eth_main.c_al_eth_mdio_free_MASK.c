
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct al_hal_eth_adapter {scalar_t__ shared_mdio_if; TYPE_2__* mac_regs_base; } ;
struct TYPE_3__ {int mdio_ctrl_1; } ;
struct TYPE_4__ {TYPE_1__ gen; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct al_hal_eth_adapter *VAR_2)
{
 if (VAR_2->shared_mdio_if == VAR_1)
  return 0;

 FUNC_0(&VAR_2->mac_regs_base->gen.mdio_ctrl_1, 0);
 FUNC_1(2 * VAR_0);

 return 0;
}
