
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct ecore_hwfn {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ecore_hwfn*,scalar_t__,int) ;

__attribute__((used)) static enum _ecore_status_t FUNC_1(struct ecore_hwfn *VAR_2,
         bool VAR_3)
{
 enum _ecore_status_t VAR_4;
 u8 VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_4 = FUNC_0(VAR_2, VAR_5, VAR_3);
  if (VAR_4 != VAR_1)
   return VAR_4;
 }

 return VAR_1;
}
