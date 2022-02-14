
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct malicious_vf_eqe_data {int err_id; int vf_id; } ;
struct ecore_vf_info {int b_malicious; int relative_vf_id; int abs_vf_id; } ;
struct ecore_hwfn {int dummy; } ;


 int FUNC_0 (struct ecore_hwfn*,char*,int ,int ) ;
 int FUNC_1 (struct ecore_hwfn*,int,char*,int ,int ) ;
 int FUNC_2 (struct ecore_hwfn*,int ) ;
 struct ecore_vf_info* FUNC_3 (struct ecore_hwfn*,int ) ;

__attribute__((used)) static void FUNC_4(struct ecore_hwfn *VAR_0,
           struct malicious_vf_eqe_data *VAR_1)
{
 struct ecore_vf_info *VAR_2;

 VAR_2 = FUNC_3(VAR_0, VAR_1->vf_id);

 if (!VAR_2)
  return;

 if (!VAR_2->b_malicious) {
  FUNC_1(VAR_0, 0,
     "VF [%d] - Malicious behavior [%02x]\n",
     VAR_2->abs_vf_id, VAR_1->err_id);

  VAR_2->b_malicious = 1;
 } else {
  FUNC_0(VAR_0,
   "VF [%d] - Malicious behavior [%02x]\n",
   VAR_2->abs_vf_id, VAR_1->err_id);
 }

 FUNC_2(VAR_0, VAR_2->relative_vf_id);
}
