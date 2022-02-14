
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ecore_vf_info {int vport_id; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_mcp_link_state {int speed; } ;
struct ecore_hwfn {int p_dev; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_4__ {TYPE_1__* mcp_info; } ;
struct TYPE_3__ {struct ecore_mcp_link_state link_output; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct ecore_hwfn*,int ,int *) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,int ,int ,int ) ;
 struct ecore_vf_info* FUNC_3 (struct ecore_hwfn*,int ,int) ;

enum _ecore_status_t FUNC_4(struct ecore_hwfn *VAR_2,
       struct ecore_ptt *VAR_3,
       int VAR_4, int VAR_5)
{
 struct ecore_mcp_link_state *VAR_6;
 struct ecore_vf_info *VAR_7;
 u8 VAR_8 = 0;
 enum _ecore_status_t VAR_9;

 VAR_7 = FUNC_3(VAR_2, (u16)VAR_4, 1);

 if (!VAR_7)
  return VAR_0;

 VAR_9 = FUNC_1(VAR_2, VAR_7->vport_id, &VAR_8);
 if (VAR_9 != VAR_1)
  return VAR_9;

 VAR_6 = &FUNC_0(VAR_2->p_dev)->mcp_info->link_output;

 return FUNC_2(VAR_2, VAR_3, VAR_8, (u32)VAR_5,
       VAR_6->speed);
}
