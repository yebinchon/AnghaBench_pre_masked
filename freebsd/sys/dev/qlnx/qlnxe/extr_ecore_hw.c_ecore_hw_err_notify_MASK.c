
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ecore_hwfn {TYPE_1__* p_dev; } ;
typedef enum ecore_hw_err_type { ____Placeholder_ecore_hw_err_type } ecore_hw_err_type ;
struct TYPE_2__ {scalar_t__ recov_in_prog; } ;


 int FUNC_0 (struct ecore_hwfn*,int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ecore_hwfn*,int) ;

void FUNC_2(struct ecore_hwfn *VAR_2,
    enum ecore_hw_err_type VAR_3)
{

 if (VAR_2->p_dev->recov_in_prog && VAR_3 != VAR_0) {
  FUNC_0(VAR_2, VAR_1,
      "Recovery is in progress. Avoid notifying about HW error %d.\n",
      VAR_3);
  return;
 }

 FUNC_1(VAR_2, VAR_3);
}
