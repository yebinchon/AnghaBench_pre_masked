
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct ecore_dev {TYPE_1__* p_llh_info; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;
struct TYPE_2__ {scalar_t__ num_ppfid; } ;


 int VAR_0 ;
 int FUNC_0 (struct ecore_dev*,scalar_t__) ;

enum _ecore_status_t FUNC_1(struct ecore_dev *VAR_1)
{
 u8 VAR_2;
 enum _ecore_status_t VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_1->p_llh_info->num_ppfid; VAR_2++) {
  VAR_3 = FUNC_0(VAR_1, VAR_2);
  if (VAR_3 != VAR_0)
   return VAR_3;
 }

 return VAR_0;
}
