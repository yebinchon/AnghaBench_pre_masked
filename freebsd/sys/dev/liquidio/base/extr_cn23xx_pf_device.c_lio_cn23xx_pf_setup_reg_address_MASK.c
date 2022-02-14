
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pci_win_rd_data; int pci_win_wr_data; int pci_win_wr_data_lo; int pci_win_wr_data_hi; void* pci_win_rd_addr; void* pci_win_rd_addr_lo; int pci_win_rd_addr_hi; int pci_win_wr_addr; } ;
struct octeon_device {int pf_num; int pcie_port; int msix_on; TYPE_1__ reg_list; scalar_t__ chip; } ;
struct lio_cn23xx_pf {int intr_enb_reg64; int intr_sum_reg64; int intr_mask64; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct octeon_device*) ;

__attribute__((used)) static void
FUNC_3(struct octeon_device *VAR_9)
{
 struct lio_cn23xx_pf *VAR_10 = (struct lio_cn23xx_pf *)VAR_9->chip;

 VAR_9->reg_list.pci_win_wr_addr = VAR_5;

 VAR_9->reg_list.pci_win_rd_addr_hi = VAR_3;
 VAR_9->reg_list.pci_win_rd_addr_lo = VAR_2;
 VAR_9->reg_list.pci_win_rd_addr = VAR_2;

 VAR_9->reg_list.pci_win_wr_data_hi = VAR_7;
 VAR_9->reg_list.pci_win_wr_data_lo = VAR_8;
 VAR_9->reg_list.pci_win_wr_data = VAR_6;

 VAR_9->reg_list.pci_win_rd_data = VAR_4;

 FUNC_2(VAR_9);

 VAR_10->intr_mask64 = VAR_0;
 if (!VAR_9->msix_on)
  VAR_10->intr_mask64 |= VAR_1;

 VAR_10->intr_sum_reg64 =
     FUNC_1(VAR_9->pcie_port, VAR_9->pf_num);
 VAR_10->intr_enb_reg64 =
     FUNC_0(VAR_9->pcie_port, VAR_9->pf_num);
}
