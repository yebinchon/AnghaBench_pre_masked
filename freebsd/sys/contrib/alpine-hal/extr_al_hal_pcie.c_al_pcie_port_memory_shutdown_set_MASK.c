
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int conf; } ;
struct TYPE_4__ {TYPE_1__ pcie_global; } ;
struct al_pcie_regs {TYPE_2__ axi; } ;
struct al_pcie_port {scalar_t__ rev_id; int port_id; struct al_pcie_regs* regs; } ;
typedef scalar_t__ al_bool ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct al_pcie_port*) ;
 int FUNC_2 (int ,int ,int ) ;

int
FUNC_3(
 struct al_pcie_port *VAR_5,
 al_bool VAR_6)
{
 struct al_pcie_regs *VAR_7 = VAR_5->regs;
 uint32_t VAR_8 = (VAR_5->rev_id == VAR_0) ?
  VAR_4 :
  VAR_3;

 if (!FUNC_1(VAR_5)) {
  FUNC_0("PCIe %d: not enabled, cannot shutdown memory\n",
   VAR_5->port_id);
  return -VAR_2;
 }

 FUNC_2(VAR_7->axi.pcie_global.conf,
  VAR_8, VAR_6 == VAR_1 ? VAR_8 : 0);

 return 0;
}
