
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef scalar_t__ u32 ;
struct ecore_llh_info {struct ecore_llh_filter_info** pp_filters; } ;
struct ecore_llh_filter_info {scalar_t__ ref_cnt; } ;
struct ecore_dev {struct ecore_llh_info* p_llh_info; } ;
typedef int p_filters ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_dev*,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct ecore_llh_filter_info*,int) ;
 int FUNC_2 (struct ecore_dev*,size_t,size_t,char*) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_3(struct ecore_dev *VAR_2, u8 VAR_3,
     u8 VAR_4, u32 *VAR_5)
{
 struct ecore_llh_info *VAR_6 = VAR_2->p_llh_info;
 struct ecore_llh_filter_info *VAR_7;
 enum _ecore_status_t VAR_8;

 VAR_8 = FUNC_2(VAR_2, VAR_3, VAR_4, "remove");
 if (VAR_8 != VAR_1)
  return VAR_8;

 VAR_7 = VAR_6->pp_filters[VAR_3];
 if (!VAR_7[VAR_4].ref_cnt) {
  FUNC_0(VAR_2, 0,
     "LLH shadow: trying to remove a filter with ref_cnt=0\n");
  return VAR_0;
 }

 *VAR_5 = --VAR_7[VAR_4].ref_cnt;
 if (!VAR_7[VAR_4].ref_cnt)
  FUNC_1(&VAR_7[VAR_4],
         sizeof(VAR_7[VAR_4]));

 return VAR_1;
}
