
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef void* u32 ;
struct mcp_wwn {int data_src_size; struct mcp_wwn* p_data_src; int cmd; void* wwn_lower; void* wwn_upper; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_mcp_mb_params {int data_src_size; struct ecore_mcp_mb_params* p_data_src; int cmd; void* wwn_lower; void* wwn_upper; } ;
struct ecore_hwfn {int dummy; } ;
typedef int mb_params ;
typedef int fabric_name ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mcp_wwn*,int) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,struct mcp_wwn*) ;

enum _ecore_status_t
FUNC_3(struct ecore_hwfn *VAR_2,
      struct ecore_ptt *VAR_3, u8 *VAR_4)
{
 struct ecore_mcp_mb_params VAR_5;
 struct mcp_wwn VAR_6;
 enum _ecore_status_t VAR_7;

 FUNC_1(&VAR_6, sizeof(VAR_6));
 VAR_6.wwn_upper = *(u32 *)VAR_4;
 VAR_6.wwn_lower = *(u32 *)(VAR_4 + 4);

 FUNC_1(&VAR_5, sizeof(VAR_5));
 VAR_5.cmd = VAR_0;
 VAR_5.p_data_src = &VAR_6;
 VAR_5.data_src_size = sizeof(VAR_6);
 VAR_7 = FUNC_2(VAR_2, VAR_3, &VAR_5);
 if (VAR_7 != VAR_1)
  FUNC_0(VAR_2, "Failed to update fcoe wwn, rc = %d\n", VAR_7);

 return VAR_7;
}
