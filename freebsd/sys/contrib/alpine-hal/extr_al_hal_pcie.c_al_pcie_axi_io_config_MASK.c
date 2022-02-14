
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int slv_ctl; } ;
struct TYPE_6__ {int io_limit_l; int io_limit_h; int io_start_l; int io_start_h; } ;
struct TYPE_5__ {TYPE_1__ ctrl; TYPE_3__ ob_ctrl; } ;
struct al_pcie_regs {TYPE_2__ axi; } ;
struct al_pcie_port {struct al_pcie_regs* regs; } ;
typedef int al_phys_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;

void
FUNC_2(
 struct al_pcie_port *VAR_1,
 al_phys_addr_t VAR_2,
 al_phys_addr_t VAR_3)
{
 struct al_pcie_regs *VAR_4 = VAR_1->regs;

 FUNC_0(VAR_4->axi.ob_ctrl.io_start_h,
   (uint32_t)((VAR_2 >> 32) & 0xFFFFFFFF));

 FUNC_0(VAR_4->axi.ob_ctrl.io_start_l,
   (uint32_t)(VAR_2 & 0xFFFFFFFF));

 FUNC_0(VAR_4->axi.ob_ctrl.io_limit_h,
   (uint32_t)((VAR_3 >> 32) & 0xFFFFFFFF));

 FUNC_0(VAR_4->axi.ob_ctrl.io_limit_l,
   (uint32_t)(VAR_3 & 0xFFFFFFFF));

 FUNC_1(VAR_4->axi.ctrl.slv_ctl,
         VAR_0,
         VAR_0);
}
