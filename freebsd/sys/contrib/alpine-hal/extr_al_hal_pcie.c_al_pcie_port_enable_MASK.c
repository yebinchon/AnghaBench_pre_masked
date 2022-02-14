
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * pos_cntl; } ;
struct TYPE_7__ {TYPE_2__ ordering; } ;
struct al_pcie_regs {TYPE_3__ axi; } ;
struct TYPE_5__ {scalar_t__ nof_np_hdr; scalar_t__ nof_p_hdr; } ;
struct al_pcie_port {unsigned int port_id; scalar_t__ rev_id; TYPE_1__ ib_hcrd_config; struct al_pcie_regs* regs; scalar_t__ pbs_regs; } ;
struct TYPE_8__ {int pcie_conf_1; } ;
struct al_pbs_regs {TYPE_4__ unit; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct al_pcie_port*) ;
 int FUNC_1 (int *,int,int) ;

int
FUNC_2(struct al_pcie_port *VAR_4)
{
 struct al_pbs_regs *VAR_5 =
    (struct al_pbs_regs *)VAR_4->pbs_regs;
 struct al_pcie_regs *VAR_6 = VAR_4->regs;
 unsigned int VAR_7 = VAR_4->port_id;
 if ((VAR_4->ib_hcrd_config.nof_np_hdr == 0) ||
   (VAR_4->ib_hcrd_config.nof_p_hdr == 0))
  FUNC_0(VAR_4);






 if ((VAR_4->rev_id == VAR_0) ||
  (VAR_4->rev_id == VAR_1)) {
  FUNC_1(
   VAR_6->axi.ordering.pos_cntl,
   VAR_3,
   VAR_3);
 }


 FUNC_1(
  &VAR_5->unit.pcie_conf_1,
  1 << (VAR_7 + VAR_2),
  1 << (VAR_7 + VAR_2));

 return 0;
}
