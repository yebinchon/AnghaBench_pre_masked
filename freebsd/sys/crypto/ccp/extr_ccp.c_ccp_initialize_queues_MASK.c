
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccp_softc {struct ccp_queue* queues; } ;
struct ccp_queue {size_t cq_qindex; void* cq_sg_dst; void* cq_sg_ulptx; void* cq_sg_crp; int cq_lock; struct ccp_softc* cq_softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int *,int ) ;
 size_t FUNC_1 (struct ccp_queue*) ;
 void* FUNC_2 (int,int ) ;

__attribute__((used)) static void
FUNC_3(struct ccp_softc *VAR_2)
{
 struct ccp_queue *VAR_3;
 size_t VAR_4;

 for (VAR_4 = 0; VAR_4 < FUNC_1(VAR_2->queues); VAR_4++) {
  VAR_3 = &VAR_2->queues[VAR_4];

  VAR_3->cq_softc = VAR_2;
  VAR_3->cq_qindex = VAR_4;
  FUNC_0(&VAR_3->cq_lock, "ccp queue", ((void*)0), VAR_0);

  VAR_3->cq_sg_crp = FUNC_2(32, VAR_1);

  VAR_3->cq_sg_ulptx = FUNC_2(34, VAR_1);
  VAR_3->cq_sg_dst = FUNC_2(2, VAR_1);
 }
}
