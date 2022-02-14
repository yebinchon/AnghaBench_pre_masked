
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int cfg_control; } ;
struct TYPE_4__ {TYPE_1__ ob_ctrl; } ;
struct al_pcie_regs {TYPE_2__ axi; } ;
struct al_pcie_port {struct al_pcie_regs* regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;

int
FUNC_1(struct al_pcie_port *VAR_2, uint8_t VAR_3)
{
 struct al_pcie_regs *VAR_4 = VAR_2->regs;

 uint32_t VAR_5 = (VAR_3 <<
   VAR_1);

 FUNC_0(
  VAR_4->axi.ob_ctrl.cfg_control,
  VAR_0,
  VAR_5);
 return 0;
}
