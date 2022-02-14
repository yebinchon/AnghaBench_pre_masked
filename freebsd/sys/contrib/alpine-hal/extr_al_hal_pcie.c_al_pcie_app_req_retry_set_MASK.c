
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int pm_control; } ;
struct TYPE_4__ {TYPE_1__ global_ctrl; } ;
struct al_pcie_regs {TYPE_2__ app; } ;
struct al_pcie_port {scalar_t__ rev_id; struct al_pcie_regs* regs; } ;
typedef scalar_t__ al_bool ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ) ;

void
FUNC_1(
 struct al_pcie_port *VAR_4,
 al_bool VAR_5)
{
 struct al_pcie_regs *VAR_6 = VAR_4->regs;
 uint32_t VAR_7 = (VAR_4->rev_id == VAR_0) ?
  VAR_3 :
  VAR_2;

 FUNC_0(VAR_6->app.global_ctrl.pm_control,
  VAR_7, (VAR_5 == VAR_1) ? VAR_7 : 0);
}
