
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t queue_id; } ;
struct ecore_queue_cid {TYPE_1__ rel; int qid_usage_idx; } ;
struct ecore_hwfn {TYPE_2__* p_l2_info; } ;
struct TYPE_4__ {int lock; int * pp_qid_usage; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ecore_hwfn *VAR_0,
       struct ecore_queue_cid *VAR_1)
{
 FUNC_1(&VAR_0->p_l2_info->lock);

 FUNC_0(VAR_1->qid_usage_idx,
         VAR_0->p_l2_info->pp_qid_usage[VAR_1->rel.queue_id]);

 FUNC_2(&VAR_0->p_l2_info->lock);
}
