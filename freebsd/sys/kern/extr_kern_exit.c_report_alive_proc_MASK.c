
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct thread {int * td_retval; struct proc* td_proc; } ;
struct proc {void* p_xsig; int p_pid; int p_ksi; int p_flag; } ;
struct TYPE_3__ {int si_code; void* si_status; } ;
typedef TYPE_1__ siginfo_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (struct proc*,int ) ;
 int FUNC_3 (struct proc*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 void* FUNC_4 (void*) ;
 int VAR_9 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(struct thread *VAR_10, struct proc *VAR_11, siginfo_t *VAR_12,
    int *VAR_13, int VAR_14, int VAR_15)
{
 bool VAR_16;

 FUNC_2(VAR_11, VAR_3);
 FUNC_6(&VAR_9, VAR_6);
 FUNC_0(VAR_15 == VAR_2 || VAR_15 == VAR_1 ||
     VAR_15 == VAR_0);

 VAR_16 = VAR_15 == VAR_0;
 if ((VAR_14 & VAR_8) == 0) {
  if (VAR_16)
   VAR_11->p_flag &= ~VAR_4;
  else
   VAR_11->p_flag |= VAR_5;
  FUNC_1(VAR_10->td_proc);
  FUNC_5(VAR_11->p_ksi);
  FUNC_3(VAR_10->td_proc);
 }
 FUNC_7(&VAR_9);
 if (VAR_12 != ((void*)0)) {
  VAR_12->si_code = VAR_15;
  VAR_12->si_status = VAR_16 ? VAR_7 : VAR_11->p_xsig;
 }
 if (VAR_13 != ((void*)0))
  *VAR_13 = VAR_16 ? VAR_7 : FUNC_4(VAR_11->p_xsig);
 FUNC_3(VAR_11);
 VAR_10->td_retval[0] = VAR_11->p_pid;
}
