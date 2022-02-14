
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct al_pcie_regs {TYPE_1__* port_regs; } ;
struct al_pcie_port {int port_id; struct al_pcie_regs* regs; } ;
struct al_pcie_gen2_params {scalar_t__ set_deemphasis; scalar_t__ tx_compliance_receive_enable; scalar_t__ tx_swing_low; } ;
struct TYPE_2__ {int gen2_ctrl; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,int ,char*,char*,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int
FUNC_5(struct al_pcie_port *VAR_3,
    const struct al_pcie_gen2_params *VAR_4)
{
 struct al_pcie_regs *VAR_5 = VAR_3->regs;
 uint32_t VAR_6;

 FUNC_2("PCIe %d: Gen2 params config: Tx Swing %s, interrupt on link Eq %s, set Deemphasis %s\n",
        VAR_3->port_id,
        VAR_4->tx_swing_low ? "Low" : "Full",
        VAR_4->tx_compliance_receive_enable? "enable" : "disable",
        VAR_4->set_deemphasis? "enable" : "disable");

 VAR_6 = FUNC_3(&VAR_5->port_regs->gen2_ctrl);

 if (VAR_4->tx_swing_low)
  FUNC_1(VAR_6, VAR_2);
 else
  FUNC_0(VAR_6, VAR_2);

 if (VAR_4->tx_compliance_receive_enable)
  FUNC_1(VAR_6, VAR_1);
 else
  FUNC_0(VAR_6, VAR_1);

 if (VAR_4->set_deemphasis)
  FUNC_1(VAR_6, VAR_0);
 else
  FUNC_0(VAR_6, VAR_0);

 FUNC_4(&VAR_5->port_regs->gen2_ctrl, VAR_6);

 return 0;
}
