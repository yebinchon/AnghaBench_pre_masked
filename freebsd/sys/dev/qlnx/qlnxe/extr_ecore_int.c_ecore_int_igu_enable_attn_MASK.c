
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int p_dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ecore_hwfn*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct ecore_hwfn *VAR_4,
          struct ecore_ptt *VAR_5)
{

 if (FUNC_0(VAR_4->p_dev)) {
  FUNC_1(VAR_4, "FPGA - Don't enable Attentions in IGU and MISC\n");
  return;
 }



 FUNC_3(VAR_4, VAR_5, VAR_0, 0);
 FUNC_3(VAR_4, VAR_5, VAR_1, 0xfff);
 FUNC_3(VAR_4, VAR_5, VAR_2, 0xfff);
 FUNC_3(VAR_4, VAR_5, VAR_0, 0xfff);


 FUNC_2(VAR_4->p_dev);


 FUNC_3(VAR_4, VAR_5, VAR_3, 0xff);
}
