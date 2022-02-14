
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int * td_retval; TYPE_1__* td_proc; } ;
struct proc {int p_sigparent; int p_pid; } ;
struct linux_emuldata {int * child_clear_tid; int * child_set_tid; } ;
struct linux_clone_args {int flags; int tls; int stack; int * parent_tidptr; int * child_tidptr; } ;
struct fork_req {int fr_flags; struct proc** fr_procp; } ;
typedef int fr ;
struct TYPE_2__ {int p_pptr; } ;


 int VAR_0 ;
 struct thread* FUNC_0 (struct proc*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct proc*) ;
 int FUNC_4 (struct proc*) ;
 int FUNC_5 (int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_6 (struct thread*) ;
 int FUNC_7 (struct fork_req*,int) ;
 int FUNC_8 (int *,int *,int) ;
 struct linux_emuldata* FUNC_9 (struct thread*) ;
 int FUNC_10 (struct thread*,struct fork_req*) ;
 int FUNC_11 (struct thread*,char*) ;
 int FUNC_12 (struct thread*,struct thread*,int) ;
 int FUNC_13 (struct thread*,int ) ;
 int FUNC_14 (struct thread*,int ) ;
 int FUNC_15 (int) ;
 int FUNC_16 (struct proc*,int ,int) ;
 int VAR_18 ;
 int FUNC_17 (struct thread*,int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (struct thread*) ;
 int FUNC_21 (struct thread*) ;

__attribute__((used)) static int
FUNC_22(struct thread *VAR_19, struct linux_clone_args *VAR_20)
{
 struct fork_req VAR_21;
 int VAR_22, VAR_23 = VAR_14 | VAR_16;
 struct proc *VAR_24;
 struct thread *VAR_25;
 int VAR_26;
 struct linux_emuldata *VAR_27;

 VAR_26 = VAR_20->flags & 0x000000ff;
 if (FUNC_2(VAR_26)) {
  VAR_26 = FUNC_15(VAR_26);
 } else if (VAR_26 != 0)
  return (VAR_0);

 if (VAR_20->flags & VAR_10)
  VAR_23 |= VAR_12;
 if (VAR_20->flags & VAR_8)
  VAR_23 |= VAR_15;






 if (!(VAR_20->flags & (VAR_3 | VAR_4)))
  VAR_23 |= VAR_11;

 if (VAR_20->flags & VAR_6)
  if (VAR_20->parent_tidptr == ((void*)0))
   return (VAR_0);

 if (VAR_20->flags & VAR_9)
  VAR_23 |= VAR_13;

 FUNC_7(&VAR_21, sizeof(VAR_21));
 VAR_21.fr_flags = VAR_23;
 VAR_21.fr_procp = &VAR_24;
 VAR_22 = FUNC_10(VAR_19, &VAR_21);
 if (VAR_22)
  return (VAR_22);

 VAR_25 = FUNC_0(VAR_24);


 FUNC_12(VAR_19, VAR_25, VAR_20->flags);

 VAR_27 = FUNC_9(VAR_25);
 FUNC_1(VAR_27 != ((void*)0), ("clone_proc: emuldata not found.\n"));

 if (VAR_20->flags & VAR_2)
  VAR_27->child_set_tid = VAR_20->child_tidptr;
 else
  VAR_27->child_set_tid = ((void*)0);

 if (VAR_20->flags & VAR_1)
  VAR_27->child_clear_tid = VAR_20->child_tidptr;
 else
  VAR_27->child_clear_tid = ((void*)0);

 if (VAR_20->flags & VAR_6) {
  VAR_22 = FUNC_8(&VAR_24->p_pid, VAR_20->parent_tidptr,
      sizeof(VAR_24->p_pid));
  if (VAR_22)
   FUNC_11(VAR_19, "copyout p_pid failed!");
 }

 FUNC_3(VAR_24);
 VAR_24->p_sigparent = VAR_26;
 FUNC_4(VAR_24);





 FUNC_14(VAR_25, FUNC_5(VAR_20->stack));

 if (VAR_20->flags & VAR_7)
  FUNC_13(VAR_25, VAR_20->tls);





 if (VAR_20->flags & VAR_5) {
  FUNC_18(&VAR_18);
  FUNC_3(VAR_24);
  FUNC_16(VAR_24, VAR_19->td_proc->p_pptr, 1);
  FUNC_4(VAR_24);
  FUNC_19(&VAR_18);
 }




 FUNC_20(VAR_25);
 FUNC_6(VAR_25);
 FUNC_17(VAR_25, VAR_17);
 FUNC_21(VAR_25);

 VAR_19->td_retval[0] = VAR_24->p_pid;

 return (0);
}
