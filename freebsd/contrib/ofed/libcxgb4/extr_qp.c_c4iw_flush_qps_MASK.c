
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flushed; } ;
struct c4iw_qp {int lock; TYPE_1__ wq; } ;
struct c4iw_dev {int max_qp; int lock; struct c4iw_qp** qpid2ptr; } ;


 int FUNC_0 (struct c4iw_qp*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;

void FUNC_4(struct c4iw_dev *VAR_0)
{
 int VAR_1;

 FUNC_1(&VAR_0->lock);
 for (VAR_1=0; VAR_1 < VAR_0->max_qp; VAR_1++) {
  struct c4iw_qp *VAR_2 = VAR_0->qpid2ptr[VAR_1];
  if (VAR_2) {
   if (!VAR_2->wq.flushed && FUNC_3(&VAR_2->wq)) {
    FUNC_1(&VAR_2->lock);
    FUNC_0(VAR_2);
    FUNC_2(&VAR_2->lock);
   }
  }
 }
 FUNC_2(&VAR_0->lock);
}
