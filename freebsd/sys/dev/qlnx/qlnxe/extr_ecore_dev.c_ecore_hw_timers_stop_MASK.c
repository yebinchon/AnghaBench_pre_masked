
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
struct ecore_dev {int recov_in_prog; } ;


 int FUNC_0 (struct ecore_hwfn*,int,char*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,int ) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct ecore_dev *VAR_5,
     struct ecore_hwfn *VAR_6,
     struct ecore_ptt *VAR_7)
{
 int VAR_8;


 FUNC_3(VAR_6, VAR_7, VAR_1, 0x0);
 FUNC_3(VAR_6, VAR_7, VAR_2, 0x0);
 for (VAR_8 = 0;
      VAR_8 < VAR_0 && !VAR_5->recov_in_prog;
      VAR_8++) {
  if ((!FUNC_2(VAR_6, VAR_7,
          VAR_3)) &&
      (!FUNC_2(VAR_6, VAR_7,
          VAR_4)))
   break;




  FUNC_1(1);
 }

 if (VAR_8 < VAR_0)
  return;

 FUNC_0(VAR_6, 0,
    "Timers linear scans are not over [Connection %02x Tasks %02x]\n",
    (u8)FUNC_2(VAR_6, VAR_7, VAR_3),
    (u8)FUNC_2(VAR_6, VAR_7, VAR_4));
}
