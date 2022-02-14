
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct timeval {int tv_sec; int tv_usec; } ;
struct thread {struct proc* td_proc; } ;
struct rusage {int ru_ixrss; int ru_idrss; int ru_isrss; int ru_inblock; int ru_oublock; } ;
struct proc {int p_flag; struct plimit* p_limit; int p_acflag; TYPE_4__* p_ucred; TYPE_3__* p_stats; int p_comm; TYPE_2__* p_pgrp; } ;
struct plimit {int dummy; } ;
struct acctv3 {int ac_btime; int ac_version; int ac_len; int ac_len2; scalar_t__ ac_zero; int ac_flagx; int ac_gid; int ac_uid; void* ac_io; void* ac_mem; void* ac_etime; void* ac_stime; void* ac_utime; int ac_comm; int ac_tty; } ;
typedef int off_t ;
typedef int caddr_t ;
typedef int acct ;
struct TYPE_8__ {int cr_rgid; int cr_ruid; } ;
struct TYPE_7__ {struct timeval p_start; } ;
struct TYPE_6__ {TYPE_1__* pg_session; } ;
struct TYPE_5__ {scalar_t__ s_ttyp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct proc*) ;
 int FUNC_1 (struct proc*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int * VAR_12 ;
 int FUNC_2 (int ,int ,int) ;
 void* FUNC_3 (int) ;
 void* FUNC_4 (struct timeval) ;
 int FUNC_5 (struct timeval*) ;
 int VAR_13 ;
 int FUNC_6 (struct plimit*) ;
 struct plimit* FUNC_7 (int ) ;
 int FUNC_8 (struct timeval*) ;
 int VAR_14 ;
 int FUNC_9 (struct proc*,struct rusage*,struct timeval*,struct timeval*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int VAR_15 ;
 int FUNC_12 (struct timeval*,struct timeval*) ;
 int FUNC_13 (struct timeval*,struct timeval*) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (int ,int *,int ,int,int ,int ,int,int ,int ,int *,struct thread*) ;

int
FUNC_16(struct thread *VAR_16)
{
 struct acctv3 VAR_17;
 struct timeval VAR_18, VAR_19, VAR_20;
 struct plimit *VAR_21;
 struct proc *VAR_22;
 struct rusage VAR_23;
 int VAR_24, VAR_25;





 if (VAR_12 == ((void*)0) || VAR_10)
  return (0);

 FUNC_10(&VAR_11);






 if (VAR_12 == ((void*)0) || VAR_10) {
  FUNC_11(&VAR_11);
  return (0);
 }

 VAR_22 = VAR_16->td_proc;





 FUNC_10(&VAR_14);
 FUNC_0(VAR_22);


 if ((VAR_22->p_flag & VAR_5) && VAR_22->p_pgrp->pg_session->s_ttyp)
  VAR_17.ac_tty = FUNC_14(VAR_22->p_pgrp->pg_session->s_ttyp);
 else
  VAR_17.ac_tty = VAR_4;
 FUNC_11(&VAR_14);


 FUNC_2(VAR_22->p_comm, VAR_17.ac_comm, sizeof VAR_17.ac_comm);


 FUNC_9(VAR_22, &VAR_23, &VAR_18, &VAR_19);
 VAR_17.ac_utime = FUNC_4(VAR_18);
 VAR_17.ac_stime = FUNC_4(VAR_19);


 FUNC_5(&VAR_20);
 FUNC_12(&VAR_20, &VAR_22->p_stats->p_start);
 VAR_17.ac_btime = VAR_20.tv_sec;
 FUNC_8(&VAR_20);
 FUNC_13(&VAR_20, &VAR_22->p_stats->p_start);
 VAR_17.ac_etime = FUNC_4(VAR_20);


 VAR_20 = VAR_18;
 FUNC_12(&VAR_20, &VAR_19);

 VAR_24 = VAR_20.tv_sec * VAR_13 + VAR_20.tv_usec / VAR_15;
 if (VAR_24)
  VAR_17.ac_mem = FUNC_3((VAR_23.ru_ixrss + VAR_23.ru_idrss +
      + VAR_23.ru_isrss) / VAR_24);
 else
  VAR_17.ac_mem = 0;


 VAR_17.ac_io = FUNC_3(VAR_23.ru_inblock + VAR_23.ru_oublock);


 VAR_17.ac_uid = VAR_22->p_ucred->cr_ruid;
 VAR_17.ac_gid = VAR_22->p_ucred->cr_rgid;


 VAR_17.ac_flagx = VAR_22->p_acflag;


 VAR_17.ac_flagx |= VAR_0;
 VAR_17.ac_zero = 0;
 VAR_17.ac_version = 3;
 VAR_17.ac_len = VAR_17.ac_len2 = sizeof(VAR_17);




 VAR_21 = VAR_22->p_limit;
 VAR_22->p_limit = FUNC_7(VAR_9);
 FUNC_1(VAR_22);
 FUNC_6(VAR_21);




 VAR_25 = FUNC_15(VAR_7, VAR_12, (caddr_t)&VAR_17, sizeof (VAR_17),
     (off_t)0, VAR_6, VAR_1|VAR_2, VAR_8, VAR_3,
     ((void*)0), VAR_16);
 FUNC_11(&VAR_11);
 return (VAR_25);
}
