
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ (* int_pending ) (struct ida_softc*) ;int (* done ) (struct ida_softc*) ;} ;
struct ida_softc {int lock; int dev; TYPE_1__ cmd; } ;
struct ida_qcb {scalar_t__ state; TYPE_3__* hwqcb; } ;
typedef int intmax_t ;
typedef int bus_addr_t ;
struct TYPE_5__ {scalar_t__ error; } ;
struct TYPE_6__ {TYPE_2__ req; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct ida_softc*,struct ida_qcb*) ;
 int FUNC_2 (struct ida_softc*) ;
 struct ida_qcb* FUNC_3 (struct ida_softc*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct ida_softc*) ;
 int FUNC_7 (struct ida_softc*) ;

void
FUNC_8(void *VAR_2)
{
 struct ida_softc *VAR_3;
 struct ida_qcb *VAR_4;
 bus_addr_t VAR_5;

 VAR_3 = (struct ida_softc *)VAR_2;

 FUNC_4(&VAR_3->lock);
 if (VAR_3->cmd.int_pending(VAR_3) == 0) {
  FUNC_5(&VAR_3->lock);
  return;
 }

 while ((VAR_5 = VAR_3->cmd.done(VAR_3)) != 0) {
  VAR_4 = FUNC_3(VAR_3, VAR_5 & ~3);

  if (VAR_4 == ((void*)0) || VAR_4->state != VAR_1) {
   FUNC_0(VAR_3->dev,
       "ignoring completion %jx\n", (intmax_t)VAR_5);
   continue;
  }

  if ((VAR_5 & 3) && (VAR_4->hwqcb->req.error == 0))
   VAR_4->hwqcb->req.error = VAR_0;
  FUNC_1(VAR_3, VAR_4);
 }
 FUNC_2(VAR_3);
 FUNC_5(&VAR_3->lock);
}
