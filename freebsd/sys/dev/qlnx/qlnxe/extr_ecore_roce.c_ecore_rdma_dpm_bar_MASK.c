
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int db_bar_no_edpm; } ;


 int FUNC_0 (struct ecore_hwfn*,struct ecore_ptt*) ;

void FUNC_1(struct ecore_hwfn *VAR_0, struct ecore_ptt *VAR_1)
{
 VAR_0->db_bar_no_edpm = 1;

 FUNC_0(VAR_0, VAR_1);
}
