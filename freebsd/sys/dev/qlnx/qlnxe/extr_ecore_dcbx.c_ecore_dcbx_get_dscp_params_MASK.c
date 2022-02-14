
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ecore_hwfn {TYPE_1__* p_dcbx_info; } ;
struct ecore_dcbx_dscp_params {int* dscp_pri_map; int enabled; } ;
struct ecore_dcbx_get {struct ecore_dcbx_dscp_params dscp; } ;
struct dcb_dscp_map {int* dscp_pri_map; int flags; } ;
struct TYPE_2__ {struct dcb_dscp_map dscp_map; } ;


 int VAR_0 ;
 int FUNC_0 (struct ecore_hwfn*,int ,char*,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct ecore_hwfn *VAR_3,
     struct ecore_dcbx_get *VAR_4)
{
 struct ecore_dcbx_dscp_params *VAR_5;
 struct dcb_dscp_map *VAR_6;
 int VAR_7, VAR_8, VAR_9;
 u32 VAR_10;

 VAR_5 = &VAR_4->dscp;
 VAR_6 = &VAR_3->p_dcbx_info->dscp_map;
 VAR_5->enabled = FUNC_1(VAR_6->flags, VAR_0);




 for (VAR_7 = 0, VAR_9 = 0; VAR_7 < VAR_1 / 8; VAR_7++) {
  VAR_10 = VAR_6->dscp_pri_map[VAR_7];
  FUNC_0(VAR_3, VAR_2, "elem %d pri_map 0x%x\n",
      VAR_9, VAR_10);
  for (VAR_8 = 0; VAR_8 < VAR_1 / 8; VAR_8++, VAR_9++)
   VAR_5->dscp_pri_map[VAR_9] = (u32)(VAR_10 >>
          (VAR_8 * 4)) & 0xf;
 }
}
