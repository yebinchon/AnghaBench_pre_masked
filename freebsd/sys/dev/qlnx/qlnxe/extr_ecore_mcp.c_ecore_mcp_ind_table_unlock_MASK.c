
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_resc_unlock_params {int resource; } ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 int FUNC_0 (struct ecore_resc_unlock_params*,int) ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,struct ecore_resc_unlock_params*) ;

enum _ecore_status_t
FUNC_2(struct ecore_hwfn *VAR_1, struct ecore_ptt *VAR_2)
{
 struct ecore_resc_unlock_params VAR_3;
 enum _ecore_status_t VAR_4;

 FUNC_0(&VAR_3,
        sizeof(struct ecore_resc_unlock_params));
 VAR_3.resource = VAR_0;
 VAR_4 = FUNC_1(VAR_1, VAR_2,
      &VAR_3);
 return VAR_4;
}
