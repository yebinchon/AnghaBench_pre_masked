
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_ll2_info {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 int FUNC_0 (struct ecore_hwfn*,struct ecore_ll2_info*) ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ll2_info*) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ll2_info*) ;

__attribute__((used)) static enum _ecore_status_t
FUNC_3(struct ecore_hwfn *VAR_1,
       void *VAR_2)
{
 struct ecore_ll2_info *VAR_3 = (struct ecore_ll2_info *)VAR_2;
 enum _ecore_status_t VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_3);
 if (VAR_4 != VAR_0)
  return VAR_4;

 FUNC_1(VAR_1, VAR_3);
 FUNC_2(VAR_1, VAR_3);

 return 0;
}
