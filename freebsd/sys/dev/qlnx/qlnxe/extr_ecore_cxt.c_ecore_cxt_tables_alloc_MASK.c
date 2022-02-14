
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_hwfn {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct ecore_hwfn*) ;
 int FUNC_2 (struct ecore_hwfn*) ;
 int FUNC_3 (struct ecore_hwfn*) ;
 int FUNC_4 (struct ecore_hwfn*) ;

enum _ecore_status_t FUNC_5(struct ecore_hwfn *VAR_1)
{
 enum _ecore_status_t VAR_2;


 VAR_2 = FUNC_4(VAR_1);
 if (VAR_2) {
  FUNC_0(VAR_1, 0, "Failed to allocate ilt memory\n");
  goto tables_alloc_fail;
 }


 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2) {
  FUNC_0(VAR_1, 0, "Failed to allocate T2 memory\n");
  goto tables_alloc_fail;
 }


 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2) {
  FUNC_0(VAR_1, 0, "Failed to allocate cid maps\n");
  goto tables_alloc_fail;
 }

 return VAR_0;

tables_alloc_fail:
 FUNC_2(VAR_1);
 return VAR_2;
}
