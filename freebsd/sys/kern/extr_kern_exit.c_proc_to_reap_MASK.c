
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uid_t ;
struct thread {int dummy; } ;
struct rusage {int ru_stime; int ru_utime; } ;
struct proc {scalar_t__ p_state; scalar_t__ p_sigparent; TYPE_4__* p_stats; struct rusage p_ru; TYPE_3__* p_ucred; int p_pid; void* p_xexit; int p_xsig; TYPE_1__* p_session; int p_pgid; int * p_procdesc; } ;
struct __wrusage {struct rusage wru_children; struct rusage wru_self; } ;
struct TYPE_12__ {int si_uid; int si_pid; void* si_status; int si_code; scalar_t__ si_signo; scalar_t__ si_errno; } ;
typedef TYPE_5__ siginfo_t ;
typedef int pid_t ;
typedef int idtype_t ;
typedef scalar_t__ id_t ;
typedef int gid_t ;
struct TYPE_11__ {struct rusage p_cru; } ;
struct TYPE_10__ {int cr_uid; TYPE_2__* cr_prison; int cr_gid; } ;
struct TYPE_9__ {int pr_id; } ;
struct TYPE_8__ {int s_sid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*) ;
 int FUNC_2 (struct proc*) ;
 int FUNC_3 (struct proc*) ;
 scalar_t__ VAR_3 ;







 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_7 ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (TYPE_5__*,int) ;
 int FUNC_8 (struct proc*,int *,int *) ;
 int FUNC_9 (struct proc*,int *,int *) ;
 scalar_t__ FUNC_10 (struct thread*,struct proc*) ;
 int FUNC_11 (struct thread*,struct proc*,int*,int) ;
 int VAR_8 ;
 int FUNC_12 (int *,int ) ;

__attribute__((used)) static int
FUNC_13(struct thread *VAR_9, struct proc *VAR_10, idtype_t VAR_11, id_t VAR_12,
    int *VAR_13, int VAR_14, struct __wrusage *VAR_15, siginfo_t *VAR_16,
    int VAR_17)
{
 struct rusage *VAR_18;

 FUNC_12(&VAR_8, VAR_4);

 FUNC_0(VAR_10);

 switch (VAR_11) {
 case 134:
  if (VAR_10->p_procdesc != ((void*)0)) {
   FUNC_3(VAR_10);
   return (0);
  }
  break;
 case 130:
  if (VAR_10->p_pid != (pid_t)VAR_12) {
   FUNC_3(VAR_10);
   return (0);
  }
  break;
 case 131:
  if (VAR_10->p_pgid != (pid_t)VAR_12) {
   FUNC_3(VAR_10);
   return (0);
  }
  break;
 case 129:
  if (VAR_10->p_session->s_sid != (pid_t)VAR_12) {
   FUNC_3(VAR_10);
   return (0);
  }
  break;
 case 128:
  if (VAR_10->p_ucred->cr_uid != (uid_t)VAR_12) {
   FUNC_3(VAR_10);
   return (0);
  }
  break;
 case 133:
  if (VAR_10->p_ucred->cr_gid != (gid_t)VAR_12) {
   FUNC_3(VAR_10);
   return (0);
  }
  break;
 case 132:
  if (VAR_10->p_ucred->cr_prison->pr_id != (int)VAR_12) {
   FUNC_3(VAR_10);
   return (0);
  }
  break;





 default:
  FUNC_3(VAR_10);
  return (0);
 }

 if (FUNC_10(VAR_9, VAR_10)) {
  FUNC_3(VAR_10);
  return (0);
 }

 if (((VAR_14 & VAR_6) == 0) && (VAR_10->p_state == VAR_3)) {
  FUNC_3(VAR_10);
  return (0);
 }
 if ((VAR_10->p_sigparent != VAR_5) ^
     ((VAR_14 & VAR_7) != 0)) {
  FUNC_3(VAR_10);
  return (0);
 }

 if (VAR_16 != ((void*)0)) {
  FUNC_7(VAR_16, sizeof(*VAR_16));
  VAR_16->si_errno = 0;







  VAR_16->si_signo = VAR_5;





  if (FUNC_4(VAR_10->p_xsig)) {
   VAR_16->si_code = VAR_0;
   VAR_16->si_status = FUNC_6(VAR_10->p_xsig);
  } else if (FUNC_5(VAR_10->p_xsig)) {
   VAR_16->si_code = VAR_2;
   VAR_16->si_status = FUNC_6(VAR_10->p_xsig);
  } else {
   VAR_16->si_code = VAR_1;
   VAR_16->si_status = VAR_10->p_xexit;
  }

  VAR_16->si_pid = VAR_10->p_pid;
  VAR_16->si_uid = VAR_10->p_ucred->cr_uid;







 }






 if (VAR_15 != ((void*)0)) {
  VAR_18 = &VAR_15->wru_self;
  *VAR_18 = VAR_10->p_ru;
  FUNC_1(VAR_10);
  FUNC_9(VAR_10, &VAR_18->ru_utime, &VAR_18->ru_stime);
  FUNC_2(VAR_10);

  VAR_18 = &VAR_15->wru_children;
  *VAR_18 = VAR_10->p_stats->p_cru;
  FUNC_8(VAR_10, &VAR_18->ru_utime, &VAR_18->ru_stime);
 }

 if (VAR_10->p_state == VAR_3 && !VAR_17) {
  FUNC_11(VAR_9, VAR_10, VAR_13, VAR_14);
  return (-1);
 }
 return (1);
}
