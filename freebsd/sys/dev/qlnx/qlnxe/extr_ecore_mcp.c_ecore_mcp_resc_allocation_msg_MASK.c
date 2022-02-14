
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_info {scalar_t__ res_id; int cmd; int data_src_size; int data_dst_size; int flags; int vf_offset; int vf_size; int offset; int size; int mcp_param; int mcp_resp; int param; struct resource_info* p_data_src; struct resource_info* p_data_dst; } ;
struct ecore_resc_alloc_out_params {int flags; int vf_resc_start; int vf_resc_num; int resc_start; int resc_num; int mcp_param; int mcp_resp; } ;
struct ecore_resc_alloc_in_params {int cmd; int resc_max_val; int res_id; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_mcp_mb_params {scalar_t__ res_id; int cmd; int data_src_size; int data_dst_size; int flags; int vf_offset; int vf_size; int offset; int size; int mcp_param; int mcp_resp; int param; struct ecore_mcp_mb_params* p_data_src; struct ecore_mcp_mb_params* p_data_dst; } ;
struct ecore_hwfn {int dummy; } ;
typedef int mfw_resc_info ;
typedef int mb_params ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,char*,int,...) ;
 int FUNC_1 (struct ecore_hwfn*,int ,char*,int,int ,int ,int ,int ,int ,...) ;
 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct resource_info*,int) ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_ptt*,struct resource_info*) ;
 scalar_t__ FUNC_6 (int ) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_7(struct ecore_hwfn *VAR_9,
         struct ecore_ptt *VAR_10,
         struct ecore_resc_alloc_in_params *VAR_11,
         struct ecore_resc_alloc_out_params *VAR_12)
{
 struct ecore_mcp_mb_params VAR_13;
 struct resource_info VAR_14;
 enum _ecore_status_t VAR_15;

 FUNC_3(&VAR_14, sizeof(VAR_14));

 VAR_14.res_id = FUNC_6(VAR_11->res_id);
 if (VAR_14.res_id == VAR_8) {
  FUNC_0(VAR_9,
         "Failed to match resource %d [%s] with the MFW resources\n",
         VAR_11->res_id,
         FUNC_4(VAR_11->res_id));
  return VAR_2;
 }

 switch (VAR_11->cmd) {
 case 128:
  VAR_14.size = VAR_11->resc_max_val;

 case 129:
  break;
 default:
  FUNC_0(VAR_9, "Unexpected resource alloc command [0x%08x]\n",
         VAR_11->cmd);
  return VAR_2;
 }

 FUNC_3(&VAR_13, sizeof(VAR_13));
 VAR_13.cmd = VAR_11->cmd;
 VAR_13.param = VAR_4;
 VAR_13.p_data_src = &VAR_14;
 VAR_13.data_src_size = sizeof(VAR_14);
 VAR_13.p_data_dst = VAR_13.p_data_src;
 VAR_13.data_dst_size = VAR_13.data_src_size;

 FUNC_1(VAR_9, VAR_3,
     "Resource message request: cmd 0x%08x, res_id %d [%s], hsi_version %d.%d, val 0x%x\n",
     VAR_11->cmd, VAR_11->res_id,
     FUNC_4(VAR_11->res_id),
     FUNC_2(VAR_13.param,
     VAR_0),
     FUNC_2(VAR_13.param,
     VAR_1),
     VAR_11->resc_max_val);

 VAR_15 = FUNC_5(VAR_9, VAR_10, &VAR_13);
 if (VAR_15 != VAR_5)
  return VAR_15;

 VAR_12->mcp_resp = VAR_13.mcp_resp;
 VAR_12->mcp_param = VAR_13.mcp_param;
 VAR_12->resc_num = VAR_14.size;
 VAR_12->resc_start = VAR_14.offset;
 VAR_12->vf_resc_num = VAR_14.vf_size;
 VAR_12->vf_resc_start = VAR_14.vf_offset;
 VAR_12->flags = VAR_14.flags;

 FUNC_1(VAR_9, VAR_3,
     "Resource message response: mfw_hsi_version %d.%d, num 0x%x, start 0x%x, vf_num 0x%x, vf_start 0x%x, flags 0x%08x\n",
     FUNC_2(VAR_12->mcp_param,
     VAR_6),
     FUNC_2(VAR_12->mcp_param,
     VAR_7),
     VAR_12->resc_num, VAR_12->resc_start,
     VAR_12->vf_resc_num, VAR_12->vf_resc_start,
     VAR_12->flags);

 return VAR_5;
}
