
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int rel_pf_id; } ;


 int FUNC_0 (struct ecore_hwfn*,int) ;
 int VAR_0 ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,int) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,int ,int ) ;

void FUNC_3(struct ecore_hwfn *VAR_1, struct ecore_ptt *VAR_2,
      u8 VAR_3, u32 VAR_4, u32 VAR_5)
{
 u8 VAR_6 = FUNC_0(VAR_1, VAR_3);

 FUNC_1(VAR_1, VAR_2,
     VAR_6 << VAR_0);
 FUNC_2(VAR_1, VAR_2, VAR_4, VAR_5);
 FUNC_1(VAR_1, VAR_2,
     VAR_1->rel_pf_id <<
     VAR_0);
}
