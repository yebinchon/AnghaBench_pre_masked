
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ecore_llh_filter {int dummy; } ecore_llh_filter ;
typedef scalar_t__ u8 ;
typedef int u32 ;
struct ecore_dev {int dummy; } ;
typedef enum ecore_llh_filter_type { ____Placeholder_ecore_llh_filter_type } ecore_llh_filter_type ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_dev*,int,char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ecore_dev*,scalar_t__,scalar_t__,int,union ecore_llh_filter*,int *) ;
 int FUNC_2 (struct ecore_dev*,scalar_t__,scalar_t__*) ;
 int FUNC_3 (struct ecore_dev*,scalar_t__,union ecore_llh_filter*,scalar_t__*) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_4(struct ecore_dev *VAR_3, u8 VAR_4,
       enum ecore_llh_filter_type VAR_5,
       union ecore_llh_filter *VAR_6,
       u8 *VAR_7, u32 *VAR_8)
{
 enum _ecore_status_t VAR_9;


 VAR_9 = FUNC_3(VAR_3, VAR_4, VAR_6,
         VAR_7);
 if (VAR_9 != VAR_2)
  return VAR_9;


 if (*VAR_7 == VAR_0) {
  VAR_9 = FUNC_2(VAR_3, VAR_4, VAR_7);
  if (VAR_9 != VAR_2)
   return VAR_9;
 }


 if (*VAR_7 == VAR_0) {
  FUNC_0(VAR_3, 0,
     "Failed to find an empty LLH filter to utilize [ppfid %d]\n",
     VAR_4);
  return VAR_1;
 }

 return FUNC_1(VAR_3, VAR_4, *VAR_7, VAR_5,
          VAR_6, VAR_8);
}
