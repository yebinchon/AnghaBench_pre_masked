
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_1(struct ecore_hwfn *VAR_1,
      struct ecore_ptt *VAR_2,
      u8 VAR_3)
{
 FUNC_0(VAR_1, VAR_2,
   VAR_0 + (VAR_3 >> 5) * 4,
   1 << (VAR_3 & 0x1f));
}
