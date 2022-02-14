
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
struct ecore_dev {int mf_bits; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 scalar_t__ FUNC_0 (struct ecore_dev*) ;
 struct ecore_hwfn* FUNC_1 (struct ecore_dev*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct ecore_ptt* VAR_4 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct ecore_dev*,scalar_t__,scalar_t__*) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__,scalar_t__) ;
 int FUNC_6 (struct ecore_dev*,scalar_t__) ;
 struct ecore_ptt* FUNC_7 (struct ecore_hwfn*) ;
 int FUNC_8 (struct ecore_hwfn*,struct ecore_ptt*) ;

void FUNC_9(struct ecore_dev *VAR_5, u8 VAR_6)
{
 struct ecore_hwfn *VAR_7 = FUNC_1(VAR_5);
 struct ecore_ptt *VAR_8 = FUNC_7(VAR_7);
 u8 VAR_9, VAR_10;
 enum _ecore_status_t VAR_11 = VAR_2;

 if (VAR_8 == VAR_4)
  return;

 if (!FUNC_2(VAR_1, &VAR_5->mf_bits) &&
     !FUNC_2(VAR_0, &VAR_5->mf_bits))
  goto out;

 VAR_11 = FUNC_3(VAR_5, VAR_6, &VAR_10);
 if (VAR_11 != VAR_2)
  goto out;

 VAR_11 = FUNC_6(VAR_5, VAR_6);
 if (VAR_11 != VAR_2)
  goto out;

 for (VAR_9 = 0; VAR_9 < VAR_3;
      VAR_9++) {
  if (FUNC_0(VAR_5))
   VAR_11 = FUNC_4(VAR_7, VAR_8,
       VAR_10, VAR_9);
  else
   VAR_11 = FUNC_5(VAR_7, VAR_8,
       VAR_10, VAR_9);
  if (VAR_11 != VAR_2)
   goto out;
 }
out:
 FUNC_8(VAR_7, VAR_8);
}
