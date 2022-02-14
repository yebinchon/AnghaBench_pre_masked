
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccp_softc {int ring_size_order; } ;
struct ccp_queue {int cq_tail; int cq_head; struct ccp_softc* cq_softc; } ;



__attribute__((used)) static inline unsigned
FUNC_0(struct ccp_queue *VAR_0)
{
 struct ccp_softc *VAR_1;

 VAR_1 = VAR_0->cq_softc;
 return ((VAR_0->cq_tail - VAR_0->cq_head) & ((1 << VAR_1->ring_size_order) - 1));
}
