
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int pcie_core_setup; } ;
struct TYPE_5__ {int cfg; } ;
struct TYPE_7__ {TYPE_2__ pre_configuration; TYPE_1__ init_fc; } ;
struct al_pcie_regs {TYPE_3__ axi; } ;
struct TYPE_8__ {int nof_np_hdr; int nof_p_hdr; } ;
struct al_pcie_port {scalar_t__ rev_id; TYPE_4__ ib_hcrd_config; int port_id; struct al_pcie_regs* regs; } ;
struct al_pcie_ib_hcrd_os_ob_reads_config {int nof_np_hdr; int nof_p_hdr; int nof_cpl_hdr; int nof_outstanding_ob_reads; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (struct al_pcie_port*) ;
 int FUNC_3 (int ,int,int) ;

int
FUNC_4(
 struct al_pcie_port *VAR_18,
 struct al_pcie_ib_hcrd_os_ob_reads_config *VAR_19)
{
 struct al_pcie_regs *VAR_20 = VAR_18->regs;

 if (FUNC_2(VAR_18)) {
  FUNC_1("PCIe %d: already enabled, cannot configure IB credits and OB OS reads\n",
   VAR_18->port_id);
  return -VAR_3;
 }

 FUNC_0(VAR_19->nof_np_hdr > 0);

 FUNC_0(VAR_19->nof_p_hdr > 0);

 FUNC_0(VAR_19->nof_cpl_hdr > 0);

 if (VAR_18->rev_id == VAR_2) {
  FUNC_0(
   (VAR_19->nof_cpl_hdr +
   VAR_19->nof_np_hdr +
   VAR_19->nof_p_hdr) ==
   VAR_0);

  FUNC_3(
   VAR_20->axi.init_fc.cfg,
   VAR_16 |
   VAR_14 |
   VAR_12,
   (VAR_19->nof_p_hdr <<
    VAR_17) |
   (VAR_19->nof_np_hdr <<
    VAR_15) |
   (VAR_19->nof_cpl_hdr <<
    VAR_13));
 } else {
  FUNC_0(
   (VAR_19->nof_cpl_hdr +
   VAR_19->nof_np_hdr +
   VAR_19->nof_p_hdr) ==
   VAR_1);

  FUNC_3(
   VAR_20->axi.init_fc.cfg,
   VAR_10 |
   VAR_8 |
   VAR_6,
   (VAR_19->nof_p_hdr <<
    VAR_11) |
   (VAR_19->nof_np_hdr <<
    VAR_9) |
   (VAR_19->nof_cpl_hdr <<
    VAR_7));
 }

 FUNC_3(
  VAR_20->axi.pre_configuration.pcie_core_setup,
  VAR_4,
  VAR_19->nof_outstanding_ob_reads <<
  VAR_5);


 VAR_18->ib_hcrd_config.nof_np_hdr =
  VAR_19->nof_np_hdr;
 VAR_18->ib_hcrd_config.nof_p_hdr =
  VAR_19->nof_p_hdr;

 return 0;
}
