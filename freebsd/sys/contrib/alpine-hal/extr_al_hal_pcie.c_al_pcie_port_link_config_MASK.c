
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct al_pcie_regs {TYPE_2__* port_regs; TYPE_1__* core_space; } ;
struct al_pcie_port {int max_lanes; int port_id; struct al_pcie_regs* regs; } ;
struct al_pcie_link_params {int max_payload_size; int max_speed; } ;
struct TYPE_4__ {int port_link_ctrl; int gen2_ctrl; } ;
struct TYPE_3__ {int * pcie_dev_ctrl_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (struct al_pcie_port*,int ) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_3(
 struct al_pcie_port *VAR_10,
 const struct al_pcie_link_params *VAR_11)
{
 struct al_pcie_regs *VAR_12 = VAR_10->regs;
 uint8_t VAR_13 = VAR_10->max_lanes;

 if ((VAR_11->max_payload_size != VAR_2) &&
     (VAR_11->max_payload_size != VAR_0) &&
     (VAR_11->max_payload_size != VAR_1)) {
  FUNC_0("PCIe %d: unsupported Max Payload Size (%u)\n",
         VAR_10->port_id, VAR_11->max_payload_size);
  return -VAR_3;
 }

 FUNC_1(VAR_10, VAR_11->max_speed);




 if (VAR_11->max_payload_size != VAR_2)
  FUNC_2(VAR_12->core_space[0].pcie_dev_ctrl_status,
          VAR_4,
          VAR_11->max_payload_size <<
     VAR_5);
 FUNC_2(&VAR_12->port_regs->gen2_ctrl,
    VAR_6,
    VAR_13 << VAR_7);
 FUNC_2(&VAR_12->port_regs->port_link_ctrl,
    VAR_8,
    (VAR_13 + (VAR_13-1))
    << VAR_9);

 return 0;
}
