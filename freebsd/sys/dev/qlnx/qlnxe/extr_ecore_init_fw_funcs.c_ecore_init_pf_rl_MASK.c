
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;


 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__,scalar_t__) ;

int FUNC_3(struct ecore_hwfn *VAR_4,
      struct ecore_ptt *VAR_5,
      u8 VAR_6,
      u32 VAR_7)
{
 u32 VAR_8;

 VAR_8 = FUNC_1(VAR_7);
 if (VAR_8 > VAR_0) {
  FUNC_0(VAR_4, 1, "Invalid PF rate limit configuration\n");
  return -1;
 }

 FUNC_2(VAR_4, VAR_5, VAR_1 + VAR_6 * 4, (u32)VAR_3);
 FUNC_2(VAR_4, VAR_5, VAR_2 + VAR_6 * 4, VAR_8);

 return 0;
}
