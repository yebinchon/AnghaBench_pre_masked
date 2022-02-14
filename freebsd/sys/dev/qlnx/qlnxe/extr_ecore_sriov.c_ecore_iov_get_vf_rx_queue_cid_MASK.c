
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ecore_vf_queue {TYPE_1__* cids; } ;
struct ecore_queue_cid {int dummy; } ;
struct TYPE_2__ {struct ecore_queue_cid* p_cid; int b_is_tx; } ;


 int VAR_0 ;
 struct ecore_queue_cid* VAR_1 ;

__attribute__((used)) static struct ecore_queue_cid *
FUNC_0(struct ecore_vf_queue *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_2->cids[VAR_3].p_cid &&
      !VAR_2->cids[VAR_3].b_is_tx)
   return VAR_2->cids[VAR_3].p_cid;
 }

 return VAR_1;
}
