
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef scalar_t__ u32 ;
struct ecore_hwfn {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ecore_hwfn*,scalar_t__) ;

u64 FUNC_1(struct ecore_hwfn *VAR_3)
{
 u32 VAR_4 = 0, VAR_5 = 0;
 u64 VAR_6 = 0;

 VAR_5 = FUNC_0(VAR_3,
    VAR_0 +
    VAR_1 * 8);
 VAR_4 = FUNC_0(VAR_3,
    VAR_0 +
    VAR_2 * 8);
 VAR_6 = ((u64)VAR_4 << 32) + (u64)VAR_5;

 return VAR_6;
}
