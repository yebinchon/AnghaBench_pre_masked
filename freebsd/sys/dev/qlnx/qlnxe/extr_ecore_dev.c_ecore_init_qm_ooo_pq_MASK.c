
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_qm_info {int ooo_tc; int num_pqs; } ;
struct ecore_hwfn {struct ecore_qm_info qm_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ecore_hwfn*) ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_qm_info*,int ,int ) ;
 int FUNC_2 (struct ecore_hwfn*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct ecore_hwfn *VAR_2)
{
 struct ecore_qm_info *VAR_3 = &VAR_2->qm_info;

 if (!(FUNC_0(VAR_2) & VAR_0))
  return;

 FUNC_2(VAR_2, VAR_0, VAR_3->num_pqs);
 FUNC_1(VAR_2, VAR_3, VAR_3->ooo_tc, VAR_1);
}
