
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ecore_resc_alloc_out_params {int res_id; int resc_start; int resc_num; int mcp_resp; int cmd; } ;
struct ecore_resc_alloc_in_params {int res_id; int resc_start; int resc_num; int mcp_resp; int cmd; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
typedef int out_params ;
typedef int in_params ;
typedef enum ecore_resources { ____Placeholder_ecore_resources } ecore_resources ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ecore_resc_alloc_out_params*,int) ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_resc_alloc_out_params*,struct ecore_resc_alloc_out_params*) ;

enum _ecore_status_t
FUNC_2(struct ecore_hwfn *VAR_3, struct ecore_ptt *VAR_4,
   enum ecore_resources VAR_5, u32 *VAR_6,
   u32 *VAR_7, u32 *VAR_8)
{
 struct ecore_resc_alloc_out_params VAR_9;
 struct ecore_resc_alloc_in_params VAR_10;
 enum _ecore_status_t VAR_11;

 FUNC_0(&VAR_10, sizeof(VAR_10));
 VAR_10.cmd = VAR_0;
 VAR_10.res_id = VAR_5;
 FUNC_0(&VAR_9, sizeof(VAR_9));
 VAR_11 = FUNC_1(VAR_3, VAR_4, &VAR_10,
        &VAR_9);
 if (VAR_11 != VAR_1)
  return VAR_11;

 *VAR_6 = VAR_9.mcp_resp;

 if (*VAR_6 == VAR_2) {
  *VAR_7 = VAR_9.resc_num;
  *VAR_8 = VAR_9.resc_start;
 }

 return VAR_1;
}
