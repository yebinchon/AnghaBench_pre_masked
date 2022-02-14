
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ecore_hwfn*,struct ecore_ptt*,int ) ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,int ,int) ;

void FUNC_2 (struct ecore_hwfn *VAR_5,
 struct ecore_ptt *VAR_6)
{
 u32 VAR_7;


    VAR_7 = FUNC_0(VAR_5, VAR_6, VAR_1);
    VAR_7 |= VAR_4 << VAR_3;
    VAR_7 |= VAR_0 << VAR_2;
    FUNC_1(VAR_5, VAR_6, VAR_1, VAR_7);
}
