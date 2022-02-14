
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
struct ecore_dev {TYPE_1__* p_llh_info; } ;
typedef enum ecore_eng { ____Placeholder_ecore_eng } ecore_eng ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_2__ {scalar_t__ num_ppfid; } ;


 int FUNC_0 (struct ecore_dev*,int,char*,int) ;
 int VAR_0 ;



 int VAR_1 ;
 int FUNC_1 (struct ecore_dev*) ;
 struct ecore_hwfn* FUNC_2 (struct ecore_dev*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ecore_ptt* VAR_6 ;
 int FUNC_3 (int,int ,int) ;
 int FUNC_4 (struct ecore_dev*,scalar_t__,scalar_t__*) ;
 struct ecore_ptt* FUNC_5 (struct ecore_hwfn*) ;
 int FUNC_6 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_7 (struct ecore_hwfn*,struct ecore_ptt*,int) ;
 int FUNC_8 (struct ecore_hwfn*,struct ecore_ptt*,int,int) ;

enum _ecore_status_t FUNC_9(struct ecore_dev *VAR_7,
       enum ecore_eng VAR_8)
{
 struct ecore_hwfn *VAR_9 = FUNC_2(VAR_7);
 struct ecore_ptt *VAR_10 = FUNC_5(VAR_9);
 u32 VAR_11, VAR_12, VAR_13;
 enum _ecore_status_t VAR_14 = VAR_2;
 u8 VAR_15, VAR_16;

 if (VAR_10 == VAR_6)
  return VAR_0;

 if (!FUNC_1(VAR_7))
  goto out;

 switch (VAR_8) {
 case 129:
  VAR_13 = 0;
  break;
 case 128:
  VAR_13 = 1;
  break;
 case 130:
  VAR_13 = 2;
  FUNC_8(VAR_9, VAR_10, VAR_3,
    0xf );
  break;
 default:
  FUNC_0(VAR_7, 0,
     "Invalid affinity value for RoCE [%d]\n", VAR_8);
  VAR_14 = VAR_1;
  goto out;
 }

 for (VAR_15 = 0; VAR_15 < VAR_7->p_llh_info->num_ppfid; VAR_15++) {
  VAR_14 = FUNC_4(VAR_7, VAR_15, &VAR_16);
  if (VAR_14 != VAR_2)
   goto out;

  VAR_11 = VAR_4 + VAR_16 * 0x4;
  VAR_12 = FUNC_7(VAR_9, VAR_10, VAR_11);
  FUNC_3(VAR_12, VAR_5, VAR_13);
  FUNC_8(VAR_9, VAR_10, VAR_11, VAR_12);
 }
out:
 FUNC_6(VAR_9, VAR_10);

 return VAR_14;
}
