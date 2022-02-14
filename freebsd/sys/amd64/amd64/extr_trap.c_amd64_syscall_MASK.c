
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int gen; } ;
struct TYPE_12__ {TYPE_2__ md_invl_gen; } ;
struct TYPE_10__ {int code; } ;
struct thread {int td_errno; TYPE_6__* td_pcb; TYPE_8__* td_frame; TYPE_3__ td_md; TYPE_1__ td_sa; int td_proc; } ;
struct TYPE_13__ {void* ksi_addr; int ksi_code; int ksi_signo; } ;
typedef TYPE_4__ ksiginfo_t ;
struct TYPE_15__ {scalar_t__ tf_rip; int tf_rflags; } ;
struct TYPE_14__ {scalar_t__ pcb_save; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_6__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_8__*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct thread*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 () ;
 int FUNC_9 (TYPE_6__*,int ) ;
 int FUNC_10 (struct thread*) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (struct thread*) ;
 int FUNC_13 (struct thread*,TYPE_4__*) ;

void
FUNC_14(struct thread *VAR_5, int VAR_6)
{
 ksiginfo_t VAR_7;







 FUNC_10(VAR_5);




 if (FUNC_3(VAR_6)) {
  VAR_5->td_frame->tf_rflags &= ~VAR_1;
  FUNC_6(&VAR_7);
  VAR_7.ksi_signo = VAR_2;
  VAR_7.ksi_code = VAR_3;
  VAR_7.ksi_addr = (void *)VAR_5->td_frame->tf_rip;
  FUNC_13(VAR_5, &VAR_7);
 }

 FUNC_0(FUNC_1(VAR_5->td_pcb),
     ("System call %s returning with kernel FPU ctx leaked",
      FUNC_11(VAR_5->td_proc, VAR_5->td_sa.code)));
 FUNC_0(VAR_5->td_pcb->pcb_save == FUNC_5(VAR_5),
     ("System call %s returning with mangled pcb_save",
      FUNC_11(VAR_5->td_proc, VAR_5->td_sa.code)));
 FUNC_0(FUNC_8(),
     ("System call %s returning with leaked invl_gen %lu",
     FUNC_11(VAR_5->td_proc, VAR_5->td_sa.code),
     VAR_5->td_md.md_invl_gen.gen));

 FUNC_12(VAR_5);
 if (FUNC_3(VAR_5->td_frame->tf_rip >= VAR_4))
  FUNC_9(VAR_5->td_pcb, VAR_0);

 FUNC_4(VAR_5->td_errno);
}
