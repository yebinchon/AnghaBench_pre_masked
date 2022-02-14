
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union drv_union_data {int dummy; } drv_union_data ;
typedef int u64 ;
struct ecore_ptt {int dummy; } ;
struct ecore_mcp_mb_params {union drv_union_data* p_data_dst; int cmd; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 int FUNC_0 (struct ecore_mcp_mb_params*,int ,int) ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_mcp_mb_params*) ;

enum _ecore_status_t FUNC_2(struct ecore_hwfn *VAR_1,
           struct ecore_ptt *VAR_2,
           u64 *VAR_3)
{
 struct ecore_mcp_mb_params VAR_4;

 FUNC_0(&VAR_4, 0, sizeof(struct ecore_mcp_mb_params));
 VAR_4.cmd = VAR_0;
 VAR_4.p_data_dst = (union drv_union_data *)VAR_3;

 return FUNC_1(VAR_1, VAR_2, &VAR_4);
}
