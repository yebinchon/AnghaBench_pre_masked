
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int * events_gen; } ;
struct TYPE_4__ {TYPE_1__ global_ctrl; } ;
struct al_pcie_regs {TYPE_2__ app; } ;
struct al_pcie_port {int port_id; struct al_pcie_regs* regs; } ;
typedef enum al_pcie_operating_mode { ____Placeholder_al_pcie_operating_mode } al_pcie_operating_mode ;
typedef int al_bool ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct al_pcie_port*) ;
 int FUNC_3 (struct al_pcie_port*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int,int) ;

int
FUNC_6(struct al_pcie_port *VAR_3, al_bool VAR_4)
{
 struct al_pcie_regs *VAR_5 = VAR_3->regs;
 uint32_t VAR_6;
 al_bool VAR_7;
 enum al_pcie_operating_mode VAR_8 = FUNC_3(VAR_3);

 if (VAR_8 != VAR_0) {
  FUNC_1("PCIe %d: hot-reset is applicable only for RC mode\n", VAR_3->port_id);
  return -VAR_1;
 }

 if (!FUNC_2(VAR_3)) {
  FUNC_1("PCIe %d: link not started, cannot trigger hot-reset\n", VAR_3->port_id);
  return -VAR_1;
 }

 VAR_6 = FUNC_4(VAR_5->app.global_ctrl.events_gen[0]);
 VAR_7 = VAR_6 & VAR_2;

 if (VAR_4 && VAR_7) {
  FUNC_1("PCIe %d: link is already in hot-reset state\n", VAR_3->port_id);
  return -VAR_1;
 } else if ((!VAR_4) && (!(VAR_7))) {
  FUNC_1("PCIe %d: link is already in non-hot-reset state\n", VAR_3->port_id);
  return -VAR_1;
 } else {
  FUNC_0("PCIe %d: %s hot-reset\n", VAR_3->port_id,
   (VAR_4 ? "enabling" : "disabling"));

  FUNC_5(VAR_5->app.global_ctrl.events_gen[0],
   VAR_2,
   (VAR_4 ? VAR_2
    : ~VAR_2));
  return 0;
 }
}
