
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct thread {TYPE_1__* td_frame; int td_proc; } ;
struct TYPE_5__ {uintptr_t ss_size; scalar_t__ ss_sp; } ;
typedef TYPE_2__ stack_t ;
typedef int register_t ;
typedef int int32_t ;
struct TYPE_4__ {uintptr_t tf_rsp; uintptr_t tf_rip; int tf_rdi; int tf_flags; int tf_gs; int tf_fs; void* tf_es; void* tf_ds; scalar_t__ tf_rbp; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct thread*) ;
 int FUNC_2 (void*,int ) ;
 int FUNC_3 (void*,int ) ;

void
FUNC_4(struct thread *VAR_5, void (*VAR_6)(void *), void *VAR_7,
    stack_t *VAR_8)
{
 FUNC_1(VAR_5);
 VAR_5->td_frame->tf_rbp = 0;
 VAR_5->td_frame->tf_rsp =
     ((register_t)VAR_8->ss_sp + VAR_8->ss_size) & ~0x0f;
 VAR_5->td_frame->tf_rsp -= 8;
 VAR_5->td_frame->tf_rip = (register_t)VAR_6;
 VAR_5->td_frame->tf_ds = VAR_2;
 VAR_5->td_frame->tf_es = VAR_2;
 VAR_5->td_frame->tf_fs = VAR_3;
 VAR_5->td_frame->tf_gs = VAR_4;
 VAR_5->td_frame->tf_flags = VAR_1;


 FUNC_2((void *)VAR_5->td_frame->tf_rsp, 0);


 VAR_5->td_frame->tf_rdi = (register_t)VAR_7;
}
