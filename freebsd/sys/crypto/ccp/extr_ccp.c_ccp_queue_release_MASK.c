
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccp_queue {scalar_t__ cq_tail; scalar_t__ cq_acq_tail; int cq_lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct ccp_queue*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;

void
FUNC_4(struct ccp_queue *VAR_1)
{

 FUNC_1(&VAR_1->cq_lock, VAR_0);
 if (VAR_1->cq_tail != VAR_1->cq_acq_tail) {
  FUNC_3();
  FUNC_0(VAR_1);
 }
 FUNC_2(&VAR_1->cq_lock);
}
