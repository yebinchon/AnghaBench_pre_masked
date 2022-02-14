
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
struct ecore_dev {int mcp_nvm_resp; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct ecore_hwfn* FUNC_0 (struct ecore_dev*) ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,int ,int ,int *,int *) ;
 struct ecore_ptt* FUNC_2 (struct ecore_hwfn*) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*) ;

enum _ecore_status_t FUNC_4(struct ecore_dev *VAR_2,
        u32 VAR_3)
{
 struct ecore_hwfn *VAR_4 = FUNC_0(VAR_2);
 struct ecore_ptt *VAR_5;
 u32 VAR_6, VAR_7;
 enum _ecore_status_t VAR_8;

 VAR_5 = FUNC_2(VAR_4);
 if (!VAR_5)
  return VAR_1;
 VAR_8 = FUNC_1(VAR_4, VAR_5, VAR_0, VAR_3,
      &VAR_6, &VAR_7);
 VAR_2->mcp_nvm_resp = VAR_6;
 FUNC_3(VAR_4, VAR_5);

 return VAR_8;
}
