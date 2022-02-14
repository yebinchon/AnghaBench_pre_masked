
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;


 int FUNC_0 (struct ecore_hwfn*,int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,int ) ;

__attribute__((used)) static bool FUNC_3(struct ecore_hwfn *VAR_4,
            struct ecore_ptt *VAR_5)
{
 u32 VAR_6, VAR_7;

 for (VAR_7 = 0, VAR_6 = 0; VAR_7 < VAR_2 && !VAR_6; VAR_7++) {
  FUNC_1(VAR_3);
  VAR_6 = FUNC_2(VAR_4, VAR_5, VAR_1);
 }


 if (VAR_7 == VAR_2) {
  FUNC_0(VAR_4, VAR_0, "Timeout when waiting for QM SDM command ready signal\n");
  return 0;
 }

 return 1;
}
