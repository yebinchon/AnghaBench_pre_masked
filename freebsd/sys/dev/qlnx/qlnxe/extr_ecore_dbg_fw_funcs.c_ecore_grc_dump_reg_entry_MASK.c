
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;


 int FUNC_0 (struct ecore_hwfn*,struct ecore_ptt*,int*,int,int,int,int) ;
 int FUNC_1 (int*,int,int,int) ;

__attribute__((used)) static u32 FUNC_2(struct ecore_hwfn *VAR_0,
         struct ecore_ptt *VAR_1,
         u32 *VAR_2,
         bool VAR_3,
         u32 VAR_4,
         u32 VAR_5,
         bool VAR_6)
{
 u32 VAR_7 = 0;

 VAR_7 += FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);
 VAR_7 += FUNC_0(VAR_0, VAR_1, VAR_2 + VAR_7, VAR_3, VAR_4, VAR_5, VAR_6);

 return VAR_7;
}
