
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
struct ecore_dev {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ecore_dev*) ;
 struct ecore_hwfn* FUNC_1 (struct ecore_dev*) ;
 struct ecore_ptt* VAR_1 ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,int ) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,int ) ;
 struct ecore_ptt* FUNC_4 (struct ecore_hwfn*) ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_ptt*) ;

enum _ecore_status_t FUNC_6(struct ecore_dev *VAR_2, u8 VAR_3)
{
 struct ecore_hwfn *VAR_4 = FUNC_1(VAR_2);
 struct ecore_ptt *VAR_5 = FUNC_4(VAR_4);
 enum _ecore_status_t VAR_6;

 if (VAR_5 == VAR_1)
  return VAR_0;

 if (FUNC_0(VAR_2))
  VAR_6 = FUNC_2(VAR_4, VAR_5, VAR_3);
 else
  VAR_6 = FUNC_3(VAR_4, VAR_5, VAR_3);

 FUNC_5(VAR_4, VAR_5);

 return VAR_6;
}
