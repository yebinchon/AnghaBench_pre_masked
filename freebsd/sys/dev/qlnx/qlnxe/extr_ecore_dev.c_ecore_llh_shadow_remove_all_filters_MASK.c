
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct ecore_llh_info {struct ecore_llh_filter_info** pp_filters; } ;
struct ecore_llh_filter_info {int dummy; } ;
struct ecore_dev {struct ecore_llh_info* p_llh_info; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ecore_llh_filter_info*,int) ;
 int FUNC_1 (struct ecore_dev*,size_t,int ,char*) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_2(struct ecore_dev *VAR_2, u8 VAR_3)
{
 struct ecore_llh_info *VAR_4 = VAR_2->p_llh_info;
 struct ecore_llh_filter_info *VAR_5;
 enum _ecore_status_t VAR_6;

 VAR_6 = FUNC_1(VAR_2, VAR_3, 0, "remove_all");
 if (VAR_6 != VAR_0)
  return VAR_6;

 VAR_5 = VAR_4->pp_filters[VAR_3];
 FUNC_0(VAR_5,
        VAR_1 * sizeof(*VAR_5));

 return VAR_0;
}
