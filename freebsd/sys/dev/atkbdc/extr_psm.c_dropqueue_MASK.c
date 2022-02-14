
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tail; scalar_t__ head; scalar_t__ count; } ;
struct psm_softc {int state; int pqueue_end; int pqueue_start; int softcallout; TYPE_1__ queue; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(struct psm_softc *VAR_1)
{

 VAR_1->queue.count = 0;
 VAR_1->queue.head = 0;
 VAR_1->queue.tail = 0;
 if ((VAR_1->state & VAR_0) != 0) {
  VAR_1->state &= ~VAR_0;
  FUNC_0(&VAR_1->softcallout);
 }
 VAR_1->pqueue_start = VAR_1->pqueue_end;
}
