
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct thread {struct proc* td_proc; } ;
struct proc {TYPE_1__* p_session; } ;
struct TYPE_4__ {int sc_dev_opened; scalar_t__ sc_dev_sid; } ;
struct TYPE_3__ {scalar_t__ s_sid; } ;


 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*) ;
 TYPE_2__* VAR_0 ;

bool
FUNC_2(const struct thread *VAR_1)
{
 struct proc *VAR_2;

 VAR_2 = VAR_1->td_proc;

 if (VAR_0->sc_dev_opened == 0)
  return (0);

 FUNC_0(VAR_2);
 if (VAR_2->p_session->s_sid == VAR_0->sc_dev_sid) {
  FUNC_1(VAR_2);
  return (1);
 }
 FUNC_1(VAR_2);

 return (0);
}
