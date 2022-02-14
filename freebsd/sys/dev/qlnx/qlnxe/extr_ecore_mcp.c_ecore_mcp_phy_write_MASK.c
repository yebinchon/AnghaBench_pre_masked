
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
struct ecore_dev {scalar_t__ mcp_nvm_resp; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_dev*,int,char*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct ecore_hwfn* FUNC_1 (struct ecore_dev*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__,scalar_t__,scalar_t__*,scalar_t__*,scalar_t__,scalar_t__*) ;
 struct ecore_ptt* FUNC_3 (struct ecore_hwfn*) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_ptt*) ;

enum _ecore_status_t FUNC_5(struct ecore_dev *VAR_5, u32 VAR_6,
      u32 VAR_7, u8 *VAR_8, u32 VAR_9)
{
 struct ecore_hwfn *VAR_10 = FUNC_1(VAR_5);
 struct ecore_ptt *VAR_11;
 u32 VAR_12, VAR_13, VAR_14;
 enum _ecore_status_t VAR_15;

 VAR_11 = FUNC_3(VAR_10);
 if (!VAR_11)
  return VAR_2;

 VAR_14 = (VAR_6 == VAR_3) ? VAR_0 :
   VAR_1;
 VAR_15 = FUNC_2(VAR_10, VAR_11, VAR_14, VAR_7,
      &VAR_12, &VAR_13, VAR_9, (u32 *)VAR_8);
 if (VAR_15 != VAR_4)
  FUNC_0(VAR_5, 0, "MCP command rc = %d\n", VAR_15);
 VAR_5->mcp_nvm_resp = VAR_12;
 FUNC_4(VAR_10, VAR_11);

 return VAR_15;
}
