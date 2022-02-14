
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uid_t ;
struct wait_opts {int wo_flags; scalar_t__ wo_stat; scalar_t__ wo_rusage; int wo_info; } ;
struct task_struct {TYPE_2__* sighand; TYPE_1__* signal; } ;
typedef int pid_t ;
struct TYPE_6__ {int uid; } ;
struct TYPE_5__ {int siglock; } ;
struct TYPE_4__ {int flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_3__* FUNC_1 (struct task_struct*) ;
 int FUNC_2 (struct task_struct*) ;
 int FUNC_3 (struct task_struct*,int ,scalar_t__) ;
 int FUNC_4 (struct task_struct*) ;
 int FUNC_5 (int,scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct task_struct*) ;
 int VAR_6 ;
 int FUNC_10 (int) ;
 int FUNC_11 (struct wait_opts*,struct task_struct*,int,int ,int ,int ) ;

__attribute__((used)) static int FUNC_12(struct wait_opts *VAR_7, struct task_struct *VAR_8)
{
 int VAR_9;
 pid_t VAR_10;
 uid_t VAR_11;

 if (!FUNC_10(VAR_7->wo_flags & VAR_4))
  return 0;

 if (!(VAR_8->signal->flags & VAR_3))
  return 0;

 FUNC_7(&VAR_8->sighand->siglock);

 if (!(VAR_8->signal->flags & VAR_3)) {
  FUNC_8(&VAR_8->sighand->siglock);
  return 0;
 }
 if (!FUNC_10(VAR_7->wo_flags & VAR_5))
  VAR_8->signal->flags &= ~VAR_3;
 VAR_11 = FUNC_1(VAR_8)->uid;
 FUNC_8(&VAR_8->sighand->siglock);

 VAR_10 = FUNC_9(VAR_8);
 FUNC_2(VAR_8);
 FUNC_6(&VAR_6);

 if (!VAR_7->wo_info) {
  VAR_9 = VAR_7->wo_rusage
   ? FUNC_3(VAR_8, VAR_1, VAR_7->wo_rusage) : 0;
  FUNC_4(VAR_8);
  if (!VAR_9 && VAR_7->wo_stat)
   VAR_9 = FUNC_5(0xffff, VAR_7->wo_stat);
  if (!VAR_9)
   VAR_9 = VAR_10;
 } else {
  VAR_9 = FUNC_11(VAR_7, VAR_8, VAR_10, VAR_11,
          VAR_0, VAR_2);
  FUNC_0(VAR_9 == 0);
 }

 return VAR_9;
}
