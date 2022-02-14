
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ccp_softc {struct ccp_queue* queues; } ;
struct ccp_queue {int lsb_mask; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;

void
FUNC_0(struct ccp_softc *VAR_2, uint64_t VAR_3,
    unsigned VAR_4)
{
 struct ccp_queue *VAR_5;
 unsigned VAR_6;

 VAR_5 = &VAR_2->queues[VAR_4];

 VAR_5->lsb_mask = 0;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  if (((1 << VAR_4) & VAR_3) != 0)
   VAR_5->lsb_mask |= (1 << VAR_6);
  VAR_3 >>= VAR_0;
 }





 VAR_5->lsb_mask &= ~(1 << 0);
}
