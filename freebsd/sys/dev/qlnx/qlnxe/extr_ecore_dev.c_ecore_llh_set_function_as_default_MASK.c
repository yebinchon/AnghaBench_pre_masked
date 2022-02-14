
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int abs_pf_id; TYPE_1__* p_dev; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_2__ {int mf_bits; } ;


 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int VAR_4 ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,int ,int) ;

enum _ecore_status_t
FUNC_3(struct ecore_hwfn *VAR_5,
      struct ecore_ptt *VAR_6)
{
 if (FUNC_1(VAR_1, &VAR_5->p_dev->mf_bits)) {
  FUNC_2(VAR_5, VAR_6,
    VAR_3,
    1 << VAR_5->abs_pf_id / 2);
  FUNC_2(VAR_5, VAR_6, VAR_4, 0);
  return VAR_2;
 } else {
  FUNC_0(VAR_5, 0,
     "This function can't be set as default\n");
  return VAR_0;
 }
}
