
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_ptt {int dummy; } ;
struct ecore_mdump_cmd_params {int mcp_resp; int cmd; int data_dst_size; int p_data_dst; int data_src_size; int p_data_src; } ;
struct ecore_mcp_mb_params {int mcp_resp; int data_dst_size; int p_data_dst; int data_src_size; int p_data_src; int param; int cmd; } ;
struct ecore_hwfn {int dummy; } ;
typedef int mb_params ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ecore_mcp_mb_params*,int) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_mcp_mb_params*) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_3(struct ecore_hwfn *VAR_5, struct ecore_ptt *VAR_6,
      struct ecore_mdump_cmd_params *VAR_7)
{
 struct ecore_mcp_mb_params VAR_8;
 enum _ecore_status_t VAR_9;

 FUNC_1(&VAR_8, sizeof(VAR_8));
 VAR_8.cmd = VAR_0;
 VAR_8.param = VAR_7->cmd;
 VAR_8.p_data_src = VAR_7->p_data_src;
 VAR_8.data_src_size = VAR_7->data_src_size;
 VAR_8.p_data_dst = VAR_7->p_data_dst;
 VAR_8.data_dst_size = VAR_7->data_dst_size;
 VAR_9 = FUNC_2(VAR_5, VAR_6, &VAR_8);
 if (VAR_9 != VAR_2)
  return VAR_9;

 VAR_7->mcp_resp = VAR_8.mcp_resp;

 if (VAR_7->mcp_resp == VAR_3) {
  FUNC_0(VAR_5,
   "The mdump sub command is unsupported by the MFW [mdump_cmd 0x%x]\n",
   VAR_7->cmd);
  VAR_9 = VAR_1;
 } else if (VAR_7->mcp_resp == VAR_4) {
  FUNC_0(VAR_5,
   "The mdump command is not supported by the MFW\n");
  VAR_9 = VAR_1;
 }

 return VAR_9;
}
