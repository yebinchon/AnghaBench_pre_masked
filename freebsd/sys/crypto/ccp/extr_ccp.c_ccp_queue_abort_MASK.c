
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ccp_queue {unsigned int cq_acq_tail; unsigned int cq_tail; int cq_lock; int * desc_ring; TYPE_1__* cq_softc; } ;
struct TYPE_2__ {int ring_size_order; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;

void
FUNC_3(struct ccp_queue *VAR_1)
{
 unsigned VAR_2;

 FUNC_1(&VAR_1->cq_lock, VAR_0);


 for (VAR_2 = VAR_1->cq_acq_tail; VAR_2 != VAR_1->cq_tail;
     VAR_2 = (VAR_2 + 1) % (1 << VAR_1->cq_softc->ring_size_order)) {
  FUNC_0(&VAR_1->desc_ring[VAR_2], 0, sizeof(VAR_1->desc_ring[VAR_2]));
 }
 VAR_1->cq_tail = VAR_1->cq_acq_tail;

 FUNC_2(&VAR_1->cq_lock);
}
