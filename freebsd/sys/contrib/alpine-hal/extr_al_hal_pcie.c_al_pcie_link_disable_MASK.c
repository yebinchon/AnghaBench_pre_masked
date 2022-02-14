
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct al_pcie_regs {TYPE_1__* core_space; } ;
struct al_pcie_port {int port_id; struct al_pcie_regs* regs; } ;
typedef enum al_pcie_operating_mode { ____Placeholder_al_pcie_operating_mode } al_pcie_operating_mode ;
typedef int al_bool ;
struct TYPE_2__ {scalar_t__ pcie_cap_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct al_pcie_port*) ;
 int FUNC_3 (struct al_pcie_port*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,int,int) ;

int
FUNC_6(struct al_pcie_port *VAR_4, al_bool VAR_5)
{
 struct al_pcie_regs *VAR_6 = VAR_4->regs;
 uint32_t VAR_7;
 al_bool VAR_8;
 enum al_pcie_operating_mode VAR_9 = FUNC_3(VAR_4);

 if (VAR_9 != VAR_0) {
  FUNC_1("PCIe %d: hot-reset is applicable only for RC mode\n", VAR_4->port_id);
  return -VAR_3;
 }

 if (!FUNC_2(VAR_4)) {
  FUNC_1("PCIe %d: link not started, cannot disable link\n", VAR_4->port_id);
  return -VAR_3;
 }

 VAR_7 = FUNC_4(VAR_6->core_space[0].pcie_cap_base + (VAR_1 >> 1));
 VAR_8 = VAR_7 & VAR_2;

 if (VAR_5 && VAR_8) {
  FUNC_1("PCIe %d: link is already in disable state\n", VAR_4->port_id);
  return -VAR_3;
 } else if ((!VAR_5) && (!(VAR_8))) {
  FUNC_1("PCIe %d: link is already in enable state\n", VAR_4->port_id);
  return -VAR_3;
 }

 FUNC_0("PCIe %d: %s port\n", VAR_4->port_id, (VAR_5 ? "disabling" : "enabling"));
 FUNC_5(VAR_6->core_space[0].pcie_cap_base + (VAR_1 >> 1),
  VAR_2,
  (VAR_5 ? VAR_2 : ~VAR_2));
 return 0;
}
