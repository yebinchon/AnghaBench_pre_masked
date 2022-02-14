
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct trapframe {int tf_rflags; scalar_t__ tf_rip; } ;
struct thread {int td_errno; struct trapframe* td_frame; } ;
typedef int register_t ;
struct TYPE_4__ {void* ksi_addr; int ksi_code; int ksi_signo; } ;
typedef TYPE_1__ ksiginfo_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 struct thread* VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct thread*) ;
 int FUNC_3 (struct thread*) ;
 int FUNC_4 (struct thread*,TYPE_1__*) ;

void
FUNC_5(struct trapframe *VAR_4)
{
 struct thread *VAR_5;
 register_t VAR_6;
 ksiginfo_t VAR_7;

 VAR_6 = VAR_4->tf_rflags;
 VAR_5 = VAR_3;
 VAR_5->td_frame = VAR_4;

 FUNC_2(VAR_5);




 if (VAR_6 & VAR_0) {
  VAR_4->tf_rflags &= ~VAR_0;
  FUNC_1(&VAR_7);
  VAR_7.ksi_signo = VAR_1;
  VAR_7.ksi_code = VAR_2;
  VAR_7.ksi_addr = (void *)VAR_4->tf_rip;
  FUNC_4(VAR_5, &VAR_7);
 }

 FUNC_3(VAR_5);
 FUNC_0(VAR_5->td_errno);
}
