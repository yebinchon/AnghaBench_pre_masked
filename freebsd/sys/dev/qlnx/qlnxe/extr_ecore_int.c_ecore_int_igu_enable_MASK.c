
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int b_int_requested; int b_int_enabled; } ;
typedef enum ecore_int_mode { ____Placeholder_ecore_int_mode } ecore_int_mode ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct ecore_hwfn*) ;
 int FUNC_2 (struct ecore_hwfn*) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_ptt*,int) ;

enum _ecore_status_t
FUNC_5(struct ecore_hwfn *VAR_3, struct ecore_ptt *VAR_4,
     enum ecore_int_mode VAR_5)
{
 enum _ecore_status_t VAR_6 = VAR_2;

 FUNC_3(VAR_3, VAR_4);

 if ((VAR_5 != VAR_0) || FUNC_1(VAR_3)) {
  VAR_6 = FUNC_2(VAR_3);
  if (VAR_6 != VAR_2) {
   FUNC_0(VAR_3, 1, "Slowpath IRQ request failed\n");
   return VAR_1;
  }
  VAR_3->b_int_requested = 1;
 }


 FUNC_4(VAR_3, VAR_4, VAR_5);

 VAR_3->b_int_enabled = 1;

 return VAR_6;
}
