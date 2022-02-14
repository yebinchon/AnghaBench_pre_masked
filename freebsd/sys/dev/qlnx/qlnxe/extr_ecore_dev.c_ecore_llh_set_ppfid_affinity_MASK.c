
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
struct ecore_dev {int iwarp_affin; } ;
typedef enum ecore_eng { ____Placeholder_ecore_eng } ecore_eng ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_dev*,int,char*,int) ;
 int VAR_0 ;



 int VAR_1 ;
 int FUNC_1 (struct ecore_dev*) ;
 scalar_t__ FUNC_2 (struct ecore_hwfn*) ;
 struct ecore_hwfn* FUNC_3 (struct ecore_dev*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ecore_ptt* VAR_5 ;
 int FUNC_4 (int,int ,int) ;
 int FUNC_5 (struct ecore_dev*,int,int*) ;
 struct ecore_ptt* FUNC_6 (struct ecore_hwfn*) ;
 int FUNC_7 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_8 (struct ecore_hwfn*,struct ecore_ptt*,int) ;
 int FUNC_9 (struct ecore_hwfn*,struct ecore_ptt*,int,int) ;

enum _ecore_status_t FUNC_10(struct ecore_dev *VAR_6,
        u8 VAR_7, enum ecore_eng VAR_8)
{
 struct ecore_hwfn *VAR_9 = FUNC_3(VAR_6);
 struct ecore_ptt *VAR_10 = FUNC_6(VAR_9);
 u32 VAR_11, VAR_12, VAR_13;
 enum _ecore_status_t VAR_14 = VAR_2;
 u8 VAR_15;

 if (VAR_10 == VAR_5)
  return VAR_0;

 if (!FUNC_1(VAR_6))
  goto out;

 VAR_14 = FUNC_5(VAR_6, VAR_7, &VAR_15);
 if (VAR_14 != VAR_2)
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
  break;
 default:
  FUNC_0(VAR_6, 0,
     "Invalid affinity value for ppfid [%d]\n", VAR_8);
  VAR_14 = VAR_1;
  goto out;
 }

 VAR_11 = VAR_3 + VAR_15 * 0x4;
 VAR_12 = FUNC_8(VAR_9, VAR_10, VAR_11);
 FUNC_4(VAR_12, VAR_4, VAR_13);
 FUNC_9(VAR_9, VAR_10, VAR_11, VAR_12);


 if (!VAR_7 && FUNC_2(VAR_9))
  VAR_6->iwarp_affin = (VAR_8 == 128) ? 1 : 0;
out:
 FUNC_7(VAR_9, VAR_10);

 return VAR_14;
}
