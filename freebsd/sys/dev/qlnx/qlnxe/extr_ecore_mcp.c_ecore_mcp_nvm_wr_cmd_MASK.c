
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef void* u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_mcp_mb_params {void** p_data_src; void* mcp_param; void* mcp_resp; scalar_t__ data_src_size; void* param; void* cmd; } ;
struct ecore_hwfn {int dummy; } ;
typedef int mb_params ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 int FUNC_0 (struct ecore_mcp_mb_params*,int) ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_mcp_mb_params*) ;

enum _ecore_status_t FUNC_2(struct ecore_hwfn *VAR_1,
       struct ecore_ptt *VAR_2,
       u32 VAR_3,
       u32 VAR_4,
       u32 *VAR_5,
       u32 *VAR_6,
       u32 VAR_7,
       u32 *VAR_8)
{
 struct ecore_mcp_mb_params VAR_9;
 enum _ecore_status_t VAR_10;

 FUNC_0(&VAR_9, sizeof(VAR_9));
 VAR_9.cmd = VAR_3;
 VAR_9.param = VAR_4;
 VAR_9.p_data_src = VAR_8;
 VAR_9.data_src_size = (u8) VAR_7;
 VAR_10 = FUNC_1(VAR_1, VAR_2, &VAR_9);
 if (VAR_10 != VAR_0)
  return VAR_10;

 *VAR_5 = VAR_9.mcp_resp;
 *VAR_6 = VAR_9.mcp_param;

 return VAR_0;
}
