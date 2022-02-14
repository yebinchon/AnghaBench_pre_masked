
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int iq; } ;
struct octeon_device {struct lio_instr_queue** instr_queue; TYPE_1__ io_qmask; } ;
struct mbuf {int dummy; } ;
struct lio_instr_queue {int enq_lock; int br; } ;
struct lio {struct octeon_device* oct_dev; } ;
struct ifnet {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct octeon_device*) ;
 struct mbuf* FUNC_2 (int ) ;
 struct lio* FUNC_3 (struct ifnet*) ;
 int FUNC_4 (struct ifnet*) ;
 int FUNC_5 (struct mbuf*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void
FUNC_8(struct ifnet *VAR_0)
{
 struct lio *VAR_1 = FUNC_3(VAR_0);
 struct octeon_device *VAR_2 = VAR_1->oct_dev;
 struct lio_instr_queue *VAR_3;
 struct mbuf *VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_1(VAR_2); VAR_5++) {
  if (!(VAR_2->io_qmask.iq & FUNC_0(VAR_5)))
   continue;

  VAR_3 = VAR_2->instr_queue[VAR_5];

  FUNC_6(&VAR_3->enq_lock);
  while ((VAR_4 = FUNC_2(VAR_3->br)) != ((void*)0))
   FUNC_5(VAR_4);

  FUNC_7(&VAR_3->enq_lock);
 }

 FUNC_4(VAR_0);
}
