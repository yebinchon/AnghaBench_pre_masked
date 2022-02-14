
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccp_queue {int cq_lock; int cq_tail; int cq_acq_tail; } ;


 int FUNC_0 (struct ccp_queue*,unsigned int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int
FUNC_3(struct ccp_queue *VAR_0, unsigned VAR_1, int VAR_2)
{
 int VAR_3;

 FUNC_1(&VAR_0->cq_lock);
 VAR_0->cq_acq_tail = VAR_0->cq_tail;
 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_3 != 0)
  FUNC_2(&VAR_0->cq_lock);
 return (VAR_3);
}
