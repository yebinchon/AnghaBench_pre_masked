
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_hwfn {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ecore_hwfn*) ;
 int FUNC_1 (struct ecore_hwfn*) ;
 int FUNC_2 (struct ecore_hwfn*) ;
 int FUNC_3 (struct ecore_hwfn*,int ) ;

enum _ecore_status_t
FUNC_4(struct ecore_hwfn *VAR_2)
{
 enum _ecore_status_t VAR_3;

 FUNC_0(VAR_2);
 VAR_3 = FUNC_2(VAR_2);
 if (VAR_3 != VAR_0)
  return VAR_3;

 FUNC_3(VAR_2, VAR_1);

 return FUNC_1(VAR_2);
}
