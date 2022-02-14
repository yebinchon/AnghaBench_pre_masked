
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int cfg_target_bus; } ;
struct TYPE_4__ {TYPE_1__ ob_ctrl; } ;
struct al_pcie_regs {TYPE_2__ axi; } ;
struct al_pcie_port {scalar_t__ regs; } ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

int
FUNC_3(
 struct al_pcie_port *VAR_4,
 uint8_t *VAR_5,
 uint8_t *VAR_6)
{
 struct al_pcie_regs *VAR_7 = (struct al_pcie_regs *)VAR_4->regs;
 uint32_t VAR_8;

 FUNC_1(VAR_5);
 FUNC_1(VAR_6);

 VAR_8 = FUNC_2(VAR_7->axi.ob_ctrl.cfg_target_bus);

 *VAR_6 = FUNC_0(VAR_8,
    VAR_2,
    VAR_3);
 *VAR_5 = FUNC_0(VAR_8,
   VAR_0,
   VAR_1);
 return 0;
}
