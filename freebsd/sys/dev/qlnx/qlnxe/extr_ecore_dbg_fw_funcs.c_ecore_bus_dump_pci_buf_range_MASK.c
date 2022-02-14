
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
struct TYPE_5__ {TYPE_1__ virt_addr; } ;
struct TYPE_6__ {TYPE_2__ pci_buf; } ;
struct dbg_tools_data {TYPE_3__ bus; } ;
struct ecore_hwfn {struct dbg_tools_data dbg_info; } ;
typedef scalar_t__ osal_uintptr_t ;


 int VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static u32 FUNC_0(struct ecore_hwfn *VAR_2,
          u32 *VAR_3,
          bool VAR_4,
          u32 VAR_5,
          u32 VAR_6)
{
 struct dbg_tools_data *VAR_7 = &VAR_2->dbg_info;
 u32 VAR_8 = 0;


 void *VAR_9 = &VAR_7->bus.pci_buf.virt_addr.lo;
 u32 *VAR_10 = (u32 *)(osal_uintptr_t)*((u64 *)VAR_9);
 u32 *VAR_11, VAR_12, VAR_13;

 if (!VAR_4)
  return (VAR_6 - VAR_5 + 1) * VAR_0;

 for (VAR_12 = VAR_5, VAR_11 = VAR_10 + VAR_5 * VAR_0;
 VAR_12 <= VAR_6;
  VAR_12++, VAR_8 += VAR_0)
  for (VAR_13 = 0; VAR_13 < VAR_0; VAR_13++, VAR_11++)
   VAR_3[VAR_8 + VAR_1[VAR_13]] = *VAR_11;

 return VAR_8;
}
