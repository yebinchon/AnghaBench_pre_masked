
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_2__ {int pci_win_wr_data_lo; int pci_win_wr_data_hi; int pci_win_wr_addr; } ;
struct octeon_device {int pci_win_lock; TYPE_1__ reg_list; } ;


 int FUNC_0 (struct octeon_device*,int ) ;
 int FUNC_1 (struct octeon_device*,int ,int) ;
 int FUNC_2 (struct octeon_device*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void
FUNC_5(struct octeon_device *VAR_0, uint64_t VAR_1, uint64_t VAR_2)
{
 volatile uint32_t VAR_3;

 FUNC_3(&VAR_0->pci_win_lock);

 FUNC_2(VAR_0, VAR_0->reg_list.pci_win_wr_addr, VAR_2);


 FUNC_1(VAR_0, VAR_0->reg_list.pci_win_wr_data_hi, VAR_1 >> 32);

 VAR_3 = FUNC_0(VAR_0, VAR_0->reg_list.pci_win_wr_data_hi);

 FUNC_1(VAR_0, VAR_0->reg_list.pci_win_wr_data_lo,
   VAR_1 & 0xffffffff);

 FUNC_4(&VAR_0->pci_win_lock);
}
