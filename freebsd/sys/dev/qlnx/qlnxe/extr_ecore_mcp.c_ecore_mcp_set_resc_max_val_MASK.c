
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ecore_resc_alloc_out_params {int res_id; int mcp_resp; int resc_max_val; int cmd; } ;
struct ecore_resc_alloc_in_params {int res_id; int mcp_resp; int resc_max_val; int cmd; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
typedef int out_params ;
typedef int in_params ;
typedef enum ecore_resources { ____Placeholder_ecore_resources } ecore_resources ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ecore_resc_alloc_out_params*,int) ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_resc_alloc_out_params*,struct ecore_resc_alloc_out_params*) ;

enum _ecore_status_t
FUNC_2(struct ecore_hwfn *VAR_2, struct ecore_ptt *VAR_3,
      enum ecore_resources VAR_4, u32 VAR_5,
      u32 *VAR_6)
{
 struct ecore_resc_alloc_out_params VAR_7;
 struct ecore_resc_alloc_in_params VAR_8;
 enum _ecore_status_t VAR_9;

 FUNC_0(&VAR_8, sizeof(VAR_8));
 VAR_8.cmd = VAR_0;
 VAR_8.res_id = VAR_4;
 VAR_8.resc_max_val = VAR_5;
 FUNC_0(&VAR_7, sizeof(VAR_7));
 VAR_9 = FUNC_1(VAR_2, VAR_3, &VAR_8,
        &VAR_7);
 if (VAR_9 != VAR_1)
  return VAR_9;

 *VAR_6 = VAR_7.mcp_resp;

 return VAR_1;
}
