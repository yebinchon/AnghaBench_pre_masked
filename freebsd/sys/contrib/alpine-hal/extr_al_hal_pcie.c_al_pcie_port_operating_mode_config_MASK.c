
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {int conf; } ;
struct TYPE_4__ {int pf_sel; } ;
struct TYPE_6__ {TYPE_2__ pcie_global; TYPE_1__ axi_attr_ovrd; } ;
struct al_pcie_regs {TYPE_3__ axi; } ;
struct al_pcie_port {scalar_t__ rev_id; int port_id; struct al_pcie_regs* regs; } ;
typedef enum al_pcie_operating_mode { ____Placeholder_al_pcie_operating_mode } al_pcie_operating_mode ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int ) ;
 int FUNC_1 (scalar_t__,int ,int ,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (char*,int ,char*) ;
 int FUNC_3 (char*,int ,...) ;
 scalar_t__ FUNC_4 (struct al_pcie_port*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int ,int,int) ;

int
FUNC_8(
 struct al_pcie_port *VAR_16,
 enum al_pcie_operating_mode VAR_17)
{
 struct al_pcie_regs *VAR_18 = VAR_16->regs;
 uint32_t VAR_19, VAR_20, VAR_21;

 if (FUNC_4(VAR_16)) {
  FUNC_3("PCIe %d: already enabled, cannot set operating mode\n",
   VAR_16->port_id);
  return -VAR_3;
 }

 VAR_19 = FUNC_5(VAR_18->axi.pcie_global.conf);

 VAR_20 = FUNC_0(VAR_19,
   VAR_13,
   VAR_15);
 if (VAR_17 == VAR_0) {
  VAR_21 = VAR_12;
 } else if (VAR_17 == VAR_1) {
  VAR_21 = VAR_14;

  if (VAR_16->rev_id == VAR_2) {

   FUNC_7(VAR_18->axi.axi_attr_ovrd.pf_sel,
    VAR_7 |
    VAR_8 |
    VAR_6 |
    VAR_4 |
    VAR_10 |
    VAR_11 |
    VAR_9 |
    VAR_5,
    VAR_8 |
    VAR_11);
  }
 } else {
  FUNC_3("PCIe %d: unknown operating mode: %d\n", VAR_16->port_id, VAR_17);
  return -VAR_3;
 }

 if (VAR_21 == VAR_20) {
  FUNC_2("PCIe %d: operating mode already set to %s\n",
         VAR_16->port_id, (VAR_17 == VAR_0) ?
         "EndPoint" : "Root Complex");
  return 0;
 }
 FUNC_2("PCIe %d: set operating mode to %s\n",
  VAR_16->port_id, (VAR_17 == VAR_0) ?
  "EndPoint" : "Root Complex");
 FUNC_1(VAR_19, VAR_13,
    VAR_15,
    VAR_21);

 FUNC_6(VAR_18->axi.pcie_global.conf, VAR_19);

 return 0;
}
