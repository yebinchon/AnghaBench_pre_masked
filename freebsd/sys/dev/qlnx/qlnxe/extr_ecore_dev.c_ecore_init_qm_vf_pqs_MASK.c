
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct ecore_qm_info {scalar_t__ num_vf_pqs; int num_pqs; } ;
struct ecore_hwfn {struct ecore_qm_info qm_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ecore_hwfn*) ;
 scalar_t__ FUNC_1 (struct ecore_hwfn*) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_qm_info*,int ,int ) ;
 int FUNC_3 (struct ecore_hwfn*,int,int ) ;

__attribute__((used)) static void FUNC_4(struct ecore_hwfn *VAR_3)
{
 struct ecore_qm_info *VAR_4 = &VAR_3->qm_info;
 u16 VAR_5, VAR_6 = FUNC_1(VAR_3);

 if (!(FUNC_0(VAR_3) & VAR_0))
  return;

 FUNC_3(VAR_3, VAR_0, VAR_4->num_pqs);
 VAR_4->num_vf_pqs = VAR_6;
 for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
  FUNC_2(VAR_3, VAR_4, VAR_1, VAR_2);
}
