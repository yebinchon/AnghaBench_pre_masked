
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
struct vm_map {int pmap; } ;
struct trapframe {scalar_t__ tf_pc; int tf_spsr; scalar_t__ tf_usr_lr; } ;
struct TYPE_4__ {scalar_t__ md_spinlock_count; } ;
struct thread {scalar_t__ td_cowgen; struct proc* td_proc; scalar_t__ td_pticks; TYPE_1__ td_md; struct trapframe* td_frame; } ;
struct proc {scalar_t__ p_cowgen; TYPE_2__* p_vmspace; } ;
struct ksig {int dummy; } ;
struct TYPE_6__ {int traps; } ;
struct TYPE_5__ {struct vm_map vm_map; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct trapframe*) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct thread*,int,int) ;
 struct thread* VAR_10 ;
 int FUNC_5 (struct trapframe*,int ,scalar_t__,int *,struct ksig*) ;
 int FUNC_6 (int) ;
 int VAR_11 ;
 scalar_t__ FUNC_7 (int ,scalar_t__,int,int) ;
 int FUNC_8 (char*,void*,void*) ;
 int FUNC_9 (struct thread*) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 (struct thread*,struct trapframe*) ;
 TYPE_3__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_12 (struct vm_map*,scalar_t__,int,int ,int*,int*) ;

__attribute__((used)) static void
FUNC_13(struct trapframe *VAR_15)
{
 struct thread *VAR_16;
 struct proc * VAR_17;
 struct vm_map *VAR_18;
 vm_offset_t VAR_19, VAR_20;
 int VAR_21 = 0, VAR_22, VAR_23;
 struct ksig VAR_24;
  VAR_16 = VAR_10;
 VAR_17 = VAR_16->td_proc;
 FUNC_1(VAR_13);

 if (FUNC_0(VAR_15)) {
  VAR_16->td_frame = VAR_15;
  if (VAR_16->td_cowgen != VAR_16->td_proc->p_cowgen)
   FUNC_9(VAR_16);
 }
 VAR_19 = VAR_15->tf_pc;
 if (VAR_16->td_md.md_spinlock_count == 0) {
  if (FUNC_3(VAR_15->tf_spsr & VAR_3) == 0)
   FUNC_6(VAR_3);
  if (FUNC_3(VAR_15->tf_spsr & VAR_2) == 0)
   FUNC_6(VAR_2);
 }


 if (FUNC_2(!FUNC_0(VAR_15)))
  FUNC_5(VAR_15, 0, VAR_15->tf_pc, ((void*)0), &VAR_24);
 VAR_16->td_pticks = 0;



 if (FUNC_2(VAR_19 >= VAR_6 ||
     (VAR_19 < VAR_7 && VAR_14 == VAR_0))) {
  VAR_22 = VAR_4;
  VAR_23 = 0;
  goto do_trapsignal;
 }

 VAR_18 = &VAR_16->td_proc->p_vmspace->vm_map;
 VAR_20 = FUNC_10(VAR_19);







 if (FUNC_7(VAR_18->pmap, VAR_20, VAR_9, 1))
  goto out;

 VAR_21 = FUNC_12(VAR_18, VAR_20, VAR_9 | VAR_8,
     VAR_5, &VAR_22, &VAR_23);
 if (FUNC_3(VAR_21 == VAR_1))
  goto out;

do_trapsignal:
 FUNC_4(VAR_16, VAR_22, VAR_23);

out:
 FUNC_11(VAR_16, VAR_15);

}
