
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct thread {struct proc* td_proc; } ;
struct proc {scalar_t__ p_state; scalar_t__ p_oppid; int * p_sigacts; int * p_args; TYPE_3__* p_ucred; int p_rux; int p_ru; int p_crux; TYPE_2__* p_stats; scalar_t__ p_xsig; scalar_t__ p_xexit; int * p_klist; int p_pid; int * p_procdesc; int p_pwait; int p_ksi; TYPE_1__* p_pptr; int p_slock; } ;
struct TYPE_6__ {int cr_ruidinfo; } ;
struct TYPE_5__ {int p_cru; } ;
struct TYPE_4__ {scalar_t__ p_pid; } ;


 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (int,char*) ;
 int VAR_0 ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (struct proc*,int ) ;
 int VAR_1 ;
 int * FUNC_5 (int ) ;
 int VAR_2 ;
 int FUNC_6 (struct proc*) ;
 int FUNC_7 (struct proc*,int ) ;
 int FUNC_8 (struct proc*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int ,int,int ) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct proc*) ;
 int FUNC_15 (struct proc*) ;
 int FUNC_16 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct proc*,int ,int ) ;
 int FUNC_19 (struct proc*) ;
 int FUNC_20 (int ,int ) ;
 struct proc* FUNC_21 (struct proc*) ;
 int FUNC_22 (struct proc*,struct proc*,int) ;
 int FUNC_23 (struct proc*,int *) ;
 int VAR_11 ;
 int FUNC_24 (struct proc*) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_25 (struct proc*) ;
 int FUNC_26 (struct proc*,int ,int) ;
 int FUNC_27 (struct proc*,int) ;
 int FUNC_28 (struct proc*) ;
 int FUNC_29 (int *,int *,int *,int *) ;
 int FUNC_30 (int *) ;
 int FUNC_31 (int ) ;
 int FUNC_32 (int *,int ) ;
 int FUNC_33 (int *) ;
 int FUNC_34 (int *) ;
 int FUNC_35 (struct proc*) ;
 int FUNC_36 (int ,struct proc*) ;
 int FUNC_37 (struct proc*) ;
 int FUNC_38 (struct proc*) ;

void
FUNC_39(struct thread *VAR_14, struct proc *VAR_15, int *VAR_16, int VAR_17)
{
 struct proc *VAR_18, *VAR_19;

 FUNC_32(&VAR_12, VAR_5);
 FUNC_7(VAR_15, VAR_1);
 FUNC_2(VAR_15->p_state == VAR_3, ("proc_reap: !PRS_ZOMBIE"));

 FUNC_16(&VAR_15->p_slock);

 VAR_18 = VAR_14->td_proc;

 if (VAR_16)
  *VAR_16 = FUNC_3(VAR_15->p_xexit, VAR_15->p_xsig);
 if (VAR_17 & VAR_7) {




  FUNC_8(VAR_15);
  FUNC_34(&VAR_12);
  return;
 }

 FUNC_6(VAR_18);
 FUNC_31(VAR_15->p_ksi);
 FUNC_8(VAR_18);





 if (VAR_15->p_oppid != VAR_15->p_pptr->p_pid) {
  FUNC_8(VAR_15);
  VAR_19 = FUNC_21(VAR_15);
  FUNC_6(VAR_19);
  FUNC_6(VAR_15);
  FUNC_0(VAR_0,
      "wait: traced child %d moved back to parent %d", VAR_15->p_pid,
      VAR_19->p_pid);
  FUNC_22(VAR_15, VAR_19, 0);
  FUNC_8(VAR_15);
  FUNC_18(VAR_19, VAR_6, VAR_15->p_ksi);
  FUNC_38(VAR_19);
  FUNC_12(&VAR_15->p_pwait);
  FUNC_8(VAR_19);
  FUNC_34(&VAR_12);
  return;
 }
 FUNC_8(VAR_15);





 FUNC_33(FUNC_5(VAR_15->p_pid));
 FUNC_4(VAR_15, VAR_9);
 FUNC_34(FUNC_5(VAR_15->p_pid));
 FUNC_4(VAR_15, VAR_10);
 FUNC_27(VAR_15, 1);
 FUNC_28(VAR_15);
 FUNC_6(VAR_15);
 FUNC_19(VAR_15);
 FUNC_8(VAR_15);
 FUNC_14(VAR_15);
 if (VAR_15->p_procdesc != ((void*)0))
  FUNC_24(VAR_15);
 FUNC_34(&VAR_12);

 FUNC_20(VAR_2, VAR_15->p_pid);

 FUNC_6(VAR_15);
 FUNC_13(VAR_15->p_klist);
 VAR_15->p_klist = ((void*)0);
 FUNC_8(VAR_15);







 VAR_15->p_xexit = VAR_15->p_xsig = 0;

 FUNC_6(VAR_18);
 FUNC_29(&VAR_18->p_stats->p_cru, &VAR_18->p_crux, &VAR_15->p_ru, &VAR_15->p_rux);
 FUNC_8(VAR_18);




 (void)FUNC_10(VAR_15->p_ucred->cr_ruidinfo, -1, 0);
 FUNC_25(VAR_15);




 FUNC_11(VAR_15->p_ucred);
 FUNC_23(VAR_15, ((void*)0));
 FUNC_17(VAR_15->p_args);
 VAR_15->p_args = ((void*)0);
 FUNC_30(VAR_15->p_sigacts);
 VAR_15->p_sigacts = ((void*)0);




 FUNC_35(VAR_15);





 FUNC_37(VAR_15);




 FUNC_2(FUNC_1(VAR_15),
     ("proc_reap: no residual thread!"));
 FUNC_36(VAR_11, VAR_15);
 FUNC_9(&VAR_8, -1);
}
