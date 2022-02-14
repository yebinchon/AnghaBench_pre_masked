
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int p_dev; } ;


 int FUNC_0 (int ,char*,int const) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,int const,int) ;
 int FUNC_3 (struct ecore_hwfn*,struct ecore_ptt*,int const,int) ;

void FUNC_4(struct ecore_hwfn *VAR_2,
       struct ecore_ptt *VAR_3)
{
 const u32 VAR_4 =
  FUNC_1(VAR_2->p_dev) ?
  VAR_0 : VAR_1;

 FUNC_0(VAR_2->p_dev,
  "ecore_wol_buffer_clear: reset "
  "REG_WAKE_BUFFER_CLEAR offset=0x%08x\n",
  VAR_4);

 if (FUNC_1(VAR_2->p_dev)) {
  FUNC_3(VAR_2, VAR_3, VAR_4, 1);
  FUNC_3(VAR_2, VAR_3, VAR_4, 0);
 } else {
  FUNC_2(VAR_2, VAR_3, VAR_4, 1);
  FUNC_2(VAR_2, VAR_3, VAR_4, 0);
 }
}
