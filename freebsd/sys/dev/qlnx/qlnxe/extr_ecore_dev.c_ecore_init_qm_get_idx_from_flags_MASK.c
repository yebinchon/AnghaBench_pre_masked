
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ecore_qm_info {int first_vf_pq; int low_latency_pq; int offload_pq; int pure_ack_pq; int ooo_pq; int pure_lb_pq; int first_mcos_pq; int first_rl_pq; } ;
struct ecore_hwfn {struct ecore_qm_info qm_info; } ;
typedef int pq_flags ;


 int FUNC_0 (struct ecore_hwfn*,char*,int) ;
 int FUNC_1 (unsigned long*,int) ;
 int * VAR_0 ;
__attribute__((used)) static u16 *FUNC_2(struct ecore_hwfn *VAR_1,
          u32 VAR_2)
{
 struct ecore_qm_info *VAR_3 = &VAR_1->qm_info;


 if (FUNC_1((unsigned long *)&VAR_2, sizeof(VAR_2)) > 1)
  goto err;

 switch (VAR_2) {
 case 129:
  return &VAR_3->first_rl_pq;
 case 132:
  return &VAR_3->first_mcos_pq;
 case 134:
  return &VAR_3->pure_lb_pq;
 case 130:
  return &VAR_3->ooo_pq;
 case 135:
  return &VAR_3->pure_ack_pq;
 case 131:
  return &VAR_3->offload_pq;
 case 133:
  return &VAR_3->low_latency_pq;
 case 128:
  return &VAR_3->first_vf_pq;
 default:
  goto err;
 }

err:
 FUNC_0(VAR_1, "BAD pq flags %d\n", VAR_2);
 return VAR_0;
}
