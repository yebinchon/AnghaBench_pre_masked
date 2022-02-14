
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int port_init; } ;
struct TYPE_4__ {TYPE_1__ global_ctrl; } ;
struct al_pcie_regs {TYPE_2__ app; } ;
struct al_pcie_port {scalar_t__ regs; } ;
typedef int al_bool ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;

al_bool FUNC_2(struct al_pcie_port *VAR_2)
{
 struct al_pcie_regs *VAR_3 = (struct al_pcie_regs *)VAR_2->regs;

 uint32_t VAR_4 = FUNC_1(VAR_3->app.global_ctrl.port_init);
 uint8_t VAR_5 = FUNC_0(VAR_4,
  VAR_0,
  VAR_1);

 return VAR_5;
}
