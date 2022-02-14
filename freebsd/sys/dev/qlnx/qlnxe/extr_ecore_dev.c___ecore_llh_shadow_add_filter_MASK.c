
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ecore_llh_filter {int dummy; } ecore_llh_filter ;
typedef size_t u8 ;
typedef scalar_t__ u32 ;
struct ecore_llh_info {struct ecore_llh_filter_info** pp_filters; } ;
struct ecore_llh_filter_info {int b_enabled; int type; scalar_t__ ref_cnt; int filter; } ;
struct ecore_dev {struct ecore_llh_info* p_llh_info; } ;
typedef enum ecore_llh_filter_type { ____Placeholder_ecore_llh_filter_type } ecore_llh_filter_type ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 int FUNC_0 (int *,union ecore_llh_filter*,int) ;
 int FUNC_1 (struct ecore_dev*,size_t,size_t,char*) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_2(struct ecore_dev *VAR_1, u8 VAR_2, u8 VAR_3,
         enum ecore_llh_filter_type VAR_4,
         union ecore_llh_filter *VAR_5, u32 *VAR_6)
{
 struct ecore_llh_info *VAR_7 = VAR_1->p_llh_info;
 struct ecore_llh_filter_info *VAR_8;
 enum _ecore_status_t VAR_9;

 VAR_9 = FUNC_1(VAR_1, VAR_2, VAR_3, "add");
 if (VAR_9 != VAR_0)
  return VAR_9;

 VAR_8 = VAR_7->pp_filters[VAR_2];
 if (!VAR_8[VAR_3].ref_cnt) {
  VAR_8[VAR_3].b_enabled = 1;
  VAR_8[VAR_3].type = VAR_4;
  FUNC_0(&VAR_8[VAR_3].filter, VAR_5,
       sizeof(VAR_8[VAR_3].filter));
 }

 *VAR_6 = ++VAR_8[VAR_3].ref_cnt;

 return VAR_0;
}
