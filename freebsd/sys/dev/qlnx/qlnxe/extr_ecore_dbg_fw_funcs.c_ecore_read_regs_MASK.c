
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;


 int FUNC_0 (size_t) ;
 size_t FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,int ) ;

void FUNC_2(struct ecore_hwfn *VAR_0,
      struct ecore_ptt *VAR_1,
      u32 *VAR_2,
      u32 VAR_3,
      u32 VAR_4)
{
 u32 VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
  VAR_2[VAR_5] = FUNC_1(VAR_0, VAR_1, FUNC_0(VAR_3 + VAR_5));
}
