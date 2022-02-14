
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct alloc_cache {int num_quar; size_t num_reg_blocks; int lock; int super; TYPE_2__* quar; } ;
struct TYPE_5__ {int lock; } ;
struct TYPE_6__ {TYPE_1__ entry; } ;
typedef TYPE_2__ alloc_special_type ;


 size_t VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

size_t FUNC_4(struct alloc_cache* VAR_1)
{
 alloc_special_type* VAR_2;
 size_t VAR_3 = sizeof(*VAR_1);
 if(!VAR_1->super) {
  FUNC_2(&VAR_1->lock);
 }
 VAR_3 += sizeof(alloc_special_type) * VAR_1->num_quar;
 for(VAR_2 = VAR_1->quar; VAR_2; VAR_2 = FUNC_0(VAR_2)) {
  VAR_3 += FUNC_1(&VAR_2->entry.lock);
 }
 VAR_3 += VAR_1->num_reg_blocks * VAR_0;
 if(!VAR_1->super) {
  FUNC_3(&VAR_1->lock);
 }
 return VAR_3;
}
