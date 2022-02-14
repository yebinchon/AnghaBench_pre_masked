
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct TYPE_2__ {int target; } ;
struct dbg_tools_data {TYPE_1__ bus; } ;
struct ecore_hwfn {struct dbg_tools_data dbg_info; } ;




 int FUNC_0 (struct ecore_hwfn*,struct ecore_ptt*,int *,int) ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,int *,int) ;

__attribute__((used)) static u32 FUNC_2(struct ecore_hwfn *VAR_0,
          struct ecore_ptt *VAR_1,
          u32 *VAR_2,
          bool VAR_3)
{
 struct dbg_tools_data *VAR_4 = &VAR_0->dbg_info;

 switch (VAR_4->bus.target) {
 case 129:
  return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 case 128:
  return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
 default:
  break;
 }

 return 0;
}
