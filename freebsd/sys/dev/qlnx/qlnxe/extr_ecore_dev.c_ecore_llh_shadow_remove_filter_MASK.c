
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ecore_llh_filter {int dummy; } ecore_llh_filter ;
typedef scalar_t__ u8 ;
typedef int u32 ;
struct ecore_dev {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_dev*,int,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ecore_dev*,scalar_t__,scalar_t__,int *) ;
 int FUNC_2 (struct ecore_dev*,scalar_t__,union ecore_llh_filter*,scalar_t__*) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_3(struct ecore_dev *VAR_3, u8 VAR_4,
          union ecore_llh_filter *VAR_5,
          u8 *VAR_6, u32 *VAR_7)
{
 enum _ecore_status_t VAR_8;

 VAR_8 = FUNC_2(VAR_3, VAR_4, VAR_5,
         VAR_6);
 if (VAR_8 != VAR_2)
  return VAR_8;


 if (*VAR_6 == VAR_1) {
  FUNC_0(VAR_3, 0,
     "Failed to find a filter in the LLH shadow\n");
  return VAR_0;
 }

 return FUNC_1(VAR_3, VAR_4, *VAR_6,
      VAR_7);
}
