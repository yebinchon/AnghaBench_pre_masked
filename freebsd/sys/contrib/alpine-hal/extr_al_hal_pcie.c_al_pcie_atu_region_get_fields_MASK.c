
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef void* uint32_t ;
struct al_pcie_regs {TYPE_2__* port_regs; } ;
struct al_pcie_port {struct al_pcie_regs* regs; } ;
typedef enum al_pcie_atu_dir { ____Placeholder_al_pcie_atu_dir } al_pcie_atu_dir ;
typedef int al_bool ;
struct TYPE_3__ {int cr1; int upper_target_addr; int lower_target_addr; int upper_base_addr; int lower_base_addr; int index; } ;
struct TYPE_4__ {TYPE_1__ iatu; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*,int) ;
 int FUNC_1 (void*,int,int) ;
 int FUNC_2 (void*,int,int ,int ) ;
 int VAR_1 ;
 void* FUNC_3 (int *) ;
 int FUNC_4 (int *,void*) ;

void
FUNC_5(
 struct al_pcie_port *VAR_2,
 enum al_pcie_atu_dir VAR_3, uint8_t VAR_4,
 al_bool *VAR_5, uint64_t *VAR_6, uint64_t *VAR_7)
{
 struct al_pcie_regs *VAR_8 = VAR_2->regs;
 uint64_t VAR_9;
 uint32_t VAR_10 = 0;

 FUNC_2(VAR_10, 0xF, 0, VAR_4);
 FUNC_1(VAR_10, 31, VAR_3);
 FUNC_4(&VAR_8->port_regs->iatu.index, VAR_10);

 *VAR_6 = FUNC_3(&VAR_8->port_regs->iatu.lower_base_addr);
 VAR_9 = FUNC_3(&VAR_8->port_regs->iatu.upper_base_addr);
 VAR_9 <<= 32;
 *VAR_6 |= VAR_9;

 *VAR_7 = FUNC_3(&VAR_8->port_regs->iatu.lower_target_addr);
 VAR_9 = FUNC_3(&VAR_8->port_regs->iatu.upper_target_addr);
 VAR_9 <<= 32;
 *VAR_7 |= VAR_9;

 VAR_10 = FUNC_3(&VAR_8->port_regs->iatu.cr1);
 *VAR_5 = FUNC_0(VAR_10, 31) ? VAR_1 : VAR_0;
}
