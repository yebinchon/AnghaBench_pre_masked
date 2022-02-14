
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct TYPE_4__ {int lo; } ;
struct TYPE_5__ {scalar_t__ size; int phys_addr; TYPE_1__ virt_addr; } ;
struct TYPE_6__ {TYPE_2__ pci_buf; } ;
struct dbg_tools_data {TYPE_3__ bus; } ;
struct ecore_hwfn {int p_dev; struct dbg_tools_data dbg_info; } ;
typedef int pci_buf_phys_addr ;
typedef scalar_t__ osal_uintptr_t ;
typedef int dma_addr_t ;


 int FUNC_0 (int ,int *,int ,scalar_t__) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static void FUNC_2(struct ecore_hwfn *VAR_0)
{
 struct dbg_tools_data *VAR_1 = &VAR_0->dbg_info;
 dma_addr_t VAR_2;
 void *VAR_3;
 u32 *VAR_4;


 VAR_3 = &VAR_1->bus.pci_buf.virt_addr.lo;
 VAR_4 = (u32 *)(osal_uintptr_t)*((u64 *)VAR_3);

 if (!VAR_1->bus.pci_buf.size)
  return;

 FUNC_1(&VAR_2, &VAR_1->bus.pci_buf.phys_addr, sizeof(VAR_2));

 FUNC_0(VAR_0->p_dev, VAR_4, VAR_2, VAR_1->bus.pci_buf.size);

 VAR_1->bus.pci_buf.size = 0;
}
