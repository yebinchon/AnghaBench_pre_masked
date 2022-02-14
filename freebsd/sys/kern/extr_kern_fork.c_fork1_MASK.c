
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_ooffset_t ;
typedef scalar_t__ u_int ;
struct vmspace {int dummy; } ;
struct ucred {int cr_ruid; int cr_ruidinfo; } ;
struct timeval {int dummy; } ;
struct thread {scalar_t__ td_kstack; int td_kstack_pages; struct ucred* td_ucred; struct proc* td_proc; } ;
struct proc {int p_pid; int * p_ucred; int p_ktr; int p_mtx; int p_klist; int p_vmspace; } ;
struct fork_req {int fr_flags; int fr_pages; int fr_pd_flags; int * fr_pd_fd; int fr_pd_fcaps; scalar_t__* fr_pidp; int ** fr_procp; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct thread* FUNC_0 (struct proc*) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int ) ;
 int VAR_14 ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int ,int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct ucred*) ;
 int FUNC_10 (struct thread*,struct fork_req*,struct proc*,struct thread*,struct vmspace*,struct file*) ;
 int FUNC_11 (struct thread*,struct file*,int ) ;
 int FUNC_12 (struct file*,struct thread*) ;
 int FUNC_13 (struct thread*,int) ;
 int VAR_19 ;
 int FUNC_14 (int *) ;
 int VAR_20 ;
 int FUNC_15 (struct thread*,int ) ;
 int FUNC_16 (struct proc*) ;
 int FUNC_17 (struct proc*) ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_18 (char*,int) ;
 scalar_t__ FUNC_19 (struct timeval*,int*,int) ;
 int FUNC_20 (char*,int,int) ;
 scalar_t__ FUNC_21 (struct ucred*,int ) ;
 int FUNC_22 (struct proc*,struct thread*) ;
 int FUNC_23 (struct proc*,int ) ;
 int VAR_23 ;
 int FUNC_24 (struct thread*,struct file**,int *,int,int ) ;
 int FUNC_25 (struct proc*) ;
 int FUNC_26 (struct proc*,struct proc*) ;
 int FUNC_27 (scalar_t__) ;
 int FUNC_28 (scalar_t__) ;
 int FUNC_29 (int *) ;
 int FUNC_30 (int *) ;
 struct thread* FUNC_31 (int) ;
 int FUNC_32 (struct thread*,int) ;
 struct proc* FUNC_33 (int ,int ) ;
 int FUNC_34 (int ,struct proc*) ;
 int FUNC_35 (struct thread*) ;
 struct vmspace* FUNC_36 (int ,scalar_t__*) ;
 int FUNC_37 (struct vmspace*) ;

int
FUNC_38(struct thread *VAR_24, struct fork_req *VAR_25)
{
 struct proc *VAR_26, *VAR_27;
 struct thread *VAR_28;
 struct vmspace *VAR_29;
 struct ucred *VAR_30;
 struct file *VAR_31;
 vm_ooffset_t VAR_32;
 int VAR_33, VAR_34;
 static int VAR_35;
 static struct timeval VAR_36;
 int VAR_37, VAR_38;

 VAR_37 = VAR_25->fr_flags;
 VAR_38 = VAR_25->fr_pages;

 if ((VAR_37 & VAR_13) != 0)
  FUNC_1(VAR_25->fr_procp != ((void*)0) && VAR_25->fr_pidp == ((void*)0));
 else
  FUNC_1(VAR_25->fr_procp == ((void*)0));


 if ((VAR_37 & ~(VAR_9 | FUNC_2(VAR_14))) != 0)
  return (VAR_1);


 if ((VAR_37 & FUNC_2(VAR_14)) != 0 && (VAR_37 & VAR_15) == 0)
  return (VAR_1);


 if ((VAR_37 & (VAR_8|VAR_7)) == (VAR_8|VAR_7))
  return (VAR_1);


 if ((VAR_37 & VAR_15) != 0 && (u_int)FUNC_3(VAR_37) > VAR_17)
  return (VAR_1);

 if ((VAR_37 & VAR_12) != 0) {

  if ((VAR_37 & VAR_11) == 0)
   return (VAR_1);


  if (VAR_25->fr_pd_fd == ((void*)0))
   return (VAR_1);


  if ((VAR_25->fr_pd_flags & ~VAR_4) != 0)
   return (VAR_1);
 }

 VAR_26 = VAR_24->td_proc;





 if ((VAR_37 & VAR_11) == 0) {
  if (VAR_25->fr_procp != ((void*)0))
   *VAR_25->fr_procp = ((void*)0);
  else if (VAR_25->fr_pidp != ((void*)0))
   *VAR_25->fr_pidp = 0;
  return (FUNC_13(VAR_24, VAR_37));
 }

 VAR_31 = ((void*)0);
 VAR_27 = ((void*)0);
 VAR_29 = ((void*)0);
 VAR_34 = FUNC_6(&VAR_22, 1) + 1;
 if (VAR_34 >= VAR_21 - 10) {
  if (FUNC_21(VAR_24->td_ucred, VAR_5) != 0 ||
      VAR_34 >= VAR_21) {
   VAR_33 = VAR_0;
   FUNC_29(&VAR_18);
   if (FUNC_19(&VAR_36, &VAR_35, 1)) {
    FUNC_20("maxproc limit exceeded by uid %u "
        "(pid %d); see tuning(7) and "
        "login.conf(5)\n",
        VAR_24->td_ucred->cr_ruid, VAR_26->p_pid);
   }
   FUNC_30(&VAR_18);
   goto fail2;
  }
 }






 if (VAR_37 & VAR_12) {
  VAR_33 = FUNC_24(VAR_24, &VAR_31, VAR_25->fr_pd_fd,
      VAR_25->fr_pd_flags, VAR_25->fr_pd_fcaps);
  if (VAR_33 != 0)
   goto fail2;
 }

 VAR_32 = 0;
 if (VAR_38 == 0)
  VAR_38 = VAR_20;

 VAR_27 = FUNC_33(VAR_23, VAR_3);
 VAR_28 = FUNC_0(VAR_27);
 if (VAR_28 == ((void*)0)) {
  VAR_28 = FUNC_31(VAR_38);
  if (VAR_28 == ((void*)0)) {
   VAR_33 = VAR_2;
   goto fail2;
  }
  FUNC_22(VAR_27, VAR_28);
 } else {
  if (VAR_28->td_kstack == 0 || VAR_28->td_kstack_pages != VAR_38) {
   if (VAR_28->td_kstack != 0)
    FUNC_35(VAR_28);
   if (!FUNC_32(VAR_28, VAR_38)) {
    VAR_33 = VAR_2;
    goto fail2;
   }
  }
 }

 if ((VAR_37 & VAR_10) == 0) {
  VAR_29 = FUNC_36(VAR_26->p_vmspace, &VAR_32);
  if (VAR_29 == ((void*)0)) {
   VAR_33 = VAR_2;
   goto fail2;
  }
  if (!FUNC_27(VAR_32)) {






   FUNC_28(VAR_32);
   VAR_33 = VAR_2;
   goto fail2;
  }
 } else
  VAR_29 = ((void*)0);





 FUNC_23(VAR_27, FUNC_9(VAR_24->td_ucred));




 VAR_33 = FUNC_26(VAR_26, VAR_27);
 if (VAR_33 != 0) {
  VAR_33 = VAR_0;
  goto fail1;
 }




 VAR_27->p_klist = FUNC_14(&VAR_27->p_mtx);
 FUNC_4(&VAR_27->p_ktr);





 VAR_30 = VAR_24->td_ucred;
 if (!FUNC_7(VAR_30->cr_ruidinfo, 1, FUNC_15(VAR_24, VAR_16))) {
  if (FUNC_21(VAR_30, VAR_6) != 0)
   goto fail0;
  FUNC_7(VAR_30->cr_ruidinfo, 1, 0);
 }

 FUNC_10(VAR_24, VAR_25, VAR_27, VAR_28, VAR_29, VAR_31);
 return (0);
fail0:
 VAR_33 = VAR_0;



 FUNC_25(VAR_27);
fail1:
 FUNC_8(VAR_27->p_ucred);
 VAR_27->p_ucred = ((void*)0);
fail2:
 if (VAR_29 != ((void*)0))
  FUNC_37(VAR_29);
 FUNC_34(VAR_23, VAR_27);
 if ((VAR_37 & VAR_12) != 0 && VAR_31 != ((void*)0)) {
  FUNC_11(VAR_24, VAR_31, *VAR_25->fr_pd_fd);
  FUNC_12(VAR_31, VAR_24);
 }
 FUNC_5(&VAR_22, -1);
 FUNC_18("fork", VAR_19 / 2);
 return (VAR_33);
}
