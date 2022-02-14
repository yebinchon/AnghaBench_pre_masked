
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int signal; } ;
struct task_struct {TYPE_5__* signal; int blocked; TYPE_1__ pending; } ;
struct seq_file {int dummy; } ;
typedef int sigset_t ;
struct TYPE_12__ {TYPE_3__* user; } ;
struct TYPE_8__ {int signal; } ;
struct TYPE_11__ {TYPE_4__* rlim; int count; TYPE_2__ shared_pending; } ;
struct TYPE_10__ {unsigned long rlim_cur; } ;
struct TYPE_9__ {int sigpending; } ;


 size_t VAR_0 ;
 TYPE_6__* FUNC_0 (struct task_struct*) ;
 void* FUNC_1 (int *) ;
 int FUNC_2 (struct task_struct*,int *,int *) ;
 scalar_t__ FUNC_3 (struct task_struct*,unsigned long*) ;
 int FUNC_4 (struct seq_file*,char*,int *) ;
 int FUNC_5 (struct seq_file*,char*,unsigned long,...) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct task_struct*,unsigned long*) ;

__attribute__((used)) static inline void FUNC_8(struct seq_file *VAR_1, struct task_struct *VAR_2)
{
 unsigned long VAR_3;
 sigset_t VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 int VAR_9 = 0;
 unsigned long VAR_10 = 0;
 unsigned long VAR_11 = 0;

 FUNC_6(&VAR_4);
 FUNC_6(&VAR_5);
 FUNC_6(&VAR_6);
 FUNC_6(&VAR_7);
 FUNC_6(&VAR_8);

 if (FUNC_3(VAR_2, &VAR_3)) {
  VAR_4 = VAR_2->pending.signal;
  VAR_5 = VAR_2->signal->shared_pending.signal;
  VAR_6 = VAR_2->blocked;
  FUNC_2(VAR_2, &VAR_7, &VAR_8);
  VAR_9 = FUNC_1(&VAR_2->signal->count);
  VAR_10 = FUNC_1(&FUNC_0(VAR_2)->user->sigpending);
  VAR_11 = VAR_2->signal->rlim[VAR_0].rlim_cur;
  FUNC_7(VAR_2, &VAR_3);
 }

 FUNC_5(VAR_1, "Threads:\t%d\n", VAR_9);
 FUNC_5(VAR_1, "SigQ:\t%lu/%lu\n", VAR_10, VAR_11);


 FUNC_4(VAR_1, "SigPnd:\t", &VAR_4);
 FUNC_4(VAR_1, "ShdPnd:\t", &VAR_5);
 FUNC_4(VAR_1, "SigBlk:\t", &VAR_6);
 FUNC_4(VAR_1, "SigIgn:\t", &VAR_7);
 FUNC_4(VAR_1, "SigCgt:\t", &VAR_8);
}
