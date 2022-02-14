
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct ecore_llh_info {struct ecore_llh_filter_info** pp_filters; } ;
struct ecore_llh_filter_info {int b_enabled; } ;
struct ecore_dev {struct ecore_llh_info* p_llh_info; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (struct ecore_dev*,size_t,int ,char*) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_1(struct ecore_dev *VAR_3, u8 VAR_4,
         u8 *VAR_5)
{
 struct ecore_llh_info *VAR_6 = VAR_3->p_llh_info;
 struct ecore_llh_filter_info *VAR_7;
 enum _ecore_status_t VAR_8;
 u8 VAR_9;

 VAR_8 = FUNC_0(VAR_3, VAR_4, 0, "get_free_idx");
 if (VAR_8 != VAR_1)
  return VAR_8;

 *VAR_5 = VAR_0;

 VAR_7 = VAR_6->pp_filters[VAR_4];
 for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
  if (!VAR_7[VAR_9].b_enabled) {
   *VAR_5 = VAR_9;
   break;
  }
 }

 return VAR_1;
}
