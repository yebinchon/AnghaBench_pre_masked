
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,int ,int,int *,int *) ;

enum _ecore_status_t FUNC_2(struct ecore_hwfn *VAR_1,
         struct ecore_ptt *VAR_2)
{
 u32 VAR_3 = 0, VAR_4 = 0;
 enum _ecore_status_t VAR_5;

 VAR_5 = FUNC_1(VAR_1, VAR_2,
      VAR_0, 1000,
      &VAR_3, &VAR_4);


 FUNC_0(1020);

 return VAR_5;
}
