
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {struct ecore_dev* p_dev; } ;
struct ecore_dev {int ppfid_bitmap; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,char*,int,int) ;
 int VAR_0 ;
 int FUNC_1 (struct ecore_hwfn*) ;
 int VAR_1 ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*) ;

__attribute__((used)) static enum _ecore_status_t FUNC_3(struct ecore_hwfn *VAR_2,
            struct ecore_ptt *VAR_3)
{
 u8 VAR_4 = FUNC_1(VAR_2);
 struct ecore_dev *VAR_5 = VAR_2->p_dev;
 enum _ecore_status_t VAR_6;

 VAR_6 = FUNC_2(VAR_2, VAR_3);
 if (VAR_6 != VAR_1 && VAR_6 != VAR_0)
  return VAR_6;
 else if (VAR_6 == VAR_0)
  VAR_5->ppfid_bitmap = 0x1 << VAR_4;

 if (!(VAR_5->ppfid_bitmap & (0x1 << VAR_4))) {
  FUNC_0(VAR_2,
   "Fix the PPFID bitmap to inculde the native PPFID [native_ppfid_idx %hhd, orig_bitmap 0x%hhx]\n",
   VAR_4, VAR_5->ppfid_bitmap);
  VAR_5->ppfid_bitmap = 0x1 << VAR_4;
 }

 return VAR_1;
}
