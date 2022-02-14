
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct al_pcie_port {int port_id; scalar_t__ pbs_regs; } ;
struct TYPE_2__ {int pcie_conf_1; } ;
struct al_pbs_regs {TYPE_1__ unit; } ;
typedef int al_bool ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;

al_bool
FUNC_3(struct al_pcie_port *VAR_2)
{
 struct al_pbs_regs *VAR_3 = (struct al_pbs_regs *)VAR_2->pbs_regs;
 uint32_t VAR_4 = FUNC_2(&VAR_3->unit.pcie_conf_1);

 uint32_t VAR_5 = FUNC_1(VAR_4,
  VAR_0,
  VAR_1);

 return (FUNC_1(VAR_5, FUNC_0(VAR_2->port_id),
  VAR_2->port_id) == 1);
}
