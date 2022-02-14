
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,int ,int *) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,int *) ;

enum _ecore_status_t
FUNC_4(struct ecore_hwfn *VAR_2,
    struct ecore_ptt *VAR_3,
    u16 VAR_4)

{
 u32 VAR_5[VAR_1 / 32];
 enum _ecore_status_t VAR_6 = VAR_0;

 FUNC_0(VAR_5, 0, sizeof(u32) * (VAR_1 / 32));


 FUNC_1(100);

 FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5);

 VAR_6 = FUNC_3(VAR_2, VAR_3, VAR_5);
 return VAR_6;
}
