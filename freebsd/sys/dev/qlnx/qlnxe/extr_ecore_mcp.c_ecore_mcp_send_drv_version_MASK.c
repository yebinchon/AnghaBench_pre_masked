
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_mcp_mb_params {int data_src_size; struct ecore_mcp_mb_params* p_data_src; int cmd; int * name; int version; } ;
struct ecore_mcp_drv_version {int * name; int version; } ;
struct ecore_hwfn {int p_dev; } ;
struct drv_version_stc {int data_src_size; struct drv_version_stc* p_data_src; int cmd; int * name; int version; } ;
typedef int mb_params ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
typedef int drv_version ;
typedef int OSAL_BE32 ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ecore_hwfn*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ecore_mcp_mb_params*,int) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_mcp_mb_params*) ;

enum _ecore_status_t
FUNC_5(struct ecore_hwfn *VAR_3, struct ecore_ptt *VAR_4,
      struct ecore_mcp_drv_version *VAR_5)
{
 struct ecore_mcp_mb_params VAR_6;
 struct drv_version_stc VAR_7;
 u32 VAR_8, VAR_9;
 void *VAR_10;
 OSAL_BE32 VAR_11;
 enum _ecore_status_t VAR_12;


 if (FUNC_0(VAR_3->p_dev))
  return VAR_1;


 FUNC_3(&VAR_7, sizeof(VAR_7));
 VAR_7.version = VAR_5->version;
 VAR_8 = (VAR_2 - 4) / 4;
 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {

  VAR_10 = &VAR_5->name[VAR_9 * sizeof(u32)];
  VAR_11 = FUNC_2(*(u32 *)VAR_10);
  *(u32 *)&VAR_7.name[VAR_9 * sizeof(u32)] = VAR_11;
 }

 FUNC_3(&VAR_6, sizeof(VAR_6));
 VAR_6.cmd = VAR_0;
 VAR_6.p_data_src = &VAR_7;
 VAR_6.data_src_size = sizeof(VAR_7);
 VAR_12 = FUNC_4(VAR_3, VAR_4, &VAR_6);
 if (VAR_12 != VAR_1)
  FUNC_1(VAR_3, "MCP response failure, aborting\n");

 return VAR_12;
}
