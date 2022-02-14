
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_ptt {int dummy; } ;
struct ecore_mcp_mb_params {int data_src_size; scalar_t__ mcp_resp; int mcp_param; struct ecore_mcp_mb_params* p_data_src; int offset; int mask; int val; int param; int cmd; } ;
struct ecore_mcp_drv_attr {int const attr_cmd; int attr_num; int val; int offset; int mask; } ;
struct ecore_hwfn {int dummy; } ;
struct attribute_cmd_write_stc {int data_src_size; scalar_t__ mcp_resp; int mcp_param; struct attribute_cmd_write_stc* p_data_src; int offset; int mask; int val; int param; int cmd; } ;
typedef int mb_params ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
typedef enum _attribute_commands_e { ____Placeholder__attribute_commands_e } _attribute_commands_e ;
typedef int attr_cmd_write ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ecore_hwfn*,char*,...) ;
 int FUNC_1 (struct ecore_hwfn*,int,char*,int const) ;
 int FUNC_2 (struct ecore_hwfn*,int ,char*,int const,int,int,int ,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;




 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_3 (struct ecore_mcp_mb_params*,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_mcp_mb_params*) ;

enum _ecore_status_t
FUNC_6(struct ecore_hwfn *VAR_13, struct ecore_ptt *VAR_14,
   struct ecore_mcp_drv_attr *VAR_15)
{
 struct attribute_cmd_write_stc VAR_16;
 enum _attribute_commands_e VAR_17;
 struct ecore_mcp_mb_params VAR_18;
 enum _ecore_status_t VAR_19;

 switch (VAR_15->attr_cmd) {
 case 130:
  VAR_17 = VAR_1;
  break;
 case 128:
  VAR_17 = VAR_3;
  break;
 case 129:
  VAR_17 = VAR_2;
  break;
 case 131:
  VAR_17 = VAR_0;
  break;
 default:
  FUNC_1(VAR_13, 0, "Unknown attribute command %d\n",
     VAR_15->attr_cmd);
  return VAR_7;
 }

 FUNC_3(&VAR_18, sizeof(VAR_18));
 VAR_18.cmd = VAR_6;
 FUNC_4(VAR_18.param, VAR_5,
        VAR_15->attr_num);
 FUNC_4(VAR_18.param, VAR_4,
        VAR_17);
 if (VAR_15->attr_cmd == 128) {
  FUNC_3(&VAR_16, sizeof(VAR_16));
  VAR_16.val = VAR_15->val;
  VAR_16.mask = VAR_15->mask;
  VAR_16.offset = VAR_15->offset;

  VAR_18.p_data_src = &VAR_16;
  VAR_18.data_src_size = sizeof(VAR_16);
 }

 VAR_19 = FUNC_5(VAR_13, VAR_14, &VAR_18);
 if (VAR_19 != VAR_10)
  return VAR_19;

 if (VAR_18.mcp_resp == VAR_12) {
  FUNC_0(VAR_13,
   "The attribute command is not supported by the MFW\n");
  return VAR_9;
 } else if (VAR_18.mcp_resp != VAR_11) {
  FUNC_0(VAR_13,
   "Failed to send an attribute command [mcp_resp 0x%x, attr_cmd %d, attr_num %d]\n",
   VAR_18.mcp_resp, VAR_15->attr_cmd,
   VAR_15->attr_num);
  return VAR_7;
 }

 FUNC_2(VAR_13, VAR_8,
     "Attribute Command: cmd %d [mfw_cmd %d], num %d, in={val 0x%08x, mask 0x%08x, offset 0x%08x}, out={val 0x%08x}\n",
     VAR_15->attr_cmd, VAR_17, VAR_15->attr_num,
     VAR_15->val, VAR_15->mask, VAR_15->offset,
     VAR_18.mcp_param);

 if (VAR_15->attr_cmd == 130 ||
     VAR_15->attr_cmd == 129)
  VAR_15->val = VAR_18.mcp_param;

 return VAR_10;
}
