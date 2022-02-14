
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {struct ecore_bulletin_content* p_virt; } ;
struct ecore_vf_info {TYPE_1__ bulletin; } ;
struct ecore_mcp_link_state {int dummy; } ;
struct ecore_mcp_link_params {int dummy; } ;
struct ecore_mcp_link_capabilities {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
struct ecore_bulletin_content {int dummy; } ;


 int FUNC_0 (struct ecore_mcp_link_capabilities*,struct ecore_bulletin_content*) ;
 int FUNC_1 (struct ecore_mcp_link_params*,struct ecore_bulletin_content*) ;
 int FUNC_2 (struct ecore_mcp_link_state*,struct ecore_bulletin_content*) ;
 struct ecore_vf_info* FUNC_3 (struct ecore_hwfn*,int ,int) ;

void FUNC_4(struct ecore_hwfn *VAR_0,
   u16 VAR_1,
   struct ecore_mcp_link_params *VAR_2,
   struct ecore_mcp_link_state *VAR_3,
   struct ecore_mcp_link_capabilities *VAR_4)
{
 struct ecore_vf_info *VAR_5 = FUNC_3(VAR_0, VAR_1, 0);
 struct ecore_bulletin_content *VAR_6;

 if (!VAR_5)
  return;

 VAR_6 = VAR_5->bulletin.p_virt;

 if (VAR_2)
  FUNC_1(VAR_2, VAR_6);
 if (VAR_3)
  FUNC_2(VAR_3, VAR_6);
 if (VAR_4)
  FUNC_0(VAR_4, VAR_6);
}
