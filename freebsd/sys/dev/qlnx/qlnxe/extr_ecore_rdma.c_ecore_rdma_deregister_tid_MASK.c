
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,int,char*,int ,scalar_t__) ;
 int FUNC_1 (struct ecore_hwfn*,int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*) ;
 struct ecore_ptt* FUNC_4 (struct ecore_hwfn*) ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_6 (struct ecore_hwfn*,int ,scalar_t__*) ;

enum _ecore_status_t FUNC_7(void *VAR_9,
            u32 VAR_10)
{
 enum _ecore_status_t VAR_11;
 u8 VAR_12;
 struct ecore_ptt *VAR_13;
 struct ecore_hwfn *VAR_14 = (struct ecore_hwfn *)VAR_9;


 VAR_11 = FUNC_6(VAR_14, VAR_10, &VAR_12);
 if (VAR_11 != VAR_3)
  return VAR_11;

 if (VAR_12 != VAR_7)
  goto done;
 FUNC_2(VAR_2);
 VAR_11 = FUNC_6(VAR_14, VAR_10, &VAR_12);
 if (VAR_11 != VAR_3)
  return VAR_11;

 if (VAR_12 != VAR_7)
  goto done;


 VAR_13 = FUNC_4(VAR_14);
 if (!VAR_13)
  return VAR_4;

 VAR_11 = FUNC_3(VAR_14, VAR_13);
 if (VAR_11 != VAR_3) {
  FUNC_5(VAR_14, VAR_13);
  return VAR_11;
 }

 FUNC_5(VAR_14, VAR_13);

 VAR_11 = FUNC_6(VAR_14, VAR_10, &VAR_12);
 if (VAR_11 != VAR_3)
  return VAR_11;

done:
 if (VAR_12 == VAR_8) {
  FUNC_1(VAR_14, VAR_1, "De-registered itid=%d\n",
      VAR_10);
  return VAR_3;
 } else if (VAR_12 == VAR_6) {






  FUNC_0(VAR_14, 0, "itid=%d, fw_ret_code=%d\n", VAR_10,
     VAR_12);
  return VAR_0;
 } else {
  FUNC_0(VAR_14, 1,
     "deregister failed after three attempts. itid=%d, fw_ret_code=%d\n",
     VAR_10, VAR_12);
  return VAR_5;
 }
}
