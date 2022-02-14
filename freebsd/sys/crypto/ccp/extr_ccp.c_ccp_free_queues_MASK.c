
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccp_softc {struct ccp_queue* queues; } ;
struct ccp_queue {int cq_sg_dst; int cq_sg_ulptx; int cq_sg_crp; int cq_lock; } ;


 int FUNC_0 (int *) ;
 size_t FUNC_1 (struct ccp_queue*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(struct ccp_softc *VAR_0)
{
 struct ccp_queue *VAR_1;
 size_t VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_1(VAR_0->queues); VAR_2++) {
  VAR_1 = &VAR_0->queues[VAR_2];

  FUNC_0(&VAR_1->cq_lock);
  FUNC_2(VAR_1->cq_sg_crp);
  FUNC_2(VAR_1->cq_sg_ulptx);
  FUNC_2(VAR_1->cq_sg_dst);
 }
}
