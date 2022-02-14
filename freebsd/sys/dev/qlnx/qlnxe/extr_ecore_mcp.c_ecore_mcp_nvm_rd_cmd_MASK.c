
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef void* u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_mcp_mb_params {int data_dst_size; void* mcp_param; void* mcp_resp; int * p_data_dst; void* param; void* cmd; } ;
struct ecore_hwfn {int dummy; } ;
typedef int mb_params ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void**,int *,void*) ;
 int FUNC_1 (struct ecore_mcp_mb_params*,int) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_mcp_mb_params*) ;

enum _ecore_status_t FUNC_3(struct ecore_hwfn *VAR_2,
       struct ecore_ptt *VAR_3,
       u32 VAR_4,
       u32 VAR_5,
       u32 *VAR_6,
       u32 *VAR_7,
       u32 *VAR_8,
       u32 *VAR_9)
{
 struct ecore_mcp_mb_params VAR_10;
 u8 VAR_11[VAR_1];
 enum _ecore_status_t VAR_12;

 FUNC_1(&VAR_10, sizeof(VAR_10));
 VAR_10.cmd = VAR_4;
 VAR_10.param = VAR_5;
 VAR_10.p_data_dst = VAR_11;


 VAR_10.data_dst_size = VAR_1;

 VAR_12 = FUNC_2(VAR_2, VAR_3, &VAR_10);
 if (VAR_12 != VAR_0)
  return VAR_12;

 *VAR_6 = VAR_10.mcp_resp;
 *VAR_7 = VAR_10.mcp_param;

 *VAR_8 = *VAR_7;
 FUNC_0(VAR_9, VAR_11, *VAR_8);

 return VAR_0;
}
