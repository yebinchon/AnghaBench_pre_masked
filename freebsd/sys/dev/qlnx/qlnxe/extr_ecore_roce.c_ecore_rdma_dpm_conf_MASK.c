
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int db_bar_no_edpm; int dcbx_no_edpm; } ;


 int VAR_0 ;
 int FUNC_0 (struct ecore_hwfn*,int,char*,int,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct ecore_hwfn *VAR_3,
    struct ecore_ptt *VAR_4)
{
 u32 VAR_5;

 VAR_5 = (VAR_3->dcbx_no_edpm || VAR_3->db_bar_no_edpm) ? 0 : 1;

 FUNC_1(VAR_3, VAR_4, VAR_0, VAR_5);
 FUNC_0(VAR_3, (VAR_1 | VAR_2),
     "Changing DPM_EN state to %d (DCBX=%d, DB_BAR=%d)\n",
     VAR_5, VAR_3->dcbx_no_edpm, VAR_3->db_bar_no_edpm);
}
