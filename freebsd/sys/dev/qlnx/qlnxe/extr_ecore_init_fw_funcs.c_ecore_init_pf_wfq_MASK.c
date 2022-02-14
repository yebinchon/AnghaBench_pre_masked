
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;


 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__,scalar_t__) ;

int FUNC_3(struct ecore_hwfn *VAR_2,
       struct ecore_ptt *VAR_3,
       u8 VAR_4,
       u16 VAR_5)
{
 u32 VAR_6;

 VAR_6 = FUNC_1(VAR_5);
 if (!VAR_6 || VAR_6 > VAR_1) {
  FUNC_0(VAR_2, 1, "Invalid PF WFQ weight configuration\n");
  return -1;
 }

 FUNC_2(VAR_2, VAR_3, VAR_0 + VAR_4 * 4, VAR_6);

 return 0;
}
