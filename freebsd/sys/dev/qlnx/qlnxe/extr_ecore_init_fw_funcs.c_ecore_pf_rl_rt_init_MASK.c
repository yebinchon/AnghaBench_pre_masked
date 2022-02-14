
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct ecore_hwfn {int dummy; } ;


 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ecore_hwfn*,scalar_t__,int) ;

__attribute__((used)) static int FUNC_3(struct ecore_hwfn *VAR_6,
         u8 VAR_7,
         u32 VAR_8)
{
 u32 VAR_9;

 VAR_9 = FUNC_1(VAR_8);
 if (VAR_9 > VAR_0) {
  FUNC_0(VAR_6, 1, "Invalid PF rate limit configuration\n");
  return -1;
 }

 FUNC_2(VAR_6, VAR_2 + VAR_7, (u32)VAR_5);
 FUNC_2(VAR_6, VAR_4 + VAR_7, VAR_1 | (u32)VAR_5);
 FUNC_2(VAR_6, VAR_3 + VAR_7, VAR_9);

 return 0;
}
