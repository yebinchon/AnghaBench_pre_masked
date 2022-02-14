
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_2__ {int pci_win_rd_data; int pci_win_rd_addr_lo; int pci_win_rd_addr_hi; } ;
struct octeon_device {scalar_t__ chip_id; int pci_win_lock; TYPE_1__ reg_list; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct octeon_device*,int ) ;
 int FUNC_1 (struct octeon_device*,int ) ;
 int FUNC_2 (struct octeon_device*,int ,int volatile) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

uint64_t
FUNC_5(struct octeon_device *VAR_1, uint64_t VAR_2)
{
 uint64_t VAR_3;
 volatile uint32_t VAR_4, VAR_5;

 FUNC_3(&VAR_1->pci_win_lock);





 VAR_5 = (VAR_2 >> 32);
 if (VAR_1->chip_id == VAR_0)
  VAR_5 |= 0x00060000;
 FUNC_2(VAR_1, VAR_1->reg_list.pci_win_rd_addr_hi, VAR_5);


 VAR_4 = FUNC_0(VAR_1, VAR_1->reg_list.pci_win_rd_addr_hi);

 FUNC_2(VAR_1, VAR_1->reg_list.pci_win_rd_addr_lo,
   VAR_2 & 0xffffffff);
 VAR_4 = FUNC_0(VAR_1, VAR_1->reg_list.pci_win_rd_addr_lo);

 VAR_3 = FUNC_1(VAR_1, VAR_1->reg_list.pci_win_rd_data);

 FUNC_4(&VAR_1->pci_win_lock);

 return (VAR_3);
}
