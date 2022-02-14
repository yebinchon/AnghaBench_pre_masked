
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct al_hal_eth_adapter {scalar_t__ shared_mdio_if; TYPE_2__* mac_regs_base; int name; } ;
struct TYPE_3__ {int mdio_1; int mdio_ctrl_1; } ;
struct TYPE_4__ {TYPE_1__ gen; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct al_hal_eth_adapter *VAR_4)
{
 int VAR_5 = 0;
 uint32_t VAR_6;

 if (VAR_4->shared_mdio_if == VAR_2)
  return 0;

 do {
  VAR_6 = FUNC_3(&VAR_4->mac_regs_base->gen.mdio_ctrl_1);






  if (VAR_6 & FUNC_0(0)){
   if (VAR_5 > 0)
    FUNC_1("eth %s mdio interface still busy!\n", VAR_4->name);
  }else{
   return 0;
  }
  FUNC_4(VAR_1);
 }while(VAR_5++ < (VAR_0 * 4));
 FUNC_2(" %s mdio failed to take ownership. MDIO info reg: 0x%08x\n",
  VAR_4->name, FUNC_3(&VAR_4->mac_regs_base->gen.mdio_1));

 return -VAR_3;
}
