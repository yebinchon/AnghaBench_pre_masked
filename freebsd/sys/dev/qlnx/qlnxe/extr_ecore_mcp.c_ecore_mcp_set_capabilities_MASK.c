
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ecore_hwfn*,struct ecore_ptt*,int ,int,int*,int*) ;

enum _ecore_status_t FUNC_1(struct ecore_hwfn *VAR_4,
      struct ecore_ptt *VAR_5)
{
 u32 VAR_6, VAR_7, VAR_8;

 VAR_8 = VAR_2 |
     VAR_1 |
     VAR_0;

 return FUNC_0(VAR_4, VAR_5, VAR_3,
        VAR_8, &VAR_6, &VAR_7);
}
