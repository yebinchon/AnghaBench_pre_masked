
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ecore_llh_filter {int dummy; } ecore_llh_filter ;
typedef size_t u8 ;
struct ecore_llh_info {struct ecore_llh_filter_info** pp_filters; } ;
struct ecore_llh_filter_info {int filter; } ;
struct ecore_dev {struct ecore_llh_info* p_llh_info; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (union ecore_llh_filter*,int *,int) ;
 int FUNC_1 (struct ecore_dev*,size_t,int ,char*) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_2(struct ecore_dev *VAR_3, u8 VAR_4,
          union ecore_llh_filter *VAR_5,
          u8 *VAR_6)
{
 struct ecore_llh_info *VAR_7 = VAR_3->p_llh_info;
 struct ecore_llh_filter_info *VAR_8;
 enum _ecore_status_t VAR_9;
 u8 VAR_10;

 VAR_9 = FUNC_1(VAR_3, VAR_4, 0, "search");
 if (VAR_9 != VAR_1)
  return VAR_9;

 *VAR_6 = VAR_0;

 VAR_8 = VAR_7->pp_filters[VAR_4];
 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
  if (!FUNC_0(VAR_5, &VAR_8[VAR_10].filter,
     sizeof(*VAR_5))) {
   *VAR_6 = VAR_10;
   break;
  }
 }

 return VAR_1;
}
