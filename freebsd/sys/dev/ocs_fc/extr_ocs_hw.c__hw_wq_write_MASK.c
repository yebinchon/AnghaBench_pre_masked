
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int wqec; } ;
typedef TYPE_2__ sli4_generic_wqe_t ;
struct TYPE_10__ {scalar_t__ wqebuf; } ;
typedef TYPE_3__ ocs_hw_wqe_t ;
typedef scalar_t__ int32_t ;
struct TYPE_11__ {scalar_t__ wqec_count; scalar_t__ wqec_set_count; TYPE_5__* queue; TYPE_1__* hw; int free_count; } ;
typedef TYPE_4__ hw_wq_t ;
struct TYPE_12__ {int id; } ;
struct TYPE_8__ {int q_hist; int sli; } ;


 scalar_t__ FUNC_0 (int *,TYPE_5__*,scalar_t__) ;
 int FUNC_1 (int *,void*,int ,scalar_t__) ;

__attribute__((used)) static int32_t
FUNC_2(hw_wq_t *VAR_0, ocs_hw_wqe_t *VAR_1)
{
 int32_t VAR_2;
 int32_t VAR_3;


 if (VAR_0->wqec_count) {
  VAR_0->wqec_count--;
 }
 if (VAR_0->wqec_count == 0) {
  sli4_generic_wqe_t *VAR_4 = (void*)VAR_1->wqebuf;
  VAR_4->wqec = 1;
  VAR_0->wqec_count = VAR_0->wqec_set_count;
 }


 VAR_0->free_count--;

 VAR_3 = FUNC_0(&VAR_0->hw->sli, VAR_0->queue, VAR_1->wqebuf);

 if (VAR_3 < 0) {
  VAR_2 = -1;
 } else {
  VAR_2 = 0;
  FUNC_1(&VAR_0->hw->q_hist, (void *) VAR_1->wqebuf, VAR_0->queue->id, VAR_3);
 }

 return VAR_2;
}
