
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {struct ecore_dev* p_dev; } ;
struct ecore_dev {TYPE_1__* p_llh_info; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_2__ {scalar_t__ num_ppfid; } ;


 int VAR_0 ;
 int FUNC_0 (struct ecore_dev*,scalar_t__,scalar_t__*) ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__,int ,int ) ;

enum _ecore_status_t FUNC_2(struct ecore_hwfn *VAR_1,
      struct ecore_ptt *VAR_2, u32 VAR_3,
      u32 VAR_4)
{
 struct ecore_dev *VAR_5 = VAR_1->p_dev;
 u8 VAR_6, VAR_7;
 enum _ecore_status_t VAR_8;

 for (VAR_6 = 0; VAR_6 < VAR_5->p_llh_info->num_ppfid; VAR_6++) {
  VAR_8 = FUNC_0(VAR_5, VAR_6, &VAR_7);
  if (VAR_8 != VAR_0)
   return VAR_8;

  FUNC_1(VAR_1, VAR_2, VAR_7, VAR_3, VAR_4);
 }

 return VAR_0;
}
