
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct TYPE_3__ {int size; int phys_addr; } ;
struct TYPE_4__ {TYPE_1__ pci_buf; } ;
struct dbg_tools_data {TYPE_2__ bus; } ;
struct ecore_hwfn {struct dbg_tools_data dbg_info; } ;
struct dbg_bus_mem_addr {void* hi; void* lo; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ecore_hwfn*,int*,int,int,int) ;
 int FUNC_1 (struct dbg_bus_mem_addr*,int *) ;
 void* FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__) ;

__attribute__((used)) static u32 FUNC_3(struct ecore_hwfn *VAR_4,
          struct ecore_ptt *VAR_5,
          u32 *VAR_6,
          bool VAR_7)
{
 struct dbg_tools_data *VAR_8 = &VAR_4->dbg_info;
 u32 VAR_9, VAR_10;
 struct dbg_bus_mem_addr VAR_11;
 u32 VAR_12, VAR_13 = 0;

 VAR_12 = VAR_8->bus.pci_buf.size / VAR_3;


 VAR_11.lo = FUNC_2(VAR_4, VAR_5, VAR_1);
 VAR_11.hi = FUNC_2(VAR_4, VAR_5, VAR_1 + VAR_0);


 VAR_9 = FUNC_1(&VAR_11, &VAR_8->bus.pci_buf.phys_addr);
 if ((VAR_9 % VAR_3) || VAR_9 > VAR_8->bus.pci_buf.size)
  return 0;
 VAR_10 = VAR_9 / VAR_3;


 if (FUNC_2(VAR_4, VAR_5, VAR_2))
  VAR_13 += FUNC_0(VAR_4, VAR_6 + VAR_13, VAR_7, VAR_10, VAR_12 - 1);


 if (VAR_10)
  VAR_13 += FUNC_0(VAR_4, VAR_6 + VAR_13, VAR_7, 0, VAR_10 - 1);

 return VAR_13;
}
