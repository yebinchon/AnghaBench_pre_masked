
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct trapframe {int tf_eflags; scalar_t__ tf_eip; } ;
struct TYPE_7__ {int code; } ;
struct thread {TYPE_1__ td_sa; int td_proc; TYPE_6__* td_pcb; struct trapframe* td_frame; } ;
typedef int register_t ;
struct TYPE_8__ {void* ksi_addr; int ksi_code; int ksi_signo; } ;
typedef TYPE_2__ ksiginfo_t ;
struct TYPE_10__ {scalar_t__ pcb_save; } ;
struct TYPE_9__ {int pcb_flags; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (TYPE_6__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct trapframe*) ;
 int VAR_4 ;
 TYPE_5__* VAR_5 ;
 struct thread* VAR_6 ;
 scalar_t__ FUNC_3 (struct thread*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct thread*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct thread*) ;
 int FUNC_9 (struct thread*,TYPE_2__*) ;

void
FUNC_10(struct trapframe *VAR_7)
{
 struct thread *VAR_8;
 register_t VAR_9;
 ksiginfo_t VAR_10;
 VAR_9 = VAR_7->tf_eflags;

 VAR_8 = VAR_6;
 VAR_8->td_frame = VAR_7;

 FUNC_6(VAR_8);




 if ((VAR_9 & VAR_1) && !(VAR_9 & VAR_2)) {
  VAR_7->tf_eflags &= ~VAR_1;
  FUNC_4(&VAR_10);
  VAR_10.ksi_signo = VAR_3;
  VAR_10.ksi_code = VAR_4;
  VAR_10.ksi_addr = (void *)VAR_7->tf_eip;
  FUNC_9(VAR_8, &VAR_10);
 }

 FUNC_0(FUNC_1(VAR_8->td_pcb),
     ("System call %s returning with kernel FPU ctx leaked",
      FUNC_7(VAR_8->td_proc, VAR_8->td_sa.code)));
 FUNC_0(VAR_8->td_pcb->pcb_save == FUNC_3(VAR_8),
     ("System call %s returning with mangled pcb_save",
      FUNC_7(VAR_8->td_proc, VAR_8->td_sa.code)));

 FUNC_8(VAR_8);
}
