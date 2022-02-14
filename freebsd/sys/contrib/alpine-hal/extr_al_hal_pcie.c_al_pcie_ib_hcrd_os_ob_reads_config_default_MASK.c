
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct al_pcie_port {int port_id; int rev_id; } ;
struct al_pcie_ib_hcrd_os_ob_reads_config {int nof_p_hdr; int nof_np_hdr; int nof_cpl_hdr; int nof_outstanding_ob_reads; } ;




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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct al_pcie_port*) ;
 int FUNC_3 (struct al_pcie_port*,struct al_pcie_ib_hcrd_os_ob_reads_config*) ;

__attribute__((used)) static void
FUNC_4(
 struct al_pcie_port *VAR_17)
{

 struct al_pcie_ib_hcrd_os_ob_reads_config VAR_18;

 switch (FUNC_2(VAR_17)) {
 case 128:
  if (VAR_17->rev_id == VAR_16) {
   VAR_18.nof_outstanding_ob_reads =
    VAR_15;
   VAR_18.nof_cpl_hdr =
    VAR_12;
   VAR_18.nof_np_hdr =
    VAR_13;
   VAR_18.nof_p_hdr =
    VAR_14;
  } else {
   VAR_18.nof_outstanding_ob_reads =
    VAR_7;
   VAR_18.nof_cpl_hdr =
    VAR_4;
   VAR_18.nof_np_hdr =
    VAR_5;
   VAR_18.nof_p_hdr =
    VAR_6;
  }
  break;

 case 129:
  if (VAR_17->rev_id == VAR_16) {
   VAR_18.nof_outstanding_ob_reads =
    VAR_11;
   VAR_18.nof_cpl_hdr =
    VAR_8;
   VAR_18.nof_np_hdr =
    VAR_9;
   VAR_18.nof_p_hdr =
    VAR_10;
  } else {
   VAR_18.nof_outstanding_ob_reads =
    VAR_3;
   VAR_18.nof_cpl_hdr =
    VAR_0;
   VAR_18.nof_np_hdr =
    VAR_1;
   VAR_18.nof_p_hdr =
    VAR_2;
  }
  break;

 default:
  FUNC_1("PCIe %d: outstanding outbound transactions could not be configured - unknown operating mode\n",
   VAR_17->port_id);
  FUNC_0(0);
 }

 FUNC_3(VAR_17, &VAR_18);
}
