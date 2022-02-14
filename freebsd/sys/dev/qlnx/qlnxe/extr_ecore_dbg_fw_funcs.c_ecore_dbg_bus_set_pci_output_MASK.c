
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef void* u32 ;
typedef int u16 ;
struct ecore_ptt {int dummy; } ;
struct TYPE_8__ {int lo; int hi; } ;
struct TYPE_5__ {void* hi; void* lo; } ;
struct TYPE_6__ {int size; TYPE_4__ phys_addr; TYPE_1__ virt_addr; } ;
struct TYPE_7__ {scalar_t__ target; scalar_t__ state; TYPE_2__ pci_buf; } ;
struct dbg_tools_data {TYPE_3__ bus; } ;
struct ecore_hwfn {int rel_pf_id; int p_dev; struct dbg_tools_data dbg_info; } ;
typedef int pci_buf_phys_addr ;
typedef scalar_t__ osal_uintptr_t ;
typedef enum dbg_status { ____Placeholder_dbg_status } dbg_status ;
typedef int dma_addr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
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
 int FUNC_0 (struct ecore_hwfn*,int ,char*,int) ;
 int VAR_17 ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ,int *,int) ;
 int FUNC_3 (TYPE_4__*,int *,int) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_ptt*,int ,int) ;

enum dbg_status FUNC_5(struct ecore_hwfn *VAR_23,
            struct ecore_ptt *VAR_24,
            u16 VAR_25)
{
 struct dbg_tools_data *VAR_26 = &VAR_23->dbg_info;
 dma_addr_t VAR_27;
 void *VAR_28;

 FUNC_0(VAR_23, VAR_17, "dbg_bus_set_pci_output: buf_size_kb = %d\n", VAR_25);

 if (VAR_26->bus.target != VAR_1)
  return VAR_15;
 if (VAR_26->bus.state != VAR_0 || VAR_26->bus.pci_buf.size > 0)
  return VAR_12;

 VAR_26->bus.target = VAR_2;
 VAR_26->bus.pci_buf.size = VAR_25 * 1024;
 if (VAR_26->bus.pci_buf.size % VAR_19)
  return VAR_13;

 VAR_28 = FUNC_2(VAR_23->p_dev, &VAR_27, VAR_26->bus.pci_buf.size);
 if (!VAR_28)
  return VAR_16;

 FUNC_3(&VAR_26->bus.pci_buf.phys_addr, &VAR_27, sizeof(VAR_27));

 VAR_26->bus.pci_buf.virt_addr.lo = (u32)((u64)(osal_uintptr_t)VAR_28);
 VAR_26->bus.pci_buf.virt_addr.hi = (u32)((u64)(osal_uintptr_t)VAR_28 >> 32);

 FUNC_4(VAR_23, VAR_24, VAR_6, VAR_26->bus.pci_buf.phys_addr.lo);
 FUNC_4(VAR_23, VAR_24, VAR_7, VAR_26->bus.pci_buf.phys_addr.hi);
 FUNC_4(VAR_23, VAR_24, VAR_11, VAR_20);
 FUNC_4(VAR_23, VAR_24, VAR_5, VAR_26->bus.pci_buf.size / VAR_19);
 FUNC_4(VAR_23, VAR_24, VAR_8, FUNC_1(VAR_23->rel_pf_id));
 FUNC_4(VAR_23, VAR_24, VAR_9, VAR_18);
 FUNC_4(VAR_23, VAR_24, VAR_10, VAR_21);
 FUNC_4(VAR_23, VAR_24, VAR_3, VAR_2);
 FUNC_4(VAR_23, VAR_24, VAR_4, VAR_22);

 return VAR_14;
}
