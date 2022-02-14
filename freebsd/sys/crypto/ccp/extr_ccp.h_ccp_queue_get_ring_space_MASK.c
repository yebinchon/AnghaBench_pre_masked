
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccp_softc {int ring_size_order; } ;
struct ccp_queue {struct ccp_softc* cq_softc; } ;


 int FUNC_0 (struct ccp_queue*) ;

__attribute__((used)) static inline unsigned
FUNC_1(struct ccp_queue *VAR_0)
{
 struct ccp_softc *VAR_1;

 VAR_1 = VAR_0->cq_softc;
 return ((1 << VAR_1->ring_size_order) - FUNC_0(VAR_0) - 1);
}
