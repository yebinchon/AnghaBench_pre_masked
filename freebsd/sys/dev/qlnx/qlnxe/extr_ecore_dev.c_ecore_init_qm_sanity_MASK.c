
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_hwfn {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct ecore_hwfn*,int ) ;
 scalar_t__ FUNC_2 (struct ecore_hwfn*) ;
 scalar_t__ FUNC_3 (struct ecore_hwfn*) ;

__attribute__((used)) static enum _ecore_status_t FUNC_4(struct ecore_hwfn *VAR_4)
{
 if (FUNC_3(VAR_4) > FUNC_1(VAR_4, VAR_3)) {
  FUNC_0(VAR_4, "requested amount of vports exceeds resource\n");
  return VAR_0;
 }

 if (FUNC_2(VAR_4) > FUNC_1(VAR_4, VAR_1)) {
  FUNC_0(VAR_4, "requested amount of pqs exceeds resource\n");
  return VAR_0;
 }

 return VAR_2;
}
