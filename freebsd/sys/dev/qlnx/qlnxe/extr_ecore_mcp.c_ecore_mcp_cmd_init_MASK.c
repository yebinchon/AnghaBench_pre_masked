
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_mcp_info {void* mfw_mb_shadow; void* mfw_mb_cur; int mfw_mb_length; int cmd_list; int link_lock; int cmd_lock; } ;
struct ecore_hwfn {int p_dev; struct ecore_mcp_info* mcp_info; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct ecore_mcp_info*) ;
 int FUNC_3 (int *) ;
 void* VAR_3 ;
 scalar_t__ FUNC_4 (struct ecore_hwfn*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 void* FUNC_7 (int ,int ,int) ;
 scalar_t__ FUNC_8 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_9 (struct ecore_hwfn*) ;

enum _ecore_status_t FUNC_10(struct ecore_hwfn *VAR_4,
     struct ecore_ptt *VAR_5)
{
 struct ecore_mcp_info *VAR_6;
 u32 VAR_7;


 VAR_4->mcp_info = FUNC_7(VAR_4->p_dev, VAR_2,
   sizeof(*VAR_4->mcp_info));
 if (!VAR_4->mcp_info) {
  FUNC_0(VAR_4, 0, "Failed to allocate mcp_info\n");
  return VAR_0;
 }
 VAR_6 = VAR_4->mcp_info;
 FUNC_6(&VAR_6->cmd_lock);
 FUNC_6(&VAR_6->link_lock);

 FUNC_3(&VAR_6->cmd_list);

 if (FUNC_8(VAR_4, VAR_5) != VAR_1) {
  FUNC_0(VAR_4, 0, "MCP is not initialized\n");



  return VAR_1;
 }

 VAR_7 = FUNC_1(VAR_6->mfw_mb_length) * sizeof(u32);
 VAR_6->mfw_mb_cur = FUNC_7(VAR_4->p_dev, VAR_2, VAR_7);
 VAR_6->mfw_mb_shadow = FUNC_7(VAR_4->p_dev, VAR_2, VAR_7);
 if (VAR_6->mfw_mb_cur == VAR_3 || VAR_6->mfw_mb_shadow == VAR_3)
  goto err;

 return VAR_1;

err:
 FUNC_0(VAR_4, 0, "Failed to allocate mcp memory\n");
 FUNC_9(VAR_4);
 return VAR_0;
}
