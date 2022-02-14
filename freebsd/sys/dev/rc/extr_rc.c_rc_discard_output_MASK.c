
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rc_chans {int rc_flags; TYPE_2__* rc_tp; int rc_obufend; int rc_optr; TYPE_1__* rc_rcb; } ;
struct TYPE_4__ {int t_state; } ;
struct TYPE_3__ {int sc_scheduled_event; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_3(struct rc_chans *VAR_3)
{
 FUNC_0();
 if (VAR_3->rc_flags & VAR_1) {
  VAR_3->rc_rcb->sc_scheduled_event -= VAR_0;
  VAR_3->rc_flags &= ~VAR_1;
 }
 VAR_3->rc_optr = VAR_3->rc_obufend;
 VAR_3->rc_tp->t_state &= ~VAR_2;
 FUNC_1();
 FUNC_2(VAR_3->rc_tp);
}
