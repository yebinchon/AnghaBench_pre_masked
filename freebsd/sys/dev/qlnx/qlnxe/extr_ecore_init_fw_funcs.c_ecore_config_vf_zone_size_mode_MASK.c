
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ecore_hwfn*,int ,int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,int ,int) ;

void FUNC_2(struct ecore_hwfn *VAR_7, struct ecore_ptt *VAR_8, u16 VAR_9, bool VAR_10)
{
 u32 VAR_11 = VAR_0;
 u32 VAR_12;

 if (VAR_9 == VAR_5)
  VAR_11 += 1;
 else if (VAR_9 == VAR_6)
  VAR_11 += 2;

 VAR_12 = (1 << VAR_11) - 1;

 if (VAR_10) {
  FUNC_0(VAR_7, VAR_4, VAR_11);
  FUNC_0(VAR_7, VAR_3, VAR_12);
 }
 else {
  FUNC_1(VAR_7, VAR_8, VAR_2, VAR_11);
  FUNC_1(VAR_7, VAR_8, VAR_1, VAR_12);
 }
}
