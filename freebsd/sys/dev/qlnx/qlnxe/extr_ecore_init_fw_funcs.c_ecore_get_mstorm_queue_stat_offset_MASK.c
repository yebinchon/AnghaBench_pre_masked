
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct ecore_hwfn {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

u32 FUNC_1(struct ecore_hwfn *VAR_5, u16 VAR_6, u16 VAR_7)
{
 u32 VAR_8 = FUNC_0(VAR_6);

 if ((VAR_7 != VAR_2) && (VAR_6 > VAR_0)) {
  if (VAR_7 == VAR_3)
   VAR_8 += (1 << VAR_1) * (VAR_6 - VAR_0);
  else if (VAR_7 == VAR_4)
   VAR_8 += 3 * (1 << VAR_1) * (VAR_6 - VAR_0);
 }

 return VAR_8;
}
