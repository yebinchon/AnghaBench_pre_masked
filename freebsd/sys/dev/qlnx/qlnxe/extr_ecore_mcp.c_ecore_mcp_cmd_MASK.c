
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_mcp_mb_params {scalar_t__ mcp_resp; scalar_t__ mcp_param; scalar_t__ param; scalar_t__ cmd; } ;
struct ecore_hwfn {size_t port_id; int p_dev; } ;
typedef int mb_params ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ecore_hwfn*,int ,char*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct ecore_mcp_mb_params*,int) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_mcp_mb_params*) ;
 int VAR_3 ;
 int * VAR_4 ;

enum _ecore_status_t FUNC_4(struct ecore_hwfn *VAR_5,
       struct ecore_ptt *VAR_6, u32 VAR_7, u32 VAR_8,
       u32 *VAR_9, u32 *VAR_10)
{
 struct ecore_mcp_mb_params VAR_11;
 enum _ecore_status_t VAR_12;


 if (FUNC_0(VAR_5->p_dev)) {
  if (VAR_7 == VAR_0) {
   VAR_3--;
   VAR_4[VAR_5->port_id]--;
   FUNC_1(VAR_5, VAR_1, "Unload cnt: 0x%x\n",
       VAR_3);
  }
  return VAR_2;
 }


 FUNC_2(&VAR_11, sizeof(VAR_11));
 VAR_11.cmd = VAR_7;
 VAR_11.param = VAR_8;
 VAR_12 = FUNC_3(VAR_5, VAR_6, &VAR_11);
 if (VAR_12 != VAR_2)
  return VAR_12;

 *VAR_9 = VAR_11.mcp_resp;
 *VAR_10 = VAR_11.mcp_param;

 return VAR_2;
}
