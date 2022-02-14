
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccp_softc {int ring_size_order; } ;
struct ccp_queue {int cq_waiting; int cq_lock; int cq_tail; struct ccp_softc* cq_softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (struct ccp_queue*) ;
 int FUNC_1 (int *,int *,int ,char*,int ) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int
FUNC_3(struct ccp_queue *VAR_4, unsigned VAR_5, int VAR_6)
{
 struct ccp_softc *VAR_7;

 FUNC_2(&VAR_4->cq_lock, VAR_2);
 VAR_7 = VAR_4->cq_softc;

 if (VAR_5 < 1 || VAR_5 >= (1 << VAR_7->ring_size_order))
  return (VAR_1);

 while (1) {
  if (FUNC_0(VAR_4) >= VAR_5)
   return (0);
  if ((VAR_6 & VAR_3) == 0)
   return (VAR_0);
  VAR_4->cq_waiting = 1;
  FUNC_1(&VAR_4->cq_tail, &VAR_4->cq_lock, 0, "ccpqfull", 0);
 }
}
