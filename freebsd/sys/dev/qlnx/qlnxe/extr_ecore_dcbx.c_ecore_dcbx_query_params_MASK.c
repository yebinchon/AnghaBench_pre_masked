
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int p_dev; } ;
struct ecore_dcbx_get {int dummy; } ;
typedef enum ecore_mib_read_type { ____Placeholder_ecore_mib_read_type } ecore_mib_read_type ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_dcbx_get*) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_dcbx_get*,int) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,int) ;
 struct ecore_ptt* FUNC_4 (struct ecore_hwfn*) ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_ptt*) ;

enum _ecore_status_t FUNC_6(struct ecore_hwfn *VAR_3,
          struct ecore_dcbx_get *VAR_4,
          enum ecore_mib_read_type VAR_5)
{
 struct ecore_ptt *VAR_6;
 enum _ecore_status_t VAR_7;

 if (FUNC_0(VAR_3->p_dev))
  return VAR_0;

 VAR_6 = FUNC_4(VAR_3);
 if (!VAR_6)
  return VAR_2;

 VAR_7 = FUNC_3(VAR_3, VAR_6, VAR_5);
 if (VAR_7 != VAR_1)
  goto out;

 FUNC_1(VAR_3, VAR_4);

 VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_5);

out:
 FUNC_5(VAR_3, VAR_6);
 return VAR_7;
}
