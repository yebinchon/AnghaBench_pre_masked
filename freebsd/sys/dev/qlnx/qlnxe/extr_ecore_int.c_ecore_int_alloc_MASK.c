
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int p_dev; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_2 (struct ecore_hwfn*) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*) ;

enum _ecore_status_t FUNC_4(struct ecore_hwfn *VAR_1,
         struct ecore_ptt *VAR_2)
{
 enum _ecore_status_t VAR_3 = VAR_0;

 VAR_3 = FUNC_2(VAR_1);
 if (VAR_3 != VAR_0) {
  FUNC_0(VAR_1->p_dev, "Failed to allocate sp dpc mem\n");
  return VAR_3;
 }

 VAR_3 = FUNC_3(VAR_1, VAR_2);
 if (VAR_3 != VAR_0) {
  FUNC_0(VAR_1->p_dev, "Failed to allocate sp sb mem\n");
  return VAR_3;
 }

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (VAR_3 != VAR_0)
  FUNC_0(VAR_1->p_dev, "Failed to allocate sb attn mem\n");

 return VAR_3;
}
