
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct ecore_hwfn {int dummy; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

u32 FUNC_1(struct ecore_hwfn *VAR_4, u8 VAR_5, u8 VAR_6, u16 VAR_7)
{
 u32 VAR_8 = FUNC_0(VAR_5, VAR_6);

 if (VAR_7 != VAR_1) {
  if (VAR_7 == VAR_2)
   VAR_8 += (1 << VAR_0) * VAR_5;
  else if (VAR_7 == VAR_3)
   VAR_8 += 3 * (1 << VAR_0) * VAR_5;
 }

 return VAR_8;
}
