
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
struct al_pcie_port {int port_id; struct al_pcie_regs* regs; } ;
typedef enum al_pcie_operating_mode { ____Placeholder_al_pcie_operating_mode } al_pcie_operating_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,int ) ;

 int VAR_3 ;

 int VAR_4 ;
 int FUNC_1 (struct al_pcie_port*) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (int ) ;

enum al_pcie_operating_mode
FUNC_4(
 struct al_pcie_port *VAR_5)
{
 struct al_pcie_regs *VAR_6 = VAR_5->regs;
 uint32_t VAR_7, VAR_8;

 FUNC_1(VAR_5);

 VAR_7 = FUNC_3(VAR_6->axi.pcie_global.conf);

 VAR_8 = FUNC_0(VAR_7,
   VAR_3,
   VAR_4);

 switch (VAR_8) {
 case 129:
  return VAR_0;
 case 128:
  return VAR_1;
 default:
  FUNC_2("PCIe %d: unknown device type (%d) in global conf register.\n",
   VAR_5->port_id, VAR_8);
 }
 return VAR_2;
}
