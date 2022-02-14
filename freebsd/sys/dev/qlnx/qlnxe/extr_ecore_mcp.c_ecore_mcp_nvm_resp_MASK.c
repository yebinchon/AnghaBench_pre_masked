
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
struct ecore_dev {int mcp_nvm_resp; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 struct ecore_hwfn* FUNC_0 (struct ecore_dev*) ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,int) ;
 struct ecore_ptt* FUNC_2 (struct ecore_hwfn*) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*) ;

enum _ecore_status_t FUNC_4(struct ecore_dev *VAR_2, u8 *VAR_3)
{
 struct ecore_hwfn *VAR_4 = FUNC_0(VAR_2);
 struct ecore_ptt *VAR_5;

 VAR_5 = FUNC_2(VAR_4);
 if (!VAR_5)
  return VAR_0;

 FUNC_1(VAR_3, &VAR_2->mcp_nvm_resp, sizeof(VAR_2->mcp_nvm_resp));
 FUNC_3(VAR_4, VAR_5);

 return VAR_1;
}
