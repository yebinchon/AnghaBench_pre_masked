
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct al_pcie_regs {TYPE_1__* core_space; } ;
struct al_pcie_pf {unsigned int pf_num; TYPE_2__* pcie_port; } ;
struct al_pcie_msix_params {int table_size; int table_offset; int table_bar; int pba_offset; int pba_bar; } ;
struct TYPE_4__ {struct al_pcie_regs* regs; } ;
struct TYPE_3__ {scalar_t__ msix_cap_base; } ;


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
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int) ;

int
FUNC_3(
 struct al_pcie_pf *VAR_10,
 struct al_pcie_msix_params *VAR_11)
{
 struct al_pcie_regs *VAR_12 = VAR_10->pcie_port->regs;
 unsigned int VAR_13 = VAR_10->pf_num;
 uint32_t VAR_14;

 FUNC_0(VAR_10->pcie_port, VAR_9);

 VAR_14 = FUNC_1(VAR_12->core_space[VAR_13].msix_cap_base);

 VAR_14 &= ~(VAR_1 << VAR_2);
 VAR_14 |= ((VAR_11->table_size - 1) & VAR_1) <<
   VAR_2;
 FUNC_2(VAR_12->core_space[VAR_13].msix_cap_base, VAR_14);


 FUNC_2(VAR_12->core_space[VAR_13].msix_cap_base + (VAR_6 >> 2),
         (VAR_11->table_offset & VAR_8) |
          (VAR_11->table_bar & VAR_7));

 FUNC_2(VAR_12->core_space[VAR_13].msix_cap_base + (VAR_3 >> 2),
         (VAR_11->pba_offset & VAR_5) |
          (VAR_11->pba_bar & VAR_4));

 FUNC_0(VAR_10->pcie_port, VAR_0);

 return 0;
}
