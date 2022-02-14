
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_long ;
struct trapframe {int dummy; } ;
struct TYPE_4__ {scalar_t__ md_tls_tcb_offset; scalar_t__ md_ss_addr; int md_flags; } ;
struct thread {TYPE_2__ td_md; TYPE_1__* td_frame; int td_proc; } ;
struct image_params {int entry_addr; scalar_t__ ps_strings; } ;
typedef int register_t ;
typedef int caddr_t ;
struct TYPE_3__ {int sp; int pc; int t9; int sr; int a0; int a3; scalar_t__ a2; scalar_t__ a1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct thread* FUNC_0 (int ) ;
 int FUNC_1 (int ,struct thread*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_3 (int ,int) ;
 int VAR_12 ;
 int FUNC_4 () ;

void
FUNC_5(struct thread *VAR_13, struct image_params *VAR_14, u_long VAR_15)
{

 FUNC_3((caddr_t)VAR_13->td_frame, sizeof(struct trapframe));

 VAR_13->td_frame->sp = ((register_t)VAR_15) & ~(VAR_8 - 1);
 VAR_13->td_frame->pc = VAR_14->entry_addr & ~3;
 VAR_13->td_frame->t9 = VAR_14->entry_addr & ~3;
 VAR_13->td_frame->sr = VAR_4 | VAR_1 | VAR_2 |
     (FUNC_4() & VAR_3);
 VAR_13->td_frame->a0 = (register_t) VAR_15;
 VAR_13->td_frame->a1 = 0;
 VAR_13->td_frame->a2 = 0;
 VAR_13->td_frame->a3 = (register_t)VAR_14->ps_strings;

 VAR_13->td_md.md_flags &= ~VAR_0;
 if (FUNC_0(VAR_12) == VAR_13)
     FUNC_1(VAR_12, (struct thread *)0);
 VAR_13->td_md.md_ss_addr = 0;

 VAR_13->td_md.md_tls_tcb_offset = VAR_11 + VAR_10;
}
