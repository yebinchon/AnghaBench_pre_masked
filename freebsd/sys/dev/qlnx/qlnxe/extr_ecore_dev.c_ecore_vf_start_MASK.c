
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_hwfn {int b_int_enabled; } ;
struct ecore_hw_init_params {scalar_t__ p_tunn; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 int FUNC_0 (struct ecore_hwfn*,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static enum _ecore_status_t FUNC_2(struct ecore_hwfn *VAR_1,
        struct ecore_hw_init_params *VAR_2)
{
 if (VAR_2->p_tunn) {
  FUNC_1(VAR_2->p_tunn);
  FUNC_0(VAR_1, VAR_2->p_tunn);
 }

 VAR_1->b_int_enabled = 1;

 return VAR_0;
}
