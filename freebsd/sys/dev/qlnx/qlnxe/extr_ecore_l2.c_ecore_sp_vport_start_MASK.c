
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_sp_vport_start_params {int zero_placement_offset; int only_untagged; int max_buffers_per_cqe; int tpa_mode; int remove_inner_vlan; int mtu; int vport_id; } ;
struct ecore_hwfn {int p_dev; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_sp_vport_start_params*) ;
 int FUNC_2 (struct ecore_hwfn*,int ,int ,int ,int ,int ,int ,int ) ;

enum _ecore_status_t FUNC_3(struct ecore_hwfn *VAR_0,
       struct ecore_sp_vport_start_params *VAR_1)
{
 if (FUNC_0(VAR_0->p_dev))
  return FUNC_2(VAR_0, VAR_1->vport_id,
            VAR_1->mtu,
            VAR_1->remove_inner_vlan,
            VAR_1->tpa_mode,
            VAR_1->max_buffers_per_cqe,
            VAR_1->only_untagged,
            VAR_1->zero_placement_offset);

 return FUNC_1(VAR_0, VAR_1);
}
