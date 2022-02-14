
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdump_config_stc {int dummy; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_mdump_cmd_params {int data_dst_size; scalar_t__ mcp_resp; struct mdump_config_stc* p_data_dst; int cmd; } ;
struct ecore_hwfn {int dummy; } ;
typedef int mdump_cmd_params ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct ecore_mdump_cmd_params*,int) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_mdump_cmd_params*) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_3(struct ecore_hwfn *VAR_4, struct ecore_ptt *VAR_5,
      struct mdump_config_stc *VAR_6)
{
 struct ecore_mdump_cmd_params VAR_7;
 enum _ecore_status_t VAR_8;

 FUNC_1(&VAR_7, sizeof(VAR_7));
 VAR_7.cmd = VAR_0;
 VAR_7.p_data_dst = VAR_6;
 VAR_7.data_dst_size = sizeof(*VAR_6);

 VAR_8 = FUNC_2(VAR_4, VAR_5, &VAR_7);
 if (VAR_8 != VAR_1)
  return VAR_8;

 if (VAR_7.mcp_resp != VAR_3) {
  FUNC_0(VAR_4,
   "Failed to get the mdump configuration and logs info [mcp_resp 0x%x]\n",
   VAR_7.mcp_resp);
  VAR_8 = VAR_2;
 }

 return VAR_8;
}
