
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ecore_ptt {int dummy; } ;
struct TYPE_2__ {int size; } ;
struct dbg_bus_data {int target; TYPE_1__ pci_buf; } ;
struct dbg_tools_data {struct dbg_bus_data bus; } ;
struct ecore_hwfn {struct dbg_tools_data dbg_info; } ;
typedef enum dbg_status { ____Placeholder_dbg_status } dbg_status ;


 int FUNC_0 (int ) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,int ,int) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*) ;
 scalar_t__ FUNC_3 (int ,int ,int) ;

enum dbg_status FUNC_4(struct ecore_hwfn *VAR_3,
            struct ecore_ptt *VAR_4,
            u32 *VAR_5)
{
 struct dbg_tools_data *VAR_6 = &VAR_3->dbg_info;
 struct dbg_bus_data *VAR_7 = &VAR_6->bus;
 enum dbg_status VAR_8;

 VAR_8 = FUNC_2(VAR_3, VAR_4);

 *VAR_5 = 0;

 if (VAR_8 != VAR_0)
  return VAR_8;


 *VAR_5 = (u32)FUNC_1(VAR_3, VAR_4, VAR_2, 0);

 switch (VAR_7->target) {
 case 129:
  *VAR_5 += VAR_1; break;
 case 128:
  *VAR_5 += FUNC_0(VAR_7->pci_buf.size); break;
 default:
  break;
 }


 *VAR_5 += FUNC_3(VAR_2, 0, 0);

 return VAR_0;
}
