
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct ecore_vf_queue {TYPE_1__* cids; } ;
struct ecore_vf_info {int relative_vf_id; int acquire; int shadow_config; struct ecore_vf_queue* vf_queues; scalar_t__ num_active_rxqs; int num_sbs; int num_txqs; int num_rxqs; scalar_t__ configured_features; scalar_t__ vport_instance; scalar_t__ vf_bulletin; } ;
struct ecore_hwfn {int dummy; } ;
struct TYPE_2__ {scalar_t__ p_cid; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct ecore_hwfn*,int ) ;
 int FUNC_1 (int *,int ,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct ecore_hwfn*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct ecore_hwfn *VAR_3,
     struct ecore_vf_info *VAR_4)
{
 u32 VAR_5, VAR_6;

 VAR_4->vf_bulletin = 0;
 VAR_4->vport_instance = 0;
 VAR_4->configured_features = 0;


 VAR_4->num_rxqs = VAR_4->num_sbs;
 VAR_4->num_txqs = VAR_4->num_sbs;

 VAR_4->num_active_rxqs = 0;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  struct ecore_vf_queue *VAR_7 = &VAR_4->vf_queues[VAR_5];

  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
   if (!VAR_7->cids[VAR_6].p_cid)
    continue;

   FUNC_2(VAR_3,
          VAR_7->cids[VAR_6].p_cid);
   VAR_7->cids[VAR_6].p_cid = VAR_2;
  }
 }

 FUNC_1(&VAR_4->shadow_config, 0, sizeof(VAR_4->shadow_config));
 FUNC_1(&VAR_4->acquire, 0, sizeof(VAR_4->acquire));
 FUNC_0(VAR_3, VAR_4->relative_vf_id);
}
