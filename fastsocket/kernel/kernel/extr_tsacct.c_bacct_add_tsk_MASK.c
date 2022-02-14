
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct timespec {scalar_t__ tv_sec; } ;
struct taskstats {int ac_comm; int ac_majflt; int ac_minflt; void* ac_stimescaled; void* ac_utimescaled; void* ac_stime; void* ac_utime; int ac_ppid; int ac_gid; int ac_uid; int ac_pid; int ac_sched; int ac_nice; int ac_flag; int ac_exitcode; scalar_t__ ac_btime; int ac_etime; } ;
struct task_struct {int flags; int comm; int maj_flt; int min_flt; int stimescaled; int utimescaled; int stime; int utime; int real_parent; int pid; int policy; int exit_code; int start_time; } ;
struct cred {int gid; int uid; } ;
struct TYPE_2__ {int tgid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 struct cred* FUNC_1 (struct task_struct*) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct timespec*) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 (struct task_struct*) ;
 TYPE_1__* FUNC_7 (int ) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int ,int ,int) ;
 int FUNC_11 (struct task_struct*) ;
 scalar_t__ FUNC_12 (struct task_struct*) ;
 struct timespec FUNC_13 (struct timespec,int ) ;
 int FUNC_14 (struct timespec*) ;

void FUNC_15(struct taskstats *VAR_11, struct task_struct *VAR_12)
{
 const struct cred *VAR_13;
 struct timespec VAR_14, VAR_15;
 u64 VAR_16;

 FUNC_0(VAR_10 < VAR_9);


 FUNC_4(&VAR_14);
 VAR_15 = FUNC_13(VAR_14, VAR_12->start_time);

 VAR_16 = FUNC_14(&VAR_15);
 FUNC_3(VAR_16, VAR_4);
 VAR_11->ac_etime = VAR_16;
 VAR_11->ac_btime = FUNC_5() - VAR_15.tv_sec;
 if (FUNC_12(VAR_12)) {
  VAR_11->ac_exitcode = VAR_12->exit_code;
  if (VAR_12->flags & VAR_6)
   VAR_11->ac_flag |= VAR_1;
 }
 if (VAR_12->flags & VAR_8)
  VAR_11->ac_flag |= VAR_2;
 if (VAR_12->flags & VAR_5)
  VAR_11->ac_flag |= VAR_0;
 if (VAR_12->flags & VAR_7)
  VAR_11->ac_flag |= VAR_3;
 VAR_11->ac_nice = FUNC_11(VAR_12);
 VAR_11->ac_sched = VAR_12->policy;
 VAR_11->ac_pid = VAR_12->pid;
 FUNC_8();
 VAR_13 = FUNC_1(VAR_12);
 VAR_11->ac_uid = VAR_13->uid;
 VAR_11->ac_gid = VAR_13->gid;
 VAR_11->ac_ppid = FUNC_6(VAR_12) ?
    FUNC_7(VAR_12->real_parent)->tgid : 0;
 FUNC_9();
 VAR_11->ac_utime = FUNC_2(VAR_12->utime);
 VAR_11->ac_stime = FUNC_2(VAR_12->stime);
 VAR_11->ac_utimescaled = FUNC_2(VAR_12->utimescaled);
 VAR_11->ac_stimescaled = FUNC_2(VAR_12->stimescaled);
 VAR_11->ac_minflt = VAR_12->min_flt;
 VAR_11->ac_majflt = VAR_12->maj_flt;

 FUNC_10(VAR_11->ac_comm, VAR_12->comm, sizeof(VAR_11->ac_comm));
}
