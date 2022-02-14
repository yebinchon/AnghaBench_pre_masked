
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int master_awctl; int master_arctl; } ;
struct TYPE_3__ {TYPE_2__ ctrl; } ;
struct al_pcie_regs {TYPE_1__ axi; } ;
struct al_pcie_port {int port_id; struct al_pcie_regs* regs; } ;
typedef scalar_t__ al_bool ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,char*) ;
 int FUNC_1 (int ,int,int) ;

int
FUNC_2(struct al_pcie_port *VAR_4, al_bool VAR_5)
{
 struct al_pcie_regs *VAR_6 = VAR_4->regs;


 FUNC_0("PCIE_%d: snoop mode %s\n",
   VAR_4->port_id, VAR_5 ? "enable" : "disable");

 if (VAR_5) {
  FUNC_1(VAR_6->axi.ctrl.master_arctl,
   VAR_0 | VAR_1,
   VAR_0 | VAR_1);

  FUNC_1(VAR_6->axi.ctrl.master_awctl,
   VAR_2 | VAR_3,
   VAR_2 | VAR_3);
 } else {
  FUNC_1(VAR_6->axi.ctrl.master_arctl,
   VAR_0 | VAR_1,
   VAR_0);

  FUNC_1(VAR_6->axi.ctrl.master_awctl,
   VAR_2 | VAR_3,
   VAR_2);
 }
 return 0;
}
