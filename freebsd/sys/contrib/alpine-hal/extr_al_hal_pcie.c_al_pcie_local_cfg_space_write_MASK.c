
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct al_pcie_regs {TYPE_1__* core_space; } ;
struct al_pcie_port {struct al_pcie_regs* regs; } ;
struct al_pcie_pf {unsigned int pf_num; struct al_pcie_port* pcie_port; } ;
typedef scalar_t__ al_bool ;
struct TYPE_2__ {int * config_header; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct al_pcie_port*,scalar_t__) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct al_pcie_port*,int *,int ) ;

void
FUNC_3(
 struct al_pcie_pf *VAR_2,
 unsigned int VAR_3,
 uint32_t VAR_4,
 al_bool VAR_5,
 al_bool VAR_6)
{
 struct al_pcie_port *VAR_7 = VAR_2->pcie_port;
 struct al_pcie_regs *VAR_8 = VAR_7->regs;
 unsigned int VAR_9 = VAR_2->pf_num;
 uint32_t *VAR_10 = &VAR_8->core_space[VAR_9].config_header[VAR_3];

 if (VAR_6)
  FUNC_0(VAR_7, VAR_1);

 if (VAR_5 == VAR_0)
  FUNC_1(VAR_10, VAR_4);
 else
  FUNC_2(VAR_7, VAR_10, VAR_4);

 if (VAR_6)
  FUNC_0(VAR_7, VAR_0);
}
