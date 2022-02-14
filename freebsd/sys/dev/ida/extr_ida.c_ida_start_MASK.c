
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* submit ) (struct ida_softc*,struct ida_qcb*) ;scalar_t__ (* fifo_full ) (struct ida_softc*) ;} ;
struct ida_softc {TYPE_1__ cmd; int qactive; int ch; int qcb_queue; int lock; } ;
struct ida_qcb {int state; } ;
struct TYPE_4__ {int stqe; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ida_qcb* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int,int ,struct ida_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (struct ida_softc*) ;
 int FUNC_5 (struct ida_softc*,struct ida_qcb*) ;

__attribute__((used)) static void
FUNC_6(struct ida_softc *VAR_6)
{
 struct ida_qcb *VAR_7;

 if (!VAR_2)
  FUNC_3(&VAR_6->lock, VAR_0);
 while ((VAR_7 = FUNC_0(&VAR_6->qcb_queue)) != ((void*)0)) {
  if (VAR_6->cmd.fifo_full(VAR_6))
   break;
  FUNC_1(&VAR_6->qcb_queue, VAR_5.stqe);






  if (!VAR_6->qactive && !VAR_2)
   FUNC_2(&VAR_6->ch, VAR_3 * 5, VAR_4, VAR_6);
  VAR_6->qactive++;

  VAR_7->state = VAR_1;
  VAR_6->cmd.submit(VAR_6, VAR_7);
 }
}
