
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int p_dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ecore_hwfn*,int ,char*,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*,int ,int ) ;
 int FUNC_4 (struct ecore_hwfn*,int ,int ) ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_ptt*) ;
 int FUNC_6 (struct ecore_hwfn*,struct ecore_ptt*,int ) ;

void FUNC_7(struct ecore_hwfn *VAR_1, struct ecore_ptt *VAR_2, u32 VAR_3,
       u32 VAR_4)
{
 bool VAR_5;
 u32 VAR_6;

 VAR_5 = !FUNC_5(VAR_1, VAR_2);

 VAR_6 = FUNC_6(VAR_1, VAR_2, VAR_3);
 FUNC_4(VAR_1, VAR_6, VAR_4);
 FUNC_1(VAR_1, VAR_0,
     "bar_addr 0x%x, hw_addr 0x%x, val 0x%x\n",
     VAR_6, VAR_3, VAR_4);


 if (FUNC_0(VAR_1->p_dev))
  FUNC_2(100);


 FUNC_3(!VAR_5 && !FUNC_5(VAR_1, VAR_2),
    "reg_fifo error was caused by a call to ecore_wr(0x%x, 0x%x)\n",
    VAR_3, VAR_4);
}
