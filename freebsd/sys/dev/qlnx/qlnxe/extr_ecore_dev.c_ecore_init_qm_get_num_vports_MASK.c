
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ecore_hwfn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ecore_hwfn*) ;
 int FUNC_1 (struct ecore_hwfn*) ;
 int FUNC_2 (struct ecore_hwfn*) ;

u16 FUNC_3(struct ecore_hwfn *VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_2);


 return (!!(VAR_0 & VAR_3)) * FUNC_1(VAR_2) +
        (!!(VAR_1 & VAR_3)) * FUNC_2(VAR_2) + 1;
}
