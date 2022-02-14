
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int conf; } ;
struct TYPE_4__ {TYPE_1__ pcie_global; } ;
struct al_pcie_regs {TYPE_2__ axi; } ;
struct al_pcie_port {scalar_t__ rev_id; int max_lanes; int port_id; struct al_pcie_regs* regs; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (struct al_pcie_port*) ;
 int FUNC_3 (int ,int ,int ) ;

int
FUNC_4(struct al_pcie_port *VAR_4, uint8_t VAR_5)
{
 struct al_pcie_regs *VAR_6 = VAR_4->regs;
 uint32_t VAR_7;

 if (FUNC_2(VAR_4)) {
  FUNC_1("PCIe %d: already enabled, cannot set max lanes\n",
   VAR_4->port_id);
  return -VAR_1;
 }


 VAR_7 = FUNC_0(VAR_5);

 FUNC_3(VAR_6->axi.pcie_global.conf,
  (VAR_4->rev_id == VAR_0) ?
  VAR_3 :
  VAR_2,
  VAR_7);

 VAR_4->max_lanes = VAR_5;
 return 0;
}
